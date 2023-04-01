#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,output;
        cin>>n>>output;
        int arr[n];
        int ans=0,flag=0;
        for(int i=0 ; i<n; i++)
        {
            cin>>arr[i];
            ans=ans|arr[i];
        }
        if(ans==output)
            cout<<0<<endl;
        else 
        {
            for(int i=0 ; i<=output ; i++)
            {
                if((ans|i)==output)
                {
                    cout<<i<<endl;
                    flag=1;
                    break;
                }
                
            }
            if(flag==0)
                cout<<-1<<endl;
        }
        
    }
	return 0;
}

