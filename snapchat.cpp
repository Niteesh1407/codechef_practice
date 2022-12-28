//link: https://www.codechef.com/START71D/problems/SNAPCHAT

CODE:

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i=0,f=0;
	    cin>>n;
	    int a[n],b[n],count=0,k=0;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==0||b[i]==0)     //if streak was lost
	        {
	            if(count>k)        //taking the max streak;
	            k=count;
	            count=0;
	        }
	        else
	        {
	            count=count+1;    //counting streak
	        }
	    }
	    if(k>count)          //checking if streak is maintained all days
	    cout<<endl<<k;
	    else
	    cout<<endl<<count;
	}
	return 0;
}
