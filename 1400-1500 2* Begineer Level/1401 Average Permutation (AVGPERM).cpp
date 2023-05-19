#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N==3)
	    {
	        cout<<"3 2 1\n";
	    }
	    else
	    {
	        cout<<N-1<<" "<<N-2<<" ";
	        int j=1;
	        for(int i=0;i<N-4;i++)
	        {
	            cout<<j<<" ";
	            j++;
	        }
	        cout<<N-3<<" "<<N<<endl;
	    }
	}
	return 0;
}