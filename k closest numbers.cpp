#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the Array: ";
	cin>>n;
	int a[n],i;
	cout<<"Enter the Array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	int k,x;
	cout<<"Enter the value of K: ";
	cin>>k;
	cout<<"Enter the Value of X: ";
	cin>>x;
	
	priority_queue < pair<int,int> > maxh; 
	
	for(i=0;i<n;i++)
	{
		maxh.push({abs(a[i]-x),a[i]});
		if(maxh.size()>k)
		{
			maxh.pop();		
		}
	}
	
	cout<<"The "<<k<<" closest numbers of "<<x<<" are: ";
	while(maxh.size()>0)
	{
		cout<<maxh.top().second<<" ";
		maxh.pop();
	}
}
