#include <iostream>

int main()
{
    int a = 1;          // Original variables -- Write code to swap the value of two variables
    int b = 2;
                       // Swap here
    int temp = a;
    a = b;
    b = temp;
    std::cout << a;

    return 0;
}