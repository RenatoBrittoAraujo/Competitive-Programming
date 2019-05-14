
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 5e5+10;

int a[N],b[N];
int n,x;	


int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	scanf("%d",&n);
	loop(i,0,n)scanf("%d",&a[i]);
	//cout<<"OK\n";
	int ans = 0;
	
	for(int i = 1;i < n - 1;i++){
		//cout<<"ON "<<i<<endl;
		if(a[i] == a[i-1] or a[i] == a[i+1]){
			b[i] = a[i];
			//cout<<"FIRST CASE\n";
		}else{	
			//cout<<"SECOND CASE\n";
			int j = i;
			while(j<n-1 and a[j]!=a[j+1])j++;
			//cout<<"END OF ALTERNATING SEQUENCE  = "<<j<<endl;
			ans = max(ans,(j-i+1)/2);
			//cout<<"ITERATING FROM i TO j-1\n";
			for(int x = i;x<j;x++){
				//cout<<"ON X = "<<x<<endl;
				if(x - i < j - x){
					b[x] = a[i-1];
					//cout<<"FIRST CASE B["<<x<<"] = "<<a[i-1]<<endl;
				}else{
					//cout<<"SECOND CASE B["<<x<<"] = "<<a[j]<<endl;
					b[x] = a[j];
				}
			}
			i = j - 1;
		}
	
	}
	b[0] = a[0];
	b[n-1] = a[n-1];
	printf("%d\n",ans);
	loop(i,0,n)printf("%d ",b[i]);
	printf("\n");
	return 0;
}
