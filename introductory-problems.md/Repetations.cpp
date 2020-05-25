#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{    int mx=1;
string s;
cin>>s;
int l=1;
for(int i=1;i<s.length();i++)
{
	if(s[i]==s[i-1])
	{
		l++;
		mx=max(mx,l);
	}
	else
	{
		l=1;
	}
}
cout<<mx;
}
