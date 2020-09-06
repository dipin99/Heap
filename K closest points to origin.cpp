#include<iostream>
#include<queue>
#include<math.h>

using namespace std;

int main()
{
	
	int n;
	cout<<"Enter The No. points: ";
	cin>>n;
	cout<<"Enter the Coordinates";
	int a[n][2],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	int k;
	cout<<"Enter the value of k: ";
	cin>>k;

	priority_queue < pair <int,pair<int,int> > > maxh;
	
	for(i=0;i<n;i++)
	{
		maxh.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],{a[i][0],a[i][1]}});
		if(maxh.size()>k)
		{
			maxh.pop();
		}
	}
	
	cout<<"The "<<k<<" closest points to the origin are: "
	while(maxh.size()>0)
	{
		pair <int,int> p = maxh.top().second;
		cout<<p.first<<" "<<p.second<<endl;
		maxh.pop();
		
	}
	
}
