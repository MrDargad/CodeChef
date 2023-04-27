#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,P;
	    cin>>N>>P;
	    
	    int max=0;
	    int W,B,price;
	    while(N--)
	    {
	        cin>>W>>B>>price;
	        if(price<=P)
	            {
	                if(max<W*B)
	                    max=W*B;
	            }
	    }
	    
	    if(max==0)
	        cout<<"no tablet\n";
	    else
	        cout<<max<<endl;
	}
	return 0;
}