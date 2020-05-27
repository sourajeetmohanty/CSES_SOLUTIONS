
#include <bits/stdc++.h> 
using namespace std; 

// Driver program to test above function 
int main() 
{    
long long int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int ans=1;
sort(a,a+n);
for(int i=0;i<n-1;i++)
{
	if(a[i]!=a[i+1])
	ans++;
}
cout<<ans;
} 
