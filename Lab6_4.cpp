#include <iostream>
#include <cmath>

using namespace std;

double recursive_sum() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 0;
    }

    double result = 0;
    for (int i = 1; i <= n; i++) {
        double x = pow(-1, i + 1) / i;
        result += x;
    }
    return result;
}

int main() {
    double summation = recursive_sum();
    cout << "Result is: " << summation << endl;
    return 0;
}
