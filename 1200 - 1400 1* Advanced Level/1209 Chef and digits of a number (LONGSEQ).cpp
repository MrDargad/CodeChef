#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string S;
	    cin>>S;
	    int one=0,zero=0;
	    for(int i=0;S[i]!='\0';i++)
	    {
	        if(S[i]=='0')
	            zero++;
	        else
	            one++;
	    }
	    if(one==1 || zero==1)
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	}
	return 0;
}