#include<iostream>
using namespace std;
     /*
         5 5 5 5 5 
         4 4 4 4 
         3 3 3
         2 2 
         1
    */
   
int main()
{
   int n;
   cout<<"Enter n"<<endl;
   cin>>n;

   for(int i=n;i>=1;i--)
   {                                            
       for(int j=1;j<=i;j++)
       {
       cout<<i<<" ";
       }
       cout<<endl;
   }
    return 0;
}