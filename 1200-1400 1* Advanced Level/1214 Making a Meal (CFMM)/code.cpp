#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string S;
	    int A[6]={0};
	    
	    for(int i=0;i<N;i++)
	    {
	        cin>>S;
	        for(int j=0;S[j]!='\0';j++)
	        {
	            if(S[j]=='c')
	                A[0]++;
	            else if(S[j]=='o')
	                A[1]++;
	            else if(S[j]=='d')
	                A[2]++;
	            else if(S[j]=='e')
	                A[3]++;
	            else if(S[j]=='h')
	                A[4]++;
	            else if(S[j]=='f')
	                A[5]++;   
	        } 
	    }
	    A[0]/=2;
	    A[3]/=2;
	    
	    int min=A[0];
	    for(int i=0;i<6;i++)
	    {
	        if(min>A[i])
	            min=A[i];
	    }
	    cout<<min<<endl;
	}
	return 0;
}
