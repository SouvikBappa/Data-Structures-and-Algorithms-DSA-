#include <iostream>
using namespace std;

int main()
{
    int income;
    float tax;
    cout << "enter amount: ";
    cin >> income;
    if (income <= 5)
    {
        tax = 0;
    }
    else if (income <= 10)
    {
        tax = 0.2 * income;
    }
    else if (income >= 12 && income <= 15)
    {
        tax = 0.5 * income;
    }
    else
    {
        tax = 0.3 * income;
    }
    cout << "Tax is : " << (tax * 100000) << endl;
    return 0;
}