#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N];
	    
	    int sum=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        sum+=A[i];
	    }
	    if(sum%2==0)
	        cout<<"NO\n";
	    else if(sum==1)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	}
	return 0;
}
