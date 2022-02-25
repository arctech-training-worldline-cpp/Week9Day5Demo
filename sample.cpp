#include <iostream>
using namespace std;

#define SQUARE(l)(l*l)

int main()
{
    cout << "Enter a number to get the square";
    int x;
    cin >> x;
    cout <<"Square of " << x << " is : " << SQUARE(x);

    return 0;
}