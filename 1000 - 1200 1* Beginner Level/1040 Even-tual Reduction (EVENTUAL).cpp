#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    int A[26]={0};
	    for(int i=0;i<N;i++)
	    {
	        A[S[i]-97]++;
	    }
	    int flag=0;
	    for(int i=0;i<26;i++)
	    {
	        if(A[i]%2==1)
	        {
	            cout<<"NO\n";
	            flag++;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<"YES\n";
	}
	return 0;
}