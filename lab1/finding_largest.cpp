#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers to find the largest" <<endl;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<a<<" is the largest among the three"<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is the largest among the three"<<endl;
    }
    else
    {
        cout<<c<<" is the largest among the three"<<endl;
    }

}
