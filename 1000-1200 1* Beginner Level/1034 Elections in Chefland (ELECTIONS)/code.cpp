#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int Xa,Xb,Xc;
	    cin>>Xa>>Xb>>Xc;
	    
	    if(Xa>50)
	        cout<<"A\n";
	       else if(Xb>50)
	        cout<<"B\n";
	       else if(Xc>50)
	        cout<<"C\n";
	       else
	        cout<<"NOTA\n";
	}
	return 0;
}
