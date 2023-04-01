#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    
        map<int , int >m;
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int total =n1+n2+n3,id;
        for(int i=0 ; i<total ; i++)
        {
            cin>>id;
            m[id]++;
        }
        int i=0;
        int count=0;
        vector <int> arr;
        for (auto it = m.begin(); it != m.end(); ++it)
        {
        if(it->second>1)
            {
                arr.push_back(it->first);
                count++;
            }
        }
        cout<<count<<endl;
        for (auto i = arr.begin(); i != arr.end(); ++i)
        cout << *i <<endl;
    

	return 0;
}

