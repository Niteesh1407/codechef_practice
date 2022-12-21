#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s;
	    int k=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	        for(int j=i+1;j<s.length();j++)
	        {
	            if(s[i]=='1')
	            break;
	            if(s[i]=='0' && s[j]=='1')
	            k++;
	        }
	    }
	    cout<<endl<<k;
	}
	return 0;
}
