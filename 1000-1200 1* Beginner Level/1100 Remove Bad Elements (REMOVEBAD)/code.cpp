#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int no,max=0;
    map<int,int> m;
    for(int i=0 ; i<n ; i++)
    {
        cin>>no;
        m[no]++;
        if(max<m[no])
            max=m[no];
    }
    
    cout<<n-max<<endl;
    }
    return 0;
    
    
}
