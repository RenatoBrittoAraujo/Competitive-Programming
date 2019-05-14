#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;

class SegmentTree{
    private:
        vi st,A;
        int n;
        int left(int p){return (p<<1);}
        int right(int p){return (p<<1)+1;}
        bool spc;

        void build(int p,int L,int R){
            if(L==R){if(L<n)st[p]=A.at(L);}
            else{
                build(left(p),L,(L+R)/2);
                build(right(p),(L+R)/2+1,R);
                int p1 = st[left(p)];
                int p2 = st[right(p)];
                st[p] = p1+p2;
            }
        }

        void change_el(int p,int L,int R,int e,int n){
            //TODO -> rebuild tree only in necessary parts on O(log(n))
        }


        int rsq(int p,int L, int R,int i,int j){
            if(spc)cout<<"RSQ L="<<L<<" R="<<R<<"\n";
            if(i>R||j<L){if(spc)cout<<"Return 0\n";return 0;}
            if(L>=i&&R<=j){if(spc)cout<<"Return p = "<<p<<" st[p] = "<<st[p]<<"\n";return st[p];}

            int p1 = rsq(left(p),L,(L+R)/2,i,j);
            int p2 = rsq(right(p),(L+R)/2+1,R,i,j);
            if(spc)cout<<"Return p1+p2 = "<<p1<<" + "<<p2<<endl;
            return p1+p2;
        }

     public:
        SegmentTree (const vi &_A,bool _spc=0){
            A=_A;
            spc=_spc;
            n=A.size();
            st.assign(4*n,0);
            build(1,0,n-1);
        }

        void print_tree(){
            for(int i=0;i<st.size();i++)cout<<this->st[i]<<" ";
            cout<<endl;
        }

        void print_array(){
            cout<<"Current array -> ";
            for(int i=0;i<A.size();i++)cout<<this->A[i]<<" ";
            cout<<endl;
            cout<<"      Indexes -> ";
            for(int i=0;i<A.size();i++)cout<<i<<" ";
            cout<<endl;
        }

        void change_el(int e,int n){change_el(1,0,n-1,e,n);}

        void flip_spc(){this->spc=!spc;}

        int rsq(int i,int j){return rsq(1,0,n-1,i,j);}

        void new_el(int v,int p){
            if(p<0||p>=n)this->A.push_back(v);
            else{
                bool f=0;vi sup;
                for(int i=0;i<n+1;i++){
                    if(i==p){f=1;sup.push_back(v);}
                    else sup.push_back(this->A[i-f]);
                }
                this->A=sup;
            }
            this->n++;
            this->st.assign(4*this->n,0);
            build(1,0,n-1);
        }

};

int main(){
    int arr[] = {1,2,4,3,7,1,2,1};
    vi A(arr,arr+8);
    bool cm;
    cout<<"Want supporting prints for rsq? ";cin>>cm;
    SegmentTree st(A,cm);
    int i,j;
    while(1){
        int op;
        cout<<"OPERATION (1-RSQ|2-NEW ARRAY|3-CHANGE ARRAY ELEMENT|4-ADD ARRAY ELEMENT|5-EXIT|\n6-PRINT ARRAY|0-SWITCH SUPPORTING PRINTS): ";
        cin>>op;
        if(op==5)break;
        switch(op){
        case 1:
            cout<<"RSQ(i,j) -> ";cin>>i>>j;cout<<" RSQ -> "<<st.rsq(i,j)<<endl;
            break;
        case 2:
            {
                vi sup_arr;
                cout<<"Array size = ";do{cin>>i;}while(i<1);
                cout<<"Array elements = ";
                for(int k=0;k<i;k++)
                    cin>>j,sup_arr.push_back(j);
                st = SegmentTree(sup_arr,cm);
            }
            break;
        case 3:
            cout<<"Element ID = ";cin>>i;
            cout<<"New value = ";cin>>j;
            st.change_el(i,j);
            break;
        case 4:
            cout<<"New element = ";cin>>i;
            cout<<"Position (invalid number puts it in front of last position) = ";cin>>j;
            st.new_el(i,j);
            st.print_array();
            break;
        case 6:
            st.print_array();
            break;
        case 0:
            st.flip_spc();
            break;
        }
    }
    return 0;
}