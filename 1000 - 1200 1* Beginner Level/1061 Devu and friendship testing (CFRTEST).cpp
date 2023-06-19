#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int n;
        cin>>n;
        int m=n;
        int d[101]={0};
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            if(d[num]==num)
                m--;
            else
                d[num]=num;
        }
        cout<<m<<endl;
	}
	return 0;
}