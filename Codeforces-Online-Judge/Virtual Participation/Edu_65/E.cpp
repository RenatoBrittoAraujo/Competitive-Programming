#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, L;
	cin >> n >> L;
	vector<pair<int, int>> ranges(L + 1, pair<int, int>(n + 1, -1));
	vector<int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		ranges[a[i]].first = min(ranges[a[i]].first, i);
		ranges[a[i]].second = max(ranges[a[i]].second, i);
	}

	vector<int> left(L + 1, n + 1);
	left[0] = -1;
	int last = -1;
	long long ans = 1;

	for(int i = 1; i <= L; i++) {
		if(ranges[i].second == -1) {
			left[i] = left[i-1];
			left[i] = last;
			if(i == L) {
				cout << (long long) L * (L + 1) / 2 << '\n';
				return 0;
			}
			ans++;
			continue;
		}
		if(last >= ranges[i].first) {
			break;
		}
		if(i == L) {
			cout << (long long) L * (L + 1) / 2 << '\n';
			return 0;
		}
		last = ranges[i].second;
		left[i] = last;
		cout<<"ON left "<<i<<" adding "<<1<<"to ans\n";		
		ans++;
	}

	for(int i = 1; i <= L; i++)
		cout<<left[i]<<' ';
		cout<<endl;

	last = n + 1;
	int pt = 0;

	for(int i = L; i > 0; i--) {
		cout<<"ON "<<i<<endl;
		if(ranges[i].second == -1) {
			cout<<"NO ELEMENT CASE\n";
			while(pt <= L && left[pt] < last) {
				pt++;
			}
			while(pt > 0 && left[pt-1] >= last) {
				pt--;
			}
			ans += pt;
			continue;
		}
		if(last <= ranges[i].second) {
			break;
			cout<<"FINISHED\n";
		}
		last = ranges[i].first;
		while(pt <= L && left[pt] < last) {
			pt++;
		}
		while(pt > 0 && left[pt-1] >= last) {
			pt--;
		}
		cout<<"Adding "<<pt<<" to answer\n";
		ans += pt;
	}

	cout << ans << '\n';
}
