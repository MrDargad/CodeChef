#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    int M;
	    
	    if(N%2==0)
	        M=N;
	       else
	        M=N-1;
	    
	    float mid=219;
	    
	    for(int i=0;i<M;i=i+2)
	    {
	       
	        S[i] = mid-S[i];
	        S[i+1]=mid-S[i+1];
	           
	        char ch;
	        ch=S[i];
	        S[i]=S[i+1];
	        S[i+1]=ch;
	    }
	    
	    if(M<N)
	        S[N-1]=mid-S[N-1];
	    
	    cout<<S<<endl;
	}
	return 0;
}
