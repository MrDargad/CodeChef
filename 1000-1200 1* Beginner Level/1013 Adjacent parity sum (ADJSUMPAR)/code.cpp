#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],sum=0;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(sum%2==0)
	        cout<<"YES\n";
	   else
	    cout<<"NO\n";
	    
	    
	}
	return 0;
}

