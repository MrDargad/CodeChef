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
        
        map<int,int> m;
        int freq;
        for(int i=0 ; i<n ; i++)
        {
            cin>>freq;
            m[freq]++;
        }
        
        for(auto it:m)
        {
            if(it.second%2!=0)
                cout<<it.first<<endl;
        }
    }
	return 0;
}

