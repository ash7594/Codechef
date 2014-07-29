#include<bits/stdc++.h>
using namespace std;

#define getcx getchar_unlocked

inline void inp(int *n) {
	*n=0;
	int ch=getcx();
	while(!(ch>='0' && ch<='9'))
		ch=getcx();
	while(ch>='0' && ch<='9')
		*n=(*n<<3)+(*n<<1)+ch-'0',ch=getcx();
}

int main() {
	int n;
	h:
	inp(&n);
	if(n==0)
		return 0;
	
	int a[n+1];
	for(int i=1;i<=n;i++)
		inp(&a[i]);
	for(int i=1;i<=n;i++) {
		if((i)!=a[a[i]]) {
			printf("not ambiguous\n");
			goto h;
		}
	}
	printf("ambiguous\n");
	goto h;
}
