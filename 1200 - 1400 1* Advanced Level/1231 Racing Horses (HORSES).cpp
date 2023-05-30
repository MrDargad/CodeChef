#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int S[N];
	    for(int i=0;i<N;i++)
	        cin>>S[i];
	        
	    sort(S,S+N);
	    int diff=S[N-1];
	    for(int i=1;i<N;i++)
	    {
	        if(S[i]-S[i-1]<diff)
	            diff=S[i]-S[i-1];
	    }
	    cout<<diff<<endl;
	}
	return 0;
}