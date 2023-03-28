#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C,D,E;
	    cin>>A>>B>>C>>D>>E;
	    if((A+B<=D && C<=E) || (A+C<=D && B<=E) || (C+B<=D && A<=E))
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
