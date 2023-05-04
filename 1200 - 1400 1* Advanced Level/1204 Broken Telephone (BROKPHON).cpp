#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    int count=0;
	    
	    for(int i=0;i<N;i++)
	         cin>>A[i];
	    
	    for(int i=0;i<N-1;i++)
	    {
	        if(A[i]!=A[i+1])
	            count+=2;
	        if(i<N-2 && A[i]!=A[i+1] && A[i+1]!=A[i+2])
	            count--;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}