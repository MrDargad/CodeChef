#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        int P[N];
        int max=-1;
        int min=-1;
        for(int i=0;i<N;i++)
        {
            cin>>P[i];
            if(P[i]==1)
                min=i;
            else if(P[i]==N)
                max=i;
        }
        
	    if(min==0 && max==N-1)
	        cout<<"0\n";
	    else if(min<max)
	    {
	        cout<<min+(N-1)-(max)<<endl;
	    }
	    else
	    {
	        cout<<min+(N-1)-max-1<<endl;
	    }
	}
	return 0;
}