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
	
	
	
	
	priority_queue < int, vector<int> , greater<int> > minh; 
	
	for(i=0;i<n;i++)
	{
		minh.push(a[i]);
		if(minh.size()>k)
		{
			minh.pop();
		}
	}
	
	
	cout<<"The "<<k<<" Largest elements of this array are: ";
	while(minh.size()>0)
	{
		cout<<minh.top()<<" ";
		minh.pop();
	}
	

	

	
	
	
	
	
	return 0;
}
