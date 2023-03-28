#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[11]={},max=0,flag=0,no,lap=0;
      for(int i=0 ; i<n ; i++)
      {
        cin>>no;
        if(max < ++arr[no])
            max = arr[no], lap = no, flag = 1;
        else if(max==arr[no])
            flag=2;
      }
      
        if(flag==1)     cout<<lap<<endl;
        else    cout<<"CONFUSED\n";
  }
    return 0;
}
