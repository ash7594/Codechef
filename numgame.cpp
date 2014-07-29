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
	long long t,n;
	inp(&t);
	while(t--) {
		inp(&n);
		if(n%2==0)
			printf("ALICE\n");
		else
			printf("BOB\n");	
	}
	return 0;
}
