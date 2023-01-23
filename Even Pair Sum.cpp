//link:  https://www.codechef.com/problems/EVENPSUM?tab=statement

CODE:

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long a,b;
	    cin>>a>>b;
	    if(b&1)
	    cout<<endl<<((b+1)/2)*a-a/2;
	    else
	    cout<<endl<<(a*b/2);
	}
	return 0;
}
