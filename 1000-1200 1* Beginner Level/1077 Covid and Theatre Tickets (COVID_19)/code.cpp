#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N,M;
        cin>>N>>M;
        if(N%2==1)
            N++;
        if(M%2==1)
            M++;
        cout<<(N/2)*(M/2)<<endl;
	}
	return 0;
}
