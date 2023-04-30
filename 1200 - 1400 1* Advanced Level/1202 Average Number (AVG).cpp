#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,V;
	    cin>>N>>K>>V;
	    int A[N];
	    int sum=0;
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        sum+=A[i];
	    }
	    if(((N+K)*V-sum)%K==0 && ((N+K)*V-sum)>0)
	        cout<<((N+K)*V-sum)/K<<endl;
	    else
	        cout<<"-1\n";
	}
	return 0;
}