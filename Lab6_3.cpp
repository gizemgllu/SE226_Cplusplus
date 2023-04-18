#include <iostream>
using namespace std;

double myFunction(int n) {

    if (n == 0) {
        return 0;
    } else {

        double x;

        if (n % 2 == 0) {
            x = -1.0 / n;
        }
        else {
            x = 1.0 / n;
        }

        return x + myFunction(n - 1);
    }
}

int main() {
    int n;
    cout << "Please enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input!" << endl;
    } else {

        double result = myFunction(n);

        cout << "Summation is: " << result << endl;
    }
    return 0;
}

