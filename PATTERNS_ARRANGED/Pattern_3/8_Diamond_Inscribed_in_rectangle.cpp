#include<iostream> // DIAMOND PATTERN INSCRIBED IN RECTANGLE-star pattern inscribed in Rectangle
using namespace std;  
   

int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)        //upper parts
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }


        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
             {
                 cout<<"*"<<" ";
             }
             else
             {
                 cout<<"  ";
             }
        }


        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
    cout<<endl;
    }


     for(int i=n;i>=1;i--)   //lower parts
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }


        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
            cout<<"*"<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }


        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
    cout<<endl;
    }
    
    return 0;
}
   
   