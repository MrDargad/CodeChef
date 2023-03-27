#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N==2)
	        cout<<"2\n";
	       else
	        cout<<N/2+1<<endl;
	}
	return 0;
}
