//link: https://www.codechef.com/START71D/problems/INSTAGRAM

CODE:

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x>(10*y))
	    cout<<endl<<"YES";
	    else
	    cout<<endl<<"NO";
	}
	return 0;
}
