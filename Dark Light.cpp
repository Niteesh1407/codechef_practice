//link: https://www.codechef.com/problems/DARLIG

CODE:

#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if(k==1)
	    {
	        if(n%4==0)
	        cout<<endl<<"On";
	        else
	        cout<<endl<<"Ambiguous";
	    }
	    if(k==0)
	    {
	        if(n%4==0)
	        cout<<endl<<"Off";
	        else
	        cout<<endl<<"On";
	    }
	}
	return 0;
}
