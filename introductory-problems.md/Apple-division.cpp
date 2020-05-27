
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{    int n;
cin>>n;

	long long int a[n],sum=0,mn=INT_MAX,s;

     for(int i=0;i<n;i++)
     {
     	cin>>a[i];
     	sum=sum+a[i];
	 }
	 for(int i=0;i<(1<<n);i++)
	 {
	 	s=0;
	 	for(int j=0;j<n;j++)
	 	{
	 		if(i & 1<<j)
	 		s=s+a[j];
		 }
		 long long int temp=abs((sum-s)-s);
		 mn=min(temp,mn);
	 }
	 cout<<mn;
	return 0; 
} 
