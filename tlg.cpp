#include<bits/stdc++.h>
using namespace std;

#define maxf(a,b) ((a>b)?(a-b):(b-a))
#define play(a,b) ((a>b)?0:1)

int main() {
	int n;
	int b[2]={0};
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++) {
		for(int j=0;j<2;j++) {
			cin>>a[i][j];
			if(i>0)
				a[i][j] += a[i-1][j];
		}
		if(b[play(a[i][0],a[i][1])] < maxf(a[i][0],a[i][1]))
			b[play(a[i][0],a[i][1])] = maxf(a[i][0],a[i][1]);
	}
	if(b[0]>b[1]) cout<<"1 "<<b[0];
	else cout<<"2 "<<b[1];
	return 0;
}
