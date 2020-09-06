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
	
	priority_queue< int, vector<int>, greater<int> >minh;
	vector <int> v;
	for(i=0;i<n;i++)
	{
		minh.push(a[i]);
		if(minh.size()>k)
		{
			v.push_back(minh.top());
			minh.pop();
		}
	}
	for(i=0;i<k;i++)
	{
		v.push_back(minh.top());
		minh.pop();
	}
	cout<<"Sorted Array: ";
	
	for(i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	
}
