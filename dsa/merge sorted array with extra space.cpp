#include<iostream>
using namespace std;


void merge(long long arr1[],long long arr2[],int n,int m)
{
	int left=0;
	int right=0;
	int index=0;
	long long arr3[n+m];
	
	while(left<n && right<m)
	{
		if(arr1[left]<=arr2[right])
		{
			arr3[index]=arr1[left];
			left++;
			index++;
		}
		else{
			arr3[index]=arr2[right];
			right++;
			index++;
		}
		
	}
	while(left<n)
	{
		arr3[index++]=arr1[left++];
			
	}
		while(right<m)
	{
		arr3[index++]=arr2[right++];
			
	}
	
	for(int i=0;i<n+m;i++)
	{
		if(i<n)
		{
			arr1[i]=arr3[i];
		}
		else
		{
			arr2[i-n]=arr3[i];
		}
	}
	
	
}

int main()
{
	 long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
	
	
	cout<<"\The merged array are"<<endl;
	cout<<"\Array1"<<endl;
	merge(arr1,arr2,n,m);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	
	
	cout<<"\Array2"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<arr2[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}