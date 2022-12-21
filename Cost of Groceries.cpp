#include <iostream>
using namespace std;

int main() {
    int t,n,x;
	cin>>t;
	while(t--)
	{
	 cin>>n>>x;
	 int f[n],c[n];
	 for(int i=0;i<n;i++)
	 {
	     cin>>f[i];
	 }
	 for(int i=0;i<n;i++)
	 {
	     cin>>c[i];
	 }
	 int tc=0;
	 for(int i=0;i<n;i++)
	 {
	     if(f[i]>=x)
	     tc=tc+c[i];
	 }
	 cout<<endl<<tc;
	}
	return 0;
}
