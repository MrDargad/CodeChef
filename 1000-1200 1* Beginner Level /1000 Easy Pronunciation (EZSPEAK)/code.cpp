#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string m;
	    cin>>m;
	    
	    int count=0;
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(m[i]=='a' ||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u')
	            count=0;
	        else
	            count++;
	           if(count==4)
	            {
	                flag=1;
	                cout<<"NO\n";
	                break;
	            }
	    }
	    if(flag==0)
	        cout<<"YES\n";
	}
	return 0;
}
