#include<iostream>
#include<string>

using namespace std;


int main()
{
	string s;
	cout<<"\nEnter string"<<endl;
	getline(cin,s);
	
	int l_s=s.length();
	
	string t;
	cout<<"\nEnter pattern to be search"<<endl;
	cin>>t;
	int l_t= t.length();
	
	
	for(int i=0;i<(l_s-l_t);i++)
	{
		for(int j=0;j<l_t;j++)
		{
			if(s[i+j]!= t[j])
			{
				break;
			}
			if(j==l_t){
				cout<<"pattern matched at "<<" "<<j<<endl;
			}
		}
	}
}
