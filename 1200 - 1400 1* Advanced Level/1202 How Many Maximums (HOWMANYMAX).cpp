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
	    
	    int one=0,zero=0,count=0;
	    
	    if(S[0]=='1')
	    {
	        count++;
	        one=1;
	    }
	    else
	        zero=1;

	    for(int i=1;i<N-1;i++)
	    {
	        if(S[i]=='1' && zero==1)
	        {
                count++;
                one =1;
                zero=0;
	        }
	        else if(S[i]=='0' && zero==0)
	            zero=1;
	    }
	    if(zero==1)
	    count++;
	    
	    cout<<count<<endl;
	}
	return 0;
}