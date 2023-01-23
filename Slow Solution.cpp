//link:  https://www.codechef.com/problems/SLOWSOLN

CODE:

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int T,N,S,iter=0;
	    cin>>T>>N>>S;
	    while(T-- && S!=0)
	    {
	        if(N<=S)
	        {
	            iter=iter+(N*N);
	            S=S-N;
	        }
	        else
	        {
	            iter=iter+(S*S);
	            S=0;
	        }
	    }
	    cout<<endl<<iter;
	}
	return 0;
}
