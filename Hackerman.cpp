#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b;
	int prime(int);
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    int p=a+b;
	    if(prime(p))
	    cout<<endl<<"Alice";
	    else
	    cout<<endl<<"Bob";
	}
	return 0;
}
int prime(int n)
{
    int c=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    return 1;
    else 
    return 0;
}
