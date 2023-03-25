#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int days,required,left=0;
	    cin>>days>>required;
	    int protein[days];
	    for(int i=0 ; i<days ; i++)
	        cin>>protein[i];
	    
	    for (int i=0 ; i<days ; i++)
	    {   
	        left=protein[i]-required;
	        if(left<0)
	          {   
	            cout<<"NO "<<i+1<<endl;
                break;
              }
            else
	             protein[i+1]+=left;
          
	    }
	    if(left>=0)
	        cout<<"YES\n";
	    
	}
	return 0;
}

