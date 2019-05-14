#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define pb push_back
int arr[100000];

void merge(int l1,int r1,int l2,int r2){
	cout<<"MERGE CALL "<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<endl;
	int L = l1;
	int R = r2;
	vi v;
	while(l1<=r1||l2<=r2){
		if(l1<=r1&&l2<=r2){
			if(arr[l1]>arr[l2]){
				v.pb(arr[l1]);
				l1++;
			}else{
				v.pb(arr[l2]);
				l2++;
			}
		}else if(l1<=r1){
			v.pb(arr[l1]);l1++;
		}else{
			v.pb(arr[l2]);l2++;
		}
	}
	for(int i=L;i<=R;i++)arr[i]=v[i-L];
}

void merge_sort(int l,int r){
	cout<<"MERGE_SORT CALL "<<l<<' '<<r<<endl;
	if(l==r)return;
	int mid = (l+r)/2;
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	merge(l,mid,mid+1,r);
}

int main(){
	while(1){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		merge_sort(0,n-1);
		for(int i=0;i<n;i++)cout<<arr[i]<<' ';
		cout<<endl;
	}
}
