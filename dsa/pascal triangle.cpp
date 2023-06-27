#include<iostream>
using namespace std;


int pascalq1(int n,int r)
{
	int res;
	int ans;
	for(int i=0;i<r;i++)
	{
		res=n*(n-i);
		ans=res/(i+1);
		
	}
	return ans;
}

int pascal2(int n)
{
	int ans=1;
	for(int i=1;i<n;i++)
	{
		ans=ans*(n-i);
		ans=ans/(i);
		cout<<ans<<" ";
	}
}
int main()
{
	cout<<"\nEnter n=" " and r=" ""<<endl;
	
	int n,r;
	cin>>n>>r;
	
	cout<<pascalq1(n,r);
	cout<<endl;
	
	pascal2(n);
	
	
}
