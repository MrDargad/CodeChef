#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,K;
	    cin>>N>>X>>K;
	    
	    int A[N],B[N];
	    for(int i=0;i<N;i++)
	        cin>>A[i];
	    for(int i=0;i<N;i++)
	    { 
	        cin>>B[i];
	        if(X>0)
	        {
	            int diff = A[i]-B[i];
	            if(diff<0)
	                diff*=-1;
	            if(diff<=K) 
	                X--;
	        }
	    }
	    
	    if(X==0)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}