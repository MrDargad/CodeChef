#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int maxT,maxN,sumN;
	    cin>>maxT>>maxN>>sumN;
	    int sum=0;
	    
	    if(maxT>sumN/maxN)
	        while(sumN!=0){
	            if(sumN>=maxN){
	                sumN-=maxN;
	                sum+=(maxN*maxN);
	            }
	            else{
	                sum+=(sumN*sumN);
	                sumN=0;
	            }
	        }
	    else
	        while(maxT--)
	            sum+=(maxN*maxN);

	    cout<<sum<<endl;
	}
	return 0;
}