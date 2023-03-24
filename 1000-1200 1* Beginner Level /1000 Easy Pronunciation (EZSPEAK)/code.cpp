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
	    
	    int count=0;
	    int flag=0;
	    for(int i=0;i<N;i++)
	    {
	        if(S[i]=='a' ||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
	            count=0;
	        else
	            count++;
	           if(count==4)
	            {
	                flag=1;
	                cout<<"NO\n";
	                break;
	            }
	    }
	    if(flag==0)
	        cout<<"YES\n";
	}
	return 0;
}
