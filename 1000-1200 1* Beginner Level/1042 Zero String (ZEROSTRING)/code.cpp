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
        int zero=0;
        int one=0;
	    for(int i=0;i<N;i++)
	    {
	        if(S[i]=='0')
	            zero++;
	        else
	            one++;
	    }
	    
	    if(zero==N)
	        cout<<"0\n";
	    else if(one==N)
	        cout<<"1\n";
	    else if(zero>=one)
	        cout<<one<<endl;
	    else if(one>zero)
	        cout<<zero+1<<endl;
	}
	return 0;
}
