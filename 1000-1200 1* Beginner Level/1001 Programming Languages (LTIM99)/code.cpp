#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,A1,B1,A2,B2;
	    cin>>A>>B>>A1>>B1>>A2>>B2;
	    if((A==A1 && B==B1) || (A==B1 && B==A1))
	        cout<<"1\n";
	    else if((A==A2 && B==B2) || (A==B2 && B==A2))
	        cout<<"2\n";
	    else
	        cout<<"0\n";
	}
	return 0;
}