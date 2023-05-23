#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    
	    if(N<2)
	        cout<<"Ramos\n";
	    else
	    {
	        int one=0,zero=0;
	        for(int i=0;i<N;i++)
	        {
	            if(S[i]=='0')
	                zero++;
	               else
	                one++;
	        }
	        if(one<zero)
	        {
	            if(one%2==0)
	                cout<<"Ramos\n";
	               else
	                cout<<"Zlatan\n";
	        }
	        else
	        {
	            if(zero%2==0)
	                cout<<"Ramos\n";
	                else
	                    cout<<"Zlatan\n";
	        }
	    }
	    
	}
	return 0;
}