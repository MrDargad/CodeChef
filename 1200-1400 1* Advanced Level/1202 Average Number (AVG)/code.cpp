#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,avg;
	    cin>>n>>k>>avg;
	    int arr[n],sum=0;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }   
	    int value=0,Dr=0;
	    Dr=avg*(n+k)-sum;
	    if(Dr%k==0 && (Dr/k)>0)
	        cout<<(Dr/k)<<endl;
	    else
	        cout<<-1<<endl;    
	}
	return 0;
}

