#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=1;s[i]!='\0';i++)
	    {
	        if(s[i]=='>' && s[i-1]=='<')
	        {    count++;
	            i++;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}