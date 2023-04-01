#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],flag=0,no=0;
	    for(int i=0; i<n ; i++)
	    {   
	        cin>>no;
	        arr[i]=no;
	        if(no%2==0)
	           {
	               flag=1;
	           }
	    }
	    if(flag==0)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}

