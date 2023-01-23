//link:  https://www.codechef.com/problems/PROGLANG

CODE:

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a0,b0,a1,a2,b1,b2;
	    cin>>a0>>b0>>a1>>b1>>a2>>b2;
	    if((a0==a1 && b0==b1)||(a0==b1 && b0==a1))
	    cout<<endl<<"1";
	    else if((a0==a2 && b0==b2)||(a0==b2 && b0==a2))
	    cout<<endl<<"2";
	    else
	    cout<<endl<<"0";
	}
	return 0;
}
