#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A')
        {
            count++;
        }
        i++;
    }
    if (count > str.length() - count)
    {
        cout << "Anton" << endl;
    }
    else if (count == str.length() - count)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}