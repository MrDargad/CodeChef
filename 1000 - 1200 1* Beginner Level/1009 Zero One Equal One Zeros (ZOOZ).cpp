#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N%2==0)
	    {
	        cout<<"1";
	        for(int i=0;i<N-2;i++)
	            cout<<"0";
	        cout<<"1";
	    }
	    else
	    {
	        int a=N/2;
	        for(int i=1;i<a+1;i++)
	            cout<<"0";
	        cout<<"1";
	        for(int i=a+2;i<=N;i++)
	            cout<<"0";
	    }
	    cout<<endl;
	}
	return 0;
}