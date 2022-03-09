#include<iostream>
using namespace std;  // HOLLOW RHOMBUS PATTERN
   
int main()
{ 
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
               cout<<"  ";
        }
        for(int j=1;j<=n;j++)
        {
           if(i==1 || i==n || j==1 ||j==n)
           {
              cout<<"* ";
           }
            else
            {
               cout<<"  ";
            }
        }
    cout<<endl;
    }
    return 0;
} 