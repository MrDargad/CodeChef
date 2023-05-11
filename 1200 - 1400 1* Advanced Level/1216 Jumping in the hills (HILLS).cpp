#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,U,D;
	    cin>>N>>U>>D;
	    int H[N];
	    int parachut=1;
	    int stop=0;
	    cin>>H[0];
	    int current=H[0];
	    int c_index=0;
	    
	    for(int i=1;i<N;i++)
	    {
	        cin>>H[i];
	        if(stop==0)
	        {
	            if(H[i]==current)
	            {
	                c_index++;
	                current = H[i];
	            }
	            else if(H[i]>current)
	            {
	                if(H[i]<=current+U)
	                {
	                    c_index++;
	                    current=H[i];
	                }
	                else
	                    stop=1;
	            }
	            else if(H[i]<current)
	            {
	                if(H[i]>=current-D)
	                {
	                    c_index++;
	                    current=H[i];
	                }
	                else
	                {
	                    if(parachut==1)
	                    {
	                        c_index++;
	                        current=H[i];
	                        parachut--;
	                    }
	                    else
	                        stop=1;
	                }
	            }
	        }
	    }
	    
	    cout<<c_index+1<<endl;
	}
	return 0;
}