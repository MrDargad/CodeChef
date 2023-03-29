LAP#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        int A[11]={0};
        
        int temp;
        int max=0;
        for(int i=0;i<N;i++)
        {
            cin>>temp;
            A[l]++;
            if(A[temp]>max)
                max=A[l];
        }
        int flag=0;
        int ans;
        for(int i=0;i<11;i++)
        {
            if(A[i]==max)
            {
                flag++;
                ans=i;
            }
            if(flag==2)
            {
                cout<<"CONFUSED\n";
                break;
            }
        }
        if(flag!=2)
            cout<<ans<<endl;
	}
	return 0;
}
