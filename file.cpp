#include<iostream>
#include<fstream>
using namespace std;
int main(){

int num[10]; 
int sum=0 ;
int mul=1;
float avg;
for (int i = 0; i < 10; i++)
{
    cin>>num[i];

}
for (int i = 0; i < 10; i++)
{
    sum=sum+num[i];
    
}


for (int i = 0; i < 10; i++)
{
    mul=mul*num[i];
}
avg=sum/10.0;
cout<<"sum of numbers : "<<sum<<endl;
cout<<"Multi of numbers : "<<mul<<endl;
cout<<"Avg of numbers : "<<avg<<endl;

return 0; 
}