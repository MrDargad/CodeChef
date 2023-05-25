#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    long long int N,K;  cin>>N>>K;
	    long long int odd=N/2;
	    
	    if(N%2==1)
	        odd++;
	    
	    if(K>odd)
	        cout<<"NO\n";
	    else if(K==odd)
	    {
	        if(N%2==1)
	            cout<<"NO\n";
	        else
	            cout<<"YES\n";
	    }
	    else
	    {
	        if((odd-K)%2==0)
	        {
	            cout<<"YES\n";
	        }
	        else
	            cout<<"NO\n";
	    }
	}
	return 0;
}