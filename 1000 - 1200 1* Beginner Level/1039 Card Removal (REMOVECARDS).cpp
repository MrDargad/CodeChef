#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	   int N;
	   cin>>N;
	   int A[11]={0};
	   
	   int max=0;
	   for(int i=0;i<N;i++)
	   {
	       int num;
	       cin>>num;
	       A[num]++;
	       if(A[num]>max)
	        max=A[num];
	   }
	   cout<<N-max<<endl;
	}
	return 0;
}