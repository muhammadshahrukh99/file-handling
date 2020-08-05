#include <iostream>
#include <fstream>
using namespace std;

int sum(int *p)
{
    int i ,s=0;
    for (int i = 0; i < 10; i++)
    {
        s = s + *p;
        p++;
    }
    return s;
}
int main()
{
    int a[10],i,s;
    cout<<"Enter 10 Elements";
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
        s=sum(a);
        
    }
    cout<<"sum  : "<<s;
    return 0 ; 
}
