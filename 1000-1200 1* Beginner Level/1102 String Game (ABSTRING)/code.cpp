#include <iostream>
#include<map>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch;
        map<char,int> m;
        for(int i=0  ; i<n ; i++)
        {
            cin>>ch;
            m[ch]++;
        }
        
        int flag=0;
        for(auto x:m)
        {
            if(x.second%2!=0)
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES\n";
        
        
    }
	return 0;
}

