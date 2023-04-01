#include <iostream>
using namespace std;

int DigSum(int no)
{
    int p1=0;;
    while(no>0)
    {
        p1=p1+(no%10);
        no=no/10;
    }
    return p1;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p1,p2,chefCnt=0,mortyCnt=0;
        for(int i=0 ; i<n ; i++)
        {   
            cin>>p1>>p2;
            
            if(p1>9)
                p1=DigSum(p1);
            if(p2>9)
                p2=DigSum(p2);
           
            if(p1==p2)
            {   
                chefCnt++;
                mortyCnt++;
            }
            else if(p1>p2)
                chefCnt++;        
            else 
                mortyCnt++;
            
        }
        
        if(chefCnt==mortyCnt)
            cout<<2<<" "<<chefCnt<<endl;
        else if(chefCnt>mortyCnt)
            cout<<0<<" "<<chefCnt<<endl;
        else 
            cout<<1<<" "<<mortyCnt<<endl;
        
    }
	return 0;
}

