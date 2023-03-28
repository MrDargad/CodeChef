#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;
	    
	    if(M*x1<=w2-w1 && M*x2>=w2-w1)
	        cout<<"1\n";
	    else
	        cout<<"0\n";
	}
	return 0;
}
