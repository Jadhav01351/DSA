#include<iostream>
#include<vector>
using namespace std;


int buy_sell(vector<int>&arr,int n)
{
	int mina=INT_MAX;
	int maxa=0;
	
	for(int i=0;i<n;i++)
	{
		mina=min(mina,arr[i]);
		maxa=max(maxa,arr[i]-mina);
	}
	
	return maxa;
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
	
	cout<<buy_sell(arr,n);
	
	
}
