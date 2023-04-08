#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x==a && y==b)
            cout<<"0\n";
        else if((x+y)%2==(a+b)%2)
            cout<<"2\n";
        else
            cout<<"1\n";
	}
	return 0;
}
