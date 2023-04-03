#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        int N;
        cin>>N;
        
        string U;
        cin>>U;
        string S="";
        
        char ch=U[0];
        int count=1;
        
        for(int i=1;i<N;i++)
        {
            if(U[i]==ch)
                count++;
            else
            {
               if(count%2==0)
               {
                   S+=ch;
                   S+=ch;
               }
               else
               {
                   S+=ch;
               }
               ch=U[i];
               count=1;
            }
        }
        if(count%2==0)
        {
            S+=ch;
            S+=ch;
        }
        else
            S+=ch;

        cout<<S<<endl;
	}
	return 0;
}