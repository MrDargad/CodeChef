#include <iostream>
#include <map>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    
	    int tr; cin>>tr;
	    map<int, int> Tr;
	    for(int i=0;i<tr;i++)
	    {
	        int num;
	        cin>>num;
	        Tr[num]++;
	    }
	    
	    int dr; cin>>dr;
	    map<int, int> Dr;
	    for(int i=0;i<dr;i++)
	    {
	        int num;
	        cin>>num;
	        Dr[num]++;
	    }
	    
	    int flag=0;
	    int ts; cin>>ts;
	    for(int i=0;i<ts;i++)
	    {
	        int num;
	        cin>>num;
	        Tr[num]++;
	        if(Tr[num]==1)
	            flag=1;
	    }
	    
	    int ds; cin>>ds;
	    for(int i=0;i<ds;i++)
	    {
	        int num;
	        cin>>num;
	        Dr[num]++;
	        if(Dr[num]==1)
	            flag=1;
	    }
	    
	    if(flag==1)
	        cout<<"no\n";
	    else
	        cout<<"yes\n";
	}
	return 0;
}