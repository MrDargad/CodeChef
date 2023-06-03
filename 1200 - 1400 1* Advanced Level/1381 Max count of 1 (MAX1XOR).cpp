#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
	    char X[N];
	    X[0]='0';
	    int zero=1;
	    int one=0;
	    
	    for(int i=1;i<N;i++)
	    {
	        if(X[i-1]==S[i-1])
	        {
	            X[i]='0';
	            zero++;
	        }
	        else
	        {
	            X[i]='1';
	            one++;
	        }
	    }
	    one<=zero?cout<<zero<<endl:cout<<one<<endl;
	}
	return 0;
}