#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int  count0=0,count1=0;
        char str[n];
        for(int i=0 ; i<n; i++)
        {
            cin>>str[i];
            if(str[i]=='1')
                count1++;
            else
                count0++;
        }
        
        if(count0==n || count1==n)
            cout<<0<<endl;
        else
        {  int tax= (x>y)?y:x;
           cout<<tax<<endl;
        }
        
    }
	
	return 0;
}

