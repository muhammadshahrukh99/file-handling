#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char str[200];
    int w = 0, i = 0;
    cout << "Enter the sentence : ";
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t')
        {
            w++;
            while (str[i] != ' ' && str[i] != '\t')
                i++;
        }
    }
    cout << "Number of Words : " << w;
    return 0;
}
