#include <iostream>
#include <map>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    
	    map <char,int> m;
	    string S;
	    getline (cin, S);
	    for(int i=0;S[i]!='\0';i++)
	    {
	        if(S[i]==' ')
	            continue;
	        m[S[i]]++;
	    }
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        string s;
	        cin>>s;
	        for(int i=0;s[i]!='\0';i++)
	        m[s[i]]--;
	    }
	    
	    map<char, int>::iterator it = m.begin();
 
        int flag=0;
        while (it != m.end())
        {
            if(it->second<0)
            {    cout<<"NO\n";
                flag=1;
                break;
            }
            ++it;
        }
        if(flag==0)
            cout<<"YES\n";
	}
	return 0;
}