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
	    
	    int flag=0;
	    int g=0;
	    for(int i=0;i<n;i++)
	    {
	        if(m[i]=='.')
	            continue;
	        else if(m[i]=='H')
	            flag++;
	        else if(m[i]=='T')
	            flag--;
	            
	        if(flag<0 || flag>1)
	        {
	            cout<<"Invalid\n";
	            g=1;
	            break;
	        }
	    }
	    if(g==0 && flag==0)
	        cout<<"Valid\n";
	    if(flag==1)
	        cout<<"Invalid\n";
	}
	return 0;
}