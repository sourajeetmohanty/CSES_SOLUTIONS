
#include <bits/stdc++.h> 
using namespace std; 

// Driver program to test above function 
int main() 
{    
long long int n,m,k;
cin>>n>>m>>k;
long long int a[n];
long long int b[m];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<m;i++)
{
	cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
int ans=0;
int i=0,j=0;
while(i<n && j<m)
{
	if(abs(a[i]-b[j])<=k)
	{
		ans++;
		i++;
		j++;
		
	}
	else if(a[i]<b[j])
	{
		i++;
	}
	else
	j++;
}
cout<<ans;
return 0;


} 
