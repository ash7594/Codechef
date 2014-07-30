#include<bits/stdc++.h>
using namespace std;
int n,am,ans;

void check(int i,int amt,int a[]) {
	if(ans==1) return;
	if(amt==am) {
		ans=1;
		return;
	}
	if(i<n) {
		if(a[i]<=am)
			check(i+1,amt+a[i],a);
		check(i+1,amt,a);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ans=0;
		cin>>n>>am;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		check(0,0,a);
		if(ans==1) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
