#include <iostream>

using namespace std;

int* commons(int* arr1, int* arr2) {

    int* commonElements = nullptr;
    int cnt = 0;

    for (int i = 0; arr1[i] != '\0'; i++) {
        for (int j = 0; arr2[j] != '\0'; j++) {

            if (arr1[i] == arr2[j]) {
                int* temp = new int[cnt + 1];
                for (int k = 0; k < cnt; k++) {
                    temp[k] = commonElements[k];
                }
                temp[cnt] = arr1[i];
                commonElements = temp;
                cnt++;
                break;
            }
        }
    }

    return commonElements;
}

int main() {

    int arr1[] = {14, 23, 37, 4, 5};
    int arr2[] = {10, 5, 4, 7, 28};
    int* commonElements = commons(arr1, arr2);

    for (int i = 0; commonElements[i]; i++) {
        cout << commonElements[i] <<endl;
    }

    return 0;
}
