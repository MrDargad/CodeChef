#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    
	    string S[N];
	    for(int i=0;i<N;i++)
	        cin>>S[i];
	    
	    int weapons[10]={0};
	    
	    for(int i=0;i<N;i++)
	    {
	        for(int j=0;j<10;j++)
	        {
	            if(S[i][j]=='1')
	                weapons[j]++;
	        }
	    }
	    
	    int count=0;
	    for(int i=0;i<10;i++)
	    {
	        if(weapons[i]%2==1)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
