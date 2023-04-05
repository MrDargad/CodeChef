#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    int student;
	    
	    int A[N], A1[N]={0};
	    for(int i=0;i<N;i++)
	    {
	        cin>>student;
	        A[i]=student-1;
	        if(A[i]==i)
	        {
	            A1[i]=-1;
	        }
            else
	        {
	            if(A1[A[i]]!=-1)
	                A1[A[i]]++;
	        }
	    } 
	    int count=0;
	    
	    for(int i=0;i<N;i++)
	    {
	        if(A1[i]>=K)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}