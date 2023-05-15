#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	        cin>>A[i];
	        
	    sort(A,A+N);
	    
	    int count=0;
	    for(int i=0;i<N;i++)
	    {
	        if(A[i]<=count)
	            count++;
	        else
	            break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}