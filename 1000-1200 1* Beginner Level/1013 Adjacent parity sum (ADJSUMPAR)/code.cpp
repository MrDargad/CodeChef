#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int B[N],sum=0;
	    for(int i=0 ; i<N ; i++){
	        cin>>B[i];
	        sum+=B[i];
	    }
	    if(sum%2==0)
	        cout<<"YES\n";
	   else
	    cout<<"NO\n";
	}
	return 0;
}

