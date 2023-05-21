#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int tax=0;
	    if(N<=250000)
	    {
	        goto ans;
	    }
	    if(N>250000)
	    {
	        if((N>500000))
	            tax+=0.05*(500000-250000);
	        else
	        {
	           tax+=0.05*(N-250000);
	           goto ans;
	        }
	    }
	    if(N>500000)
	    {
	        if((N>750000))
	            tax+=0.1*(750000-500000);
	        else
	        {
	           tax+=0.1*(N-500000);
	           goto ans;
	        }
	    }
	    if(N>750000)
	    {
	        if((N>1000000))
	            tax+=0.15*(1000000-750000);
	        else
	        {
	           tax+=0.15*(N-750000);
	           goto ans;
	        }
	    }
	    if(N>1000000)
	    {
	        if((N>1250000))
	            tax+=0.2*(1250000-1000000);
	        else
	        {
	           tax+=0.2*(N-1000000);
	           goto ans;
	        }
	    }
	    if(N>1250000)
	    {
	        if((N>1500000))
	            tax+=0.25*(1500000-1250000);
	        else
	        {
	           tax+=0.25*(N-1250000);
	           goto ans;
	        }
	    }
	    if(N>1500000)
	    {
	           tax+=0.3*(N-1500000);
	    }
	    ans:
	        cout<<N-tax<<endl;
	}
	return 0;
}