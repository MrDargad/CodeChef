#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    
	    int calo=0;
	    int A[N];
	    for(int i=0;i<N;i++)
	        cin>>A[i];
	       
	   int flag=0;
	   for(int i=0;i<N;i++){
	       calo+=A[i]-K;
	       if(calo<0){
	            cout<<"NO "<<i+1<<endl;
	            flag=1;
	            break;
	        }
	   }
	   if(flag==0)
	        cout<<"YES\n";
	}
	return 0;
}
