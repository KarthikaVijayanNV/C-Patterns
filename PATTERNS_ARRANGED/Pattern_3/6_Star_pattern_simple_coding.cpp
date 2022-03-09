#include<iostream> // Star pattern DIAMOND PATTERN
using namespace std;  //Printing star pattern  coded in a simple way
   

int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)        //upper parts
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }


     for(int i=n;i>=1;i--)   //lower parts
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
    
    return 0;
}
   
   