#include <iostream>

int main()
{
    // Variable assignment
    int width;
    width = 5;
    // width now has a value of five
    std::cout << width << "\n";

    // Variable initialization
    int a{4}; // brace init( or list or uniform)
    int b = 5; // initializer after equal sign
    int c(6); // initializer in parenthesis

    std::cout << a << b << c << "\n";

    // types of brace init
    int width{5}; // direct brace init
    int height = {6}; // copy brace init
    int depth {}; // value init. Inits to zero or empty, used for temporary stuff.

    // multiple variables
    int a = 1, b = 2; // not really reccomended.
}