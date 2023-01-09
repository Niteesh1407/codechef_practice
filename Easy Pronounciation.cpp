//link:  https://www.codechef.com/problems/EZSPEAK

CODE:

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    string s;
	    cin>>n>>s;
	    for(int i=0;i<n;i++)
	    {
	        char ch=s[i];
	        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	        {
	            c=0;
	        }
	        else
	        {
	            c++;
	            if(c>=4)
	            break;
	        }
	    }
	    if(c<4)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}
