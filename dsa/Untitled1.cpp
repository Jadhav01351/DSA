#include<bits/stdc++.h>
using namespace std;


vector<int>repeat_mis(vector<int>&arr,int n)
{
	int hash[n+1]={0};
	int missing=-1;
	int repeating=-1;
	
	for(int i=0;i<n;i++)
	{
	     hash[arr[i]]++;
	}
	for(int i=0;i<=n;i++)
	{
		if(hash[i]==2)repeating=i;
		else if(hash[i]==0) missing=i;
		
			if(repeating!=-1 && missing!=-1)
			{
				break;
			}
	}

	return {repeating,missing};
	
}

int main()
{
	cout<<"Enter array:"<<endl;
	int n;
	cin>>n;
	
	
	vector<int>arr(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	 vector<int> ans = repeat_mis(arr,n);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
}
