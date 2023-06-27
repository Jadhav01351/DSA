#include<bits/stdc++.h>
#include<vector>
using namespace std;

	
vector<vector<int,int>> zeroMatrix(vector<vector<int>> &arr[n][m])
{
    int row[n]={0};
	int col[m]={0};
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==0)
			{
				row[i]=1;
				col[j]=1;
			}
		}
	}	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(row[i] || col[j]==1)
			{
				arr[i][j]=0;
			}
		}
	}
	
	
	return arr;
	
	
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<int> arr[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<zeroMatrix(&arr,n,m);
	
	return 0;
}
