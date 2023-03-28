#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cN=0,cI=0,cY=0;
	    cin>>n;
	    char gestures[n];
	    for(int i=0 ; i<n ; i++)
	    {    
	        cin>>gestures[i];
	        (gestures[i]=='N')?cN+=1:(gestures[i]=='I')?cI+=1:cY+=1;
	       
	    }
	        
	        if(cN==n)
	            cout<<"NOT SURE\n";
	        else if(cN+cY==n)
	            cout<<"NOT INDIAN\n";
	        else
	            cout<<"INDIAN\n";
	            
	}
	
	
	return 0;
}

