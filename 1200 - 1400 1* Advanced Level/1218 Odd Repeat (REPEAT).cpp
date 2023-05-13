#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	   int N,K,S;
	   cin>>N>>K>>S;
	   int i=1;
	   while(N--)
	   {
	       S-=i;
	       i+=2;
	   }
	   K--;
	   cout<<S/K<<endl;
	}
	return 0;
}