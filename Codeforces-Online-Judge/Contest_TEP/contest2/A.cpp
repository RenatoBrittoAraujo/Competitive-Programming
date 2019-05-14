#include <bits/stdc++.h>

using namespace std;

double err = 1e-9;

int main()
{
	int n;
	double R, r;
	cin >> n >> R >> r;
		double PI = acos(-1.0);
		double theta_rad = asin(r/(R-r))*2.0;
		double max_plates = floor(2.0*PI / theta_rad);

		cout<<max_plates<<endl;
	
		//cout<<"N = "<<n<<" AND ="<<theta_rad*180.0/PI<<endl;
		
		if( (2.0*r > R and r <= 2.0*R and n <= 1) or
			(fabs(2.0*r - R) < err and n <= 2) or
			(2.0*r < R and n <= max_plates))
				cout<<"YES\n";
		else cout<<"NO\n";

	 

	return 0;
}
