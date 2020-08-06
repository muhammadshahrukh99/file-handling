#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num, count = 0, sum = 0;
    int average;
    do
    {
        cout << " type the  number";
        cin >> num;
        if (num > 0)

        {
            sum += num;
            count++;
        }
        else if (num < 0)
        {
            cout << "Error";
        }

    }

    while (num != 0);
    cout << " number is zero:";
    average = sum / count;

    cout << "average is : " << average;
}
