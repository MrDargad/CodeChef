#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    N--;
	    int A[N];
	    cin>>A[0];
	    int max=A[0];
	    int sum=A[0];
	    for(int i=1;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]>max)
	            max=A[i];
	        sum+=A[i];
	    }
	    sum+=max;
	    cout<<sum<<endl;
	}
	return 0;
}