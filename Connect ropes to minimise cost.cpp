#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n],i;
	cout<<"Enter the Array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	int tc=0;
	priority_queue <int , vector <int> ,greater <int> >minh;
	for(i=0;i<n;i++)
	{
		minh.push(a[i]);
	}
	
	while(minh.size()>=2)
	{
		int first = minh.top();
		minh.pop();
		int second = minh.top();
		minh.pop();
		tc=tc+first+second;
		minh.push(first+second);
		
	}
	
	cout<<"The cost of the rope is: "<<tc;
		
	
}
