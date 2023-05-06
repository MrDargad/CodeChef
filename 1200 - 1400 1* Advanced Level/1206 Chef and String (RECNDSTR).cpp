#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        string S;
        cin>>S;
        string SL="",SR="";
        
        int N=S.length();
        
        SR+=S[N-1];
        
        for(int i=0;i<N-1;i++)
	    {
	            SL+=S[i+1];
	            SR+=S[i];
	            
	    }
	    SL+=S[0];
	    
	    if(SL==SR)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
