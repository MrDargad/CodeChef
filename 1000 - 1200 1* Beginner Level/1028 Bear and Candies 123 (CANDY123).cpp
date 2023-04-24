#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int Limak,Bob;
	    cin>>Limak>>Bob;
	    
	    int i=1;
	    while(Limak>=0 && Bob>=0)
	    {
	        if(i%2==1)
	            Limak-=i;
	        else
	            Bob-=i;
	        i++;
	    }
	    if(Limak<0)
	        cout<<"Bob\n";
	    else
	        cout<<"Limak\n";
	}
	return 0;
}
