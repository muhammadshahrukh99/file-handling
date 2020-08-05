#include<iostream>
#include<fstream>
using namespace std;
int main(){

int num[10]; 
int sum=0 ;
int mul=0;
for (int i = 0; i < 10; i++)
{
    cin>>num[i];

}
for (int i = 0; i < 10; i++)
{
    sum=sum+num[i];
    
}
cout<<"sum of numbers"<<sum;

return 0; 
}