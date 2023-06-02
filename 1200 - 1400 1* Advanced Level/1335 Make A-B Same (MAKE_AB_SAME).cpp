#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    int B[N];
	    
	    int A0=0;
	    int B0=0;
	    
	    for(int i=0;i<N;i++)
	    {
	       cin>>A[i];
	       if(A[i]==0)
	            A0++;
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>B[i];
	        if(B[i]==0)
	            B0++;
	    }
	       
	    if(A[0]!=B[0] || A[N-1]!=B[N-1])
	        cout<<"NO\n";
	    else if((A0==N && B0<N) || (B0>A0))
	        cout<<"NO\n";
	    else
	    {
	        int flag=0;
	        for(int i=1;i<N-1;i++)
	        {
	            if(A[i]==1 && B[i]==0)
	            {
	                flag=1;
	                cout<<"NO\n";
	                break;
	            }
	        }
	        if(flag==0)
	            cout<<"YES\n";
	    }
	}
	return 0;
}