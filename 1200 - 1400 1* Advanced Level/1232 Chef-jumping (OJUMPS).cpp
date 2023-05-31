#include <iostream>
using namespace std;

int main() {
	long long int a;
	cin>>a;
	a=a%6;
	if(a==0)
	    cout<<"yes";
	while(a>0)
	{
	    a-=1;
	    if(a==0)
	    { 
	        cout<<"yes";
	        break;
	    }
	    a-=2;
	    if(a==0)
	    {
	        cout<<"yes";
	        break;
	    }
	    a-=3;
	    if(a==0)
	    {
	        cout<<"yes";
	        break;
	    }
	}
	if(a!=0)
	    cout<<"no";
	
	return 0;
}