#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M,K;
	    cin>>N>>M>>K;
	    
	    int A[N];
	    int count=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(A[i]==1)
	            count++;
	        else
	           break;
	    }
	    
	    if(count==N)
	        cout<<"100\n";
	    else if(count>=M)
	        cout<<K<<endl;
	    else
	        cout<<"0\n";
	}
	return 0;
}