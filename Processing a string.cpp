[link](https://www.codechef.com/problems/KOL15A)

#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int sum=0;
	    string s;
	    cin>>s;
	    for(char ch:s)
	    {
	        if(isdigit(ch))
	        sum+=ch-'0';
	    }
	    cout<<endl<<sum;
	}
	return 0;
}
