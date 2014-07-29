#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--) {
		char s[400],o[400];
		int sa=-1;
		int oa=-1;
		char a[400];
		cin>>a;
		s[++sa]='(';
		for(int i=0;a[i]!='\0';i++) {
			if(a[i]=='(')
				s[++sa] = a[i];
			else if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
				o[++oa] = a[i];
			else if(a[i]==')')
				while(s[sa--]!='(') {
					o[++oa] = s[sa+1];
				}
			else {
				if(s[sa]=='(')
					s[++sa]=a[i];
				else if(s[sa]=='+' || s[sa]=='-') {
					if(a[i]=='+' || a[i]=='-') {
						o[++oa]=s[sa];
						s[sa]=a[i];
					} else {
						s[++sa]=a[i];
					}
				} else if(s[sa]=='*' || s[sa]=='/') {
                                        if(a[i]=='*' || a[i]=='/' || a[i]=='+' || a[i]=='-') {
                                                o[++oa]=s[sa];
                                                s[sa]=a[i];
                                        } else {
                                                s[++sa]=a[i];
                                        }
                                } else {
                                       	o[++oa]=s[sa];
                                        s[sa]=a[i];
                                }
			}
		}
		while(s[sa--]!='(') {
                        o[++oa] = s[sa+1];
                }
		o[++oa]='\0';
		cout<<o<<endl;
	}
	return 0;
}
