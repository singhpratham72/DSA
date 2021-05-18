// First C++ program
#include <iostream>  // Header file library that lets you work with input and output objects
using namespace std; // We can now use names for objects and variables from the standard library
// Can use std::cout in place of this ^
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;         // used to input values
    cout << a + b << "\n"; // used to output values
    // << insertion operator >> exertion operator

    int c;
    c = 15;

    cout << "Size of int " << sizeof(c);

    // \n = nextLine. Can also use endl to inert new line
    // << insertion operator
    /* This
    is a
    multiline comment*/

    return 0;
}