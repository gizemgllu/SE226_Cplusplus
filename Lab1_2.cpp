#include <iostream>
using namespace std;

int main() {

    int var1, var2;
    cout << "Enter 2 values: " << endl;
    cin >> var1 >> var2;
    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;
    cout << "Your values are: " <<var1<< " and " << var2 << endl;
    cout << "Summation result: " << sum << endl;
    cout << "Difference result: " << diff << endl;
    cout << "Product result: " << prod << endl;

    return 0;
}
