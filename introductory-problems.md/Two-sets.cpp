
#include<bits/stdc++.h> 
using namespace std; 

#define lli long long int

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long int n,sum=0;
    cin>>n;
    vector<long long int> a;
    for(int i=1;i<=n;i++)
    {  
    	a.push_back(i);
    
    	
	}
	sum=n*(n+1)/2;

	if(sum%2!=0)
	cout<<"NO";
	

	else
	{   	
	  vector<lli> b, c;
	   
	long long  int p=sum/2;
	   for(int i=n;i>=1;i--)
	   { 
	   	if(p-i>=0)
	   	{
	   		b.push_back(i);
	   		p=p-i;;
	   		
		   }
		   else
		   {
		   	c.push_back(i);
		
		   }
	   }
	   cout<<"YES"<<"\n";
	  cout << b.size() << endl;
        for (lli ele : b)
            cout << ele << " ";
        cout << endl;
        cout << c.size() << endl;
        for (lli ele : c)
            cout << ele << " ";
	}
	
    
    
}
