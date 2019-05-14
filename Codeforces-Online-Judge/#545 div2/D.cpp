#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
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
const int N = 1e5+10;

int longestPrefixSuffix(string s) 
{ 
    int n = s.length(); 
  
    int lps[n]; 
    lps[0] = 0; // lps[0] is always 0 
  
    // length of the previous 
    // longest prefix suffix 
    int len = 0; 
  
    // the loop calculates lps[i] 
    // for i = 1 to n-1 
    int i = 1; 
    while (i < n) 
    { 
        if (s[i] == s[len]) 
        { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else // (pat[i] != pat[len]) 
        { 
            // This is tricky. Consider 
            // the example. AAACAAAA 
            // and i = 7. The idea is 
            // similar to search step. 
            if (len != 0) 
            { 
                len = lps[len-1]; 
  
                // Also, note that we do 
                // not increment i here 
            } 
            else // if (len == 0) 
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
  
    int res = lps[n-1]; 
  
    // Since we are looking for 
    // non overlapping parts. 
	return res;
    //return (res > n/2)? n/2 : res; 
} 

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	string s,t;
	cin>>s>>t;
	
	if(len(t) > len(s))cout<<s<<endl;
	else{
		int z = 0,o = 0;
		loop(i,0,len(s))if(s[i]=='1')o++;else z++;
			
		int encx = longestPrefixSuffix(t);
	
		//cout<<"VALOR DE ENCAIXE = "<<encx<<endl;
	
		int tz = 0,to = 0;
		loop(i,0,encx)if(t[i]=='1')to++;else tz++;
		int sz = 0,so = 0;
		loop(i,encx,len(t))if(t[i]=='1')so++;else sz++;

		z -= tz;
		o -= to;
			
		//cout<<tz<<' '<<to<<' '<<sz<<' '<<so<<endl;
				
		int times = 0;
		while(z - sz >= 0 and o - so >= 0){
			z -= sz;
			o -= so;
			times++;
		}	
	
		if(!times)z += tz, o += to;

		//cout<<times<<endl;
	
		if(times){
			cout<<t.substr(0,encx);
			loop(i,0,times)cout<<t.substr(encx);
		}
		loop(i,0,z)cout<<'0';
		loop(i,0,o)cout<<'1';
		cout<<endl;
		
			
	}

	return 0;
}
