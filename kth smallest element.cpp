#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the Array:";
	cin>>n;
	int a[n],i;
	cout<<"Enter the Array:";
	for(i=0;i<n;i++)
		cin>>a[i];
	int k;
	cout<<"Enter the value of K:";
	cin>>k;
	
	priority_queue <int> maxh;
	for(i=0;i<n;i++)
	{
		maxh.push(a[i]);
		if(maxh.size()>k)
		{
			maxh.pop();
		}
	}
	
	cout<<"The Kth Smallest element of this array is: "<<maxh.top();
	
	
	
	
	
	
	return 0;
}
