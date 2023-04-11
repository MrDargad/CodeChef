#include <iostream>
#include<map>
using namespace std;

int main() {

    int T;
    cin>>T;
    while(T--){   
        int N;
        cin>>N;
        
        map<int,int> m;
        int type;
        for(int i=0 ; i<N ; i++)
        {
            cin>>type;
            m[type]++;
        }
        
        for(auto it:m)
        {
            if(it.second%2!=0)
                cout<<it.first<<endl;
        }
    }
	return 0;
}