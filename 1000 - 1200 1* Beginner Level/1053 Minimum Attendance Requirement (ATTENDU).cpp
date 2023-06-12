#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        string B;
        cin>>B;
        int one=0;
        for(int i=0;B[i]!='\0';i++)
        {
            if(B[i]=='1')
                one++;
        }
        one+=120-N;
	    
	    if(one*100/120<75)
	        cout<<"NO\n";
	       else
	       cout<<"YES\n";
	}
	return 0;
}