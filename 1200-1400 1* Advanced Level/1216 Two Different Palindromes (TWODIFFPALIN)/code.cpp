#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int zero,ones;
        cin>>zero>>ones;
        if((zero%2==1 && ones%2==1) || zero<=1 || ones<=1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
	return 0;
}

