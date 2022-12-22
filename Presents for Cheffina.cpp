#include <iostream>
using namespace std;

int main() {
    int t,a,c,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if((n%5)==1)
	    a=1;
	    else if((n%5)==2)
	    a=2;
	    else if((n%5)==3)
	    a=3;
	    else
	    a=4;
	    if(n%5==0)
	    c=4*(n/5);
	    else
	    c=4*(n/5)+a;
	    cout<<endl<<c;
	}
	return 0;
}
