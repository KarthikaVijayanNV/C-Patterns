#include<iostream>   // HOLLOW BUTTERFLY
using namespace std;
   
int main()
{ 
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++) // first half =upward part coding
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        int space=2*n- 2*i;
        for(int j=1;j<=space;j++)
        {
           cout<<" ";
        }


       for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
      cout<<endl;
    }



    for(int i=n;i>=1;i--) // 2nd half = downward part coding
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        int space=2*n- 2*i;
        for(int j=1;j<=space;j++)
        {
           cout<<" ";
        }


       for(int j=1;j<=i;j++)
        {
            
            if(j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
      cout<<endl;
    }

    return 0;
} 