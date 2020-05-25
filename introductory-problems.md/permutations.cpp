#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{ long long int n,d=0;
  cin>>n;
  int a[n];
  if(n<4 && n!=1)
  cout<<"NO SOLUTION";
  else if(n==1)
  cout<<"1";
  else if(n==4)
  cout<<"2 4 1 3";
  else
  {
  int p=n;
  int k=n/2;
  int b[n];
  for(int i=0;i<n;i++)
  {
      if(i%2==0)
      {
          b[i]=p;
          p--;
          
      }
      else
      {
          b[i]=k;
          k--;
      }
  }
  for(int i=0;i<n;i++)
  cout<<b[i]<<" ";
  
  
  }
  
}
