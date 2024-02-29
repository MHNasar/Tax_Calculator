#include <iostream>

//sales=$95000;
//state tax=4%
//county tax=2%
using namespace  std;
int main() {
    double sales = 95000;
    double StateTax= 0.04;
    double CountyTax=0.02;
    double State_tax= sales * StateTax;
    double County_Tax= sales * CountyTax;
    double total_tax=State_tax + County_Tax;
    double total_sales = sales - total_tax;

    cout << "Total sales = $" << total_sales << endl;
    cout << "Total sales = $" << State_tax << endl;
    cout << "County Tax = $" << County_Tax << endl;
    cout << "Total Tax = $" << total_tax << endl;

    return 0;

}