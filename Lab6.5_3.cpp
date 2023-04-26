#include <iostream>

using namespace std;

int* sieveOfEratosthenesFunc(int arr[]) {
    int* primes = new int[100];
    int numPrimes = 0;

    for (int i = 0; arr[i] != 0; i++) {
        int num = arr[i];
        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            primes[numPrimes++] = num;
        }
    }

    for (int i = 0; primes[i] != 0; i++) {
        if (primes[i] != -1) {
            int currPrime = primes[i];
            numPrimes--;

            for (int j = i + 1; primes[j] != 0; j++) {
                if (primes[j] != -1 && primes[j] % currPrime == 0) {
                    primes[j] = -1;
                }
            }
        }
    }

    int* result = new int[numPrimes + 1];
    int index = 0;

    for (int i = 0; primes[i] != 0; i++) {
        if (primes[i] != -1) {
            result[index++] = primes[i];
        }
    }
    result[index] = 0;
    return result;
}

int main() {

    int arr[] = {24, 32, 2, 5, 6, 7, 8, 9, 10, 22, 24, 33, 0};
    int* primes = sieveOfEratosthenesFunc(arr);

    cout << "Primes: ";
    for (int i = 0; primes[i] != 0; i++) {
        if (primes[i] != -1) {
            cout << primes[i] << "-";
        }
    }
    return 0;
}
