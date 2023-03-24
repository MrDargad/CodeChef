#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    int A[N];
	    for(int i=0;i<n;i++)
	        cin>>A[i];
    	for(int i=0;i<n;i++){
	        if(A[i]<=K)
	        {
	            cout<<"1";
	            K-=A[i];
	        }
	        else
	            cout<<"0";
	    }
	    cout<<endl;
	}
	return 0;
}
