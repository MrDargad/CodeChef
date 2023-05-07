#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string A;
	    cin>>A;
	    int balance=0;
	    int max_balance=0;
	    
	    for(int i=0;A[i]!='\0';i++)
	    {
	        if(A[i]=='(')
	            balance++;
	        else if(A[i]==')')
	            balance--;
	        if(balance>max_balance)
	        {
	            max_balance=balance;
	        }
	    }
	    
	    for(int i=0;i<max_balance;i++)
	    {
	        cout<<'(';
	    }
	    for(int i=0;i<max_balance;i++)
	    {
	        cout<<')';
	    }
	    cout<<endl;
	}
	return 0;
}
