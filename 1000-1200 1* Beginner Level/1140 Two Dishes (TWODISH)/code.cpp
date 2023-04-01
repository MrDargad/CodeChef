#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int dish,fruit,veg,fish;
        cin>>dish>>fruit>>veg>>fish;
        if(veg>=dish && (fruit+fish>=dish))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	
	return 0;
}

