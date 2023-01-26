//link: https://www.codechef.com/DSAPREP_02/problems/SHARE

CODE:

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c,k,flag=0;
	int binarySearch(vector<int>,int,int,int);
	cin>>n>>m>>c;
	vector<int>N(n);
	vector<int>M(m);
	for(int i=0;i<n;i++)
	cin>>N[i];
	for(int i=0;i<m;i++)
	cin>>M[i];
	sort(N.begin(),N.end());
	sort(M.begin(),M.end());
	for(int i=0;i<n;i++)
	{
	    k=c-N[i];
	    if(binarySearch(M,k,0,m))
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
int binarySearch(vector<int>array, int x, int low, int high) {
  
	while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return 0;
}

