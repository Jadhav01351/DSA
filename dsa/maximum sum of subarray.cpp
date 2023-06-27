#include<iostream>
#include<vector>
using namespace std;




int subsum(vector<int>&arr,int n)
{
	int ans_start=-1;
	int ans_end=-1;
	int maxi=INT_MIN;
	int sum=0;
	int start;
	
	for(int i=0;i<n;i++)
	{
		if(sum==0)
		{
			start=i;
		}
		sum+=arr[i];
		
		
		if(sum>maxi)
		{
			maxi=sum;
			ans_start=start;
			ans_end=i;
		}
		
		if(sum<0)
		{
			sum=0;
		}
	}
	return start;
	
}
int main()
{
	int n;
	cin>>n;
	
	
	vector<int>arr(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	cout<<subsum(arr,n);
	
	
}
