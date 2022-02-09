#include<iostream>
using namespace std;
int main()
{
    int n,m,i,flag=0;
    cout<<"Enter the number:-";
    cin>>n;
    m=n/2;
    for(i=2;i<m;i++)
    {
        if(n%2==0)
        {
            flag=1;
            cout<<"Not prime";
        }
    }
    if(flag==0)
    {
        cout<<"It is prime";
    }
    return 0;
}