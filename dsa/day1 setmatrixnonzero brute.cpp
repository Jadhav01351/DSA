#include<iostream>
using namespace std;


void setnonzero(int a[][],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=0)
			{
				a[i][j]=-1;
			}
		}
	}
}

void setMatrixZeros(int a[][],int n,int m){

	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				setnonzero(a[][]);
				
			}
			
		}
	

}
void result(int a[][], int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==-1)
			{
				a[i][j]=0;
			}
		}
	}
}

void final(int a[][],int n,int m)
{
	 for(int i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		setMatrixZeros(a[][]);
	        result(a[][]);
		}
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	
	int a[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
		
	}
	
	final(a,n,m);
   
	

}
