#include<iostream>
using namespace std;
   
int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    { 
        int j;                 // initializing in the beginning so accessible for 3 of the coming loops
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        int k=i;
        for(;j<=n;j++)        // j not initialised.....it starts from where previous loop ended.     
        {                     // starts from j=n-i (where j ended in previous loop)          
            cout<<k--<<" ";       // can be give as   cout<<k;          
        }       // post decrement                              //      k--;         both are same

        k=2;
        for(;j<=n+i-1;j++)  // j not initialised .....it starts from where previous loop ended.
        {                   //  starts from j=n (where j ended in previous loop)
            cout<<k++<<" ";      // can be given as  cout<<k;
        }                                    //     k++;         both are same
    cout<<endl;
    
    }
    return 0;
} 