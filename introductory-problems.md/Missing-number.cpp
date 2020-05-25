#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{    
   long int n,k;
   cin>>n;
  int a[n];
  memset(a,-1,sizeof(a));
  for(int i=0;i<n-1;i++)
  {
  
  	cin>>k;
  	a[k-1]=0;
  }
  for(int i=0;i<n;i++)
  {
  	if(a[i]==-1)
  	cout<<i+1;
  }
    return 0;
}
