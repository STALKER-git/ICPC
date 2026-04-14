#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, count = 0;
    cin >> a >> b;
    float result = log(b / a) / log(1.5);
    cout << floor(result) + 1 << endl;
    int count = 0;
    return 0;
}
