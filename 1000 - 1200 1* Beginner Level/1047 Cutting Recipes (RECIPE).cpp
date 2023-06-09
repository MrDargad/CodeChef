#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int ingredient[N];
	    int min=1001;
	    for(int i=0;i<N;i++)
	    {
	        cin>>ingredient[i];
	        if(ingredient[i]<min)
	            min=ingredient[i];
	    }
	    
	    int HCF;
	    for(int i=min;i>=1;i--)
	    {
	        int numDivided=0;
	        for(int j=0;j<N;j++)
	        {
	            if(ingredient[j]%i==0)
	                numDivided++;
	        }
	        if(numDivided==N)
	        {
	            HCF=i;
	            break;
	        }
	    }
	    for(int i=0;i<N;i++)
	    {
	        cout<<ingredient[i]/HCF<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}