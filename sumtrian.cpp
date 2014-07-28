#include<iostream>
#define maxf(a,b) ((a>b)?a:b)
using namespace std;

int main() {
	int t,r;
	cin>>t;
	while(t--) {
		cin>>r;
		int a[r][r];
		for(int i=0;i<r;i++) {
			for(int j=0;j<=i;j++)
				cin>>a[i][j];
		}

		for(int i=r-2;i>=0;i--) {
			for(int j=0;j<=i;j++) {
				a[i][j] += maxf(a[i+1][j],a[i+1][j+1]);
			}
		}
		
		cout<<a[0][0]<<endl;
	}	
	return 0;
}
