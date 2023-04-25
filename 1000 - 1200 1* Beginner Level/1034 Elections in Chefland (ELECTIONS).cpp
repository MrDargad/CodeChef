#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if(A>50)
	        cout<<"A\n";
	    else if(B>50)
	        cout<<"B\n";
	    else if(C>50)
	        cout<<"C\n";
	    else
	        cout<<"NOTA\n";
	}
	return 0;
}
