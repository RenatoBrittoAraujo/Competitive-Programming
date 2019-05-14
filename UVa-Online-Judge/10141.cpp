#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,p,ca=1;
  string s;
  while(cin>>n>>p,bool(n+p)) {
    if (ca!=1)cout<<endl;
    getline(cin, s);
    for (int i=0;i<n;i++)getline(cin,s);
    double bp;
    int c=-1;
    string na;
    for (int i=0;i<p;i++){
      string pn;
      double pr;
      int mr;
      getline(cin,pn);
      cin>>pr>>mr;
      if (mr>c||(mr==c&&bp>pr)){c=mr;na=pn;bp=pr;}
      getline(cin,s);
      for (int j=0;j<mr;j++)getline(cin,s);
    }
    cout<<"RFP #"<<ca++<<endl<<na<<endl;
  }
  return 0;
}

//I would like to point out this is total bullshit ^^
/* This, this is how it's solved
#include <bits/stdc++.h>

using namespace std;

using is = pair<float, string>;
using iis = pair<float,is>;

set<string> re;
vector<iis> rn;

struct sort_pred1 {
    bool operator()(const iis &left, const iis &right) {
        return left.first > right.first;
    }
};

struct sort_pred2 {
    bool operator()(const iis &left, const iis &right) {
        return left.second.first > right.second.first;
    }
};

int main()
{
    int n,p,ca=1;
    while(cin>>n>>p,bool(n+p)){
        re.clear();
        rn.clear();
        cin.ignore();
        string s;
        for(int i=0;i<n;i++){getline(cin,s);re.insert(s);}
        for(int i=0;i<p;i++){
            string rnn;
            getline(cin,rnn);
            float v;int r;
            cin>>v>>r;
            int rm=0;
            cin.ignore();
            for(int j=0;j<r;j++){getline(cin,s);if(re.count(s)!=0)rm++;}
            float pr = float(rm)/float(r);
            rn.push_back(iis(pr,is(v,rnn)));
        }
        string tbs;
        sort(rn.begin(),rn.end(), sort_pred1());
        for(int i=1;i<p;i++)if(rn[i].first<rn[0].first)rn.erase(rn.begin()+i+1);
        if(rn.size()==1)tbs = rn[0].second.second;
        else{
            sort(rn.begin(), rn.end(), sort_pred2());
            tbs = rn[0].second.second;
        }
        cout<<"RFP #"<<ca<<endl<<tbs<<endl<<endl;
        ca++;
    }
    return 0;
}
*/
