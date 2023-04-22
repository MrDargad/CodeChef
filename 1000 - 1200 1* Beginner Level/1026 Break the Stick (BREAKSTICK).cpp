#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long int N,X;
	    cin>>N>>X;
	    if(N%2==1 && X%2==0)
	        cout<<"NO\n";
	    else if(N%2==1 && X%2==1)
	        cout<<"YES\n";
        else
            cout<<"YES\n";	}
	return 0;
}
