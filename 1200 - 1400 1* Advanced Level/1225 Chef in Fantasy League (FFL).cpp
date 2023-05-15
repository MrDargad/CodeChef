#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,S;
	    cin>>N>>S;
	    int P[N][2];
	    for(int i=0;i<N;i++)
	        cin>>P[i][0];
	    
	    int minD=100,minF=100;
	    for(int i=0;i<N;i++)
	    {
	        cin>>P[i][1];
	        if(P[i][1]==0 && P[i][0]<minD)
	            minD=P[i][0];
	        else if(P[i][1]==1 && P[i][0]<minF)
	            minF=P[i][0];
	    }
	    if(minD+minF+S<=100)
	        cout<<"yes\n";
	    else    
	        cout<<"no\n";
	}
	return 0;
}