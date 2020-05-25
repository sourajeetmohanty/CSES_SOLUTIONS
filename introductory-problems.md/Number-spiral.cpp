#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{ 
int t;
cin>>t;
while(t--)
{
 
long long int x,y,sqy,sqx;
cin>>y>>x;
if(y%2==0)
{
	 sqy=y*y;
	if(x%2!=0)
	{
		 sqx=x*x;
		if(x<=y)
		{
			cout<<sqy-x+1<<"\n";
		}
		else
		{
			cout<<sqx-y+1<<"\n";
			
		}
	}
	else
	{
		 sqx=(x-1)*(x-1)+1;
	if(x<=y)
		{
			cout<<sqy-x+1<<"\n";
		}
		else
		{
			cout<<sqx+y-1<<"\n";
		}
		
	}
	
	
}
 
else
{
 sqy=(y-1)*(y-1)+1;
 
if(x%2!=0)
	{
		 sqx=x*x;
		if(x<=y)
		{
			cout<<sqy+x-1<<"\n";
		}
		else
		{
			cout<<sqx-y+1<<"\n";
		}
	}
	else
	{
		 sqx=(x-1)*(x-1)+1;
		
		if(x<=y)
		{
			cout<<sqy+x-1<<"\n";
		}
		else
		cout<<sqx+y-1<<"\n";
	}
}
}
}
