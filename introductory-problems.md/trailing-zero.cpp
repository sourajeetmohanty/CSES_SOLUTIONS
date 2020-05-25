#include<bits/stdc++.h> 
using namespace std; 
 
#define lli long long int
 
int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int ans=0,g=0,l=0;
    if(n<5)
    cout<<"0";
    else
    { 
    g=5;
    	while(n/g >=1)
    	{
    		ans+=n/g;
    		g*=5;
		}
	}
	if(n>=5)
	cout<<ans;
	}
