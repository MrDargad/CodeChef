#include <iostream>
#include <algorithm>
using namespace std;


int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int K[11];
	    for(int i=0;i<11;i++)
	    {
	        cin>>K[i];
	    }
	    sort(K,K+11);
	    
	    int N;
	    cin>>N;
	    
	    int count=0;
	    int min=K[11-N];
	    
	    for(int i=0;i<11;i++)
	    {
	        if(K[i]==min)
	            count++;
	        else if(K[i]>min)
	            break;
	    }
	    
	    int used=0;
	    for(int i=11-N;i<11;i++)
	    {
	        if(K[i]==min)
	            used++;
	        else if(K[i]>min)
	            break;
	    }
	    
	    cout<<factorial(count)/(factorial(used)*factorial(count-used))<<endl;
	    
	}
	return 0;
}