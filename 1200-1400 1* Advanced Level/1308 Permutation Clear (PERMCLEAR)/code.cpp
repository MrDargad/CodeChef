#include <iostream>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        
        int k,num;
        cin>>k;
        map<int,int>m;
        for(int i=0 ; i<k ; i++)
        {
            cin>>num;
            m[num]++;
        }
        
        
        int no=0;
        for(int i=0 ; i<n ; i++)
        {   
            no=arr[i];
            if(m.find(arr[i])==m.end())
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}

