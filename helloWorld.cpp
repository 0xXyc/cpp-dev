#include <iostream>

int main()
{
    const double pi = 3.14;             // constants stop variables from changing
    //pi = 3.13;                        // If we were to uncomment this, we would get an error because we are trying to change the variable
    std::cout << pi;

    return 0;
}