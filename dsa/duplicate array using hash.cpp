#include<iostream>
#include<vector>
using namespace std;



int duplicate(vector<int>&arr,int n)
{
	
	int freq[n+1]={0};
	
	for(int i=0;i<n;i++)
	{
		if(freq[arr[i]]==0)
		{
			freq[arr[i]]+=1;
		}
		else{
			return arr[i];
		}
	}
	return 0;
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
	
	cout<<duplicate(arr,n);
}
