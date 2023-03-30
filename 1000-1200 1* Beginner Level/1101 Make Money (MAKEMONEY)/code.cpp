#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N,X,C;
        cin>>N>>X>>C;
        int dif=X-C;
        
        int A[N];
        int sum=0;
        int count=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            if(A[i]<dif)
                sum+=dif;
            else
                sum+=A[i];
        }
	    cout<<sum<<endl;
	}
	return 0;
}
