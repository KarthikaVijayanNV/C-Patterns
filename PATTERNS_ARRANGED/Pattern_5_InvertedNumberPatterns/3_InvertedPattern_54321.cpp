#include<iostream>
using namespace std;
     /*
         5 4 3 2 1
         5 4 3 2
         5 4 3
         5 4 
         5
    */
   
int main()
{
   int n;
   cout<<"Enter n"<<endl;
   cin>>n;

   for(int i=n;i>=1;i--)
   {    
       int count =n;                                        
       for(int j=1;j<=i;j++)
       {
       cout<<count--<<" ";
       }
       cout<<endl;
   }
    return 0;
}