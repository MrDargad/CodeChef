#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;  cin>>N;
	    string S;   cin>>S;
	    
	    int A[26]={0};
	    int count=0;
	    for(int i=0;i<N;i++)
	    {
	        A[S[i]-97]++;
	    }
	    
	    int even=0,odd=0;
	    for(int i=0;i<26;i++)
	    {
	        if(A[i]>0)
	        {
	            if(A[i]%2==0)
	                even++;
	            else
	                odd++;
	        }
	    }
	    if(odd==0)
	        cout<<"1\n";
	    else if(even==0)
	    {
	        if(odd==1)
	            cout<<"2\n";
	        else
	            cout<<"0\n";
	    }
	    else
	    {
	        if(odd==1)
	            cout<<"1\n";
	        else if(odd>1)
	            cout<<"0\n";
	    }
	}
	return 0;
}