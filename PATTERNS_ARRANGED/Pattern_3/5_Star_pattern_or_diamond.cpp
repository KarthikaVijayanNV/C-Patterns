#include<iostream>  // Star pattern OR DIAMOND PATTERN
using namespace std;  //Printing star pattern .... larger code // simple coding is also there
                    // applying the palindromic pattern logic  // u can code in a simple way alsp
int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    { 
        int j;                 
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        
        for(;j<=n;j++)          
        {                       
            cout<<"*"<<" ";               
        }                                   

        
        for(;j<=n+i-1;j++)  
        {                    
            cout<<"*"<<" ";      
        }                                    
    cout<<endl;
    
    }
    for(int i=n;i>=1;i--)
    { 
        int j;                 
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        
        for(;j<=n;j++)          
        {                       
            cout<<"*"<<" ";               
        }                                   

        
        for(;j<=n+i-1;j++)  
        {                    
            cout<<"*"<<" ";      
        }                                    
    cout<<endl;
    
    }
    return 0;
} 


