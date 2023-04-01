#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,count,max=0,sum=0,seq=0;
        cin>>n;
        for(int j=1 ; j<=n ; j++)
           sum+=j;
            
        if(sum%2==0)
            cout<<n<<endl;
        else
            cout<<n-1<<endl;
    }
	return 0;
}

