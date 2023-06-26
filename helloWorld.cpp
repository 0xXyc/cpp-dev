#include <iostream>

using namespace  std;

int main()
{

    double sales = 95000;
    double stateTax = sales * .04;
    double countyTax = sales * .02;

    cout << "Sales: $" << sales << endl;
    cout << "State Tax: $" << stateTax << endl;
    cout << "County Tax: $" << countyTax;

    return 0;
}