#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D,C;
	    cin>>D>>C;
	    int A,B;
	    int sumA=0,sumB=0;
	
	    for(int i=0;i<3;i++)
	    {
	        cin>>A;
	        sumA+=A;
	    }
	    for(int i=0;i<3;i++)
	    {
	        cin>>B;
	        sumB+=B;
	    }
    
        int delA=0,delB=0;  
        if(sumB<150)
            delB=D;
        if(sumA<150)
            delA=D;
        
        if( 2*D> C+delA+delB )
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}