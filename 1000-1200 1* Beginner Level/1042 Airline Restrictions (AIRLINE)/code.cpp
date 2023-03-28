#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a[3],total,handReq;
        for(int i=0 ; i<3 ; i++)
            cin>>a[i];
        cin>>total>>handReq;
        
        sort(a,a+3);
        int hand=0,flag=0;        
        for(int i=0 ; i<3 ; i++)
        {
            if(a[i]<=handReq)
            {
                hand=a[i];
                if(a[0]+a[1]+a[2]-hand<=total)
                {
                    cout<<"YES\n";
                    flag=1;
                    break;
                }
                
            }
        }
        if(flag==0)
            cout<<"NO\n";
    }
	
	return 0;
}

