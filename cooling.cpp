#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,m;
	cin>>t;
	while(t--) {
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
                        cin>>b[i];

		for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if(a[j]>a[j+1]) {
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}

		for(int i=0;i<n-1;i++)
                for(int j=0;j<n-1-i;j++) 
                        if(b[j]>b[j+1]) {
                                k=b[j];
                                b[j]=b[j+1];
                                b[j+1]=k;
                        }

		for(int i=0,j=0;i<n && j<n;) {
			if(a[i]<=b[j]) {
				i++;
				j++;
			} else j++;
			m=i;
		}
	
		cout<<m<<endl;
	}
	return 0;
}
