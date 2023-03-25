#include <iostream>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int price;
        map<int,int> m;        
        for(int i=0 ; i<2*n ; i++)
        {
            cin>>price;
            m[price]++;
        }
        
        for(auto it:m)
        {
        if(it.second>=3)
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

