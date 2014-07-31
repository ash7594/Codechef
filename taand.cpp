#include<bits/stdc++.h>
using namespace std;

#define getcx getchar_unlocked

inline void inp(long long *n) {
        *n=0;
        int ch=getcx();
        while(!(ch>='0' && ch<='9'))
                ch=getcx();
        while(ch>='0' && ch<='9')
                *n=(*n<<3)+(*n<<1)+ch-'0',ch=getcx();
}

int main() {
	long long n;
	inp(&n);
	long long a[n],maxe=0,temp;
	for(int i=0;i<n;i++) {
		inp(&a[i]);
	}
	for(int i=0;i<n-1;i++)
	for(int j=0;j<n-i-1;j++)
	if(a[j+1]>a[j]) {
		temp=a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
	}

	for(int i=0;i<n-1;i++) {
	if(a[i]!=a[i+1]) {
		temp=a[i]&a[i+1];
		if(maxe<temp)
			maxe=temp;
	}}
	cout<<maxe;
	return 0;
}
