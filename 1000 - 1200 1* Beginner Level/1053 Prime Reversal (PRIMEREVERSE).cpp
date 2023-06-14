#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        string A,B;
        cin>>A>>B;
        int Aone=0,Bone=0;
	    
	    for(int i=0;A[i]!='\0';i++)
	    {
	        if(A[i]=='1')
	            Aone++;
	        if(B[i]=='1')
	            Bone++;
	    }
	    if(Aone==Bone)
	        cout<<"YES\n";
	            else
	                cout<<"NO\n";
	}
	return 0;
}