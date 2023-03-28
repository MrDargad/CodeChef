#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int row,seats;
	    cin>>row>>seats;
	    //for 1 row
	    int sr=0;
	    if(seats%2==0)
	        sr=seats/2;
	    else
	        sr=seats/2+1;
	    
	    //for n rows
	    if(row%2==0)
	        cout<<(row/2)*sr<<endl;
	    else
            cout<<((row/2)+1)*sr<<endl;
	    
	}
	
	return 0;
}

