#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int inc=w2-w1;
        if(inc>=x1*m && inc<=x2*m)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
	
	return 0;
}

