#include<bits/stdc++.h>
using namespace std;


void rotate_vector(int arr[100][100],int n,int m)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			swap(arr[i][j],arr[j][i]);
		
		}
		
	}
	for(int i=0;i<n;i++)
	{
			reverse(arr[i].begin(),arr[i].end());
	}
	
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<int>arr[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<rotate_vector(arr,n,m);
	
}
