#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,s,x,y,k,t;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>k;
	    r=abs(x-y)/k;
	    s=abs(x-y)%k;
	    if(s==0)
	    cout<<endl<<r;
	    else
	    cout<<endl<<r+1;
	}
	return 0;
}
