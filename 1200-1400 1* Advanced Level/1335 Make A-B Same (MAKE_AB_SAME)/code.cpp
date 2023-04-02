#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    
	    int a0=0;
	    int b0=0;
	    
	    for(int i=0;i<n;i++)
	    {
	       cin>>a[i];
	       if(a[i]==0)
	            a0++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        if(b[i]==0)
	            b0++;
	    }
	       
	    if(a[0]!=b[0] || a[n-1]!=b[n-1])
	        cout<<"NO\n";
	    else if((a0==n && b0<n) || (b0>a0))
	        cout<<"NO\n";
	    else
	    {
	        int flag=0;
	        for(int i=1;i<n-1;i++)
	        {
	            if(a[i]==1 && b[i]==0)
	            {
	                flag=1;
	                cout<<"NO\n";
	                break;
	            }
	        }
	        if(flag==0)
	            cout<<"YES\n";
	    }
	       
	}
	return 0;
}
