#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        int A[N];
        int flag;
        
        for(int i=0;i<N;i++)
        {  
            cin>>A[i];
            if(A[i]<=7)
                flag=i;
        }
        cout<<flag+1<<endl;
	}
	return 0;
}