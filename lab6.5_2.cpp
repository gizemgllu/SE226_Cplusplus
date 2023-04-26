#include <iostream>
#include <string>

using namespace std;

string* palindromFunc(string arr[]) {
    int numb = 0;
    string* palindromes = nullptr;

    for (int i = 0; !arr[i].empty(); ++i) {
        string str = arr[i];
        int left = 0;
        int right = str.length() - 1;
        bool ifPolindrom = true;

        while (left < right && str[left++] == str[right--]);

        if (left < right) {
            ifPolindrom = false;
        }

        if (ifPolindrom) {
            string* new_palindrome = new string(str);
            string* resized_palindromes = new string[numb + 1];
            for (int j = 0; j < numb; ++j) {
                resized_palindromes[j] = palindromes[j];
            }
            resized_palindromes[numb++] = *new_palindrome;
            palindromes = resized_palindromes;
        }
    }
    return palindromes;
}

int main() {

    string strings[6] = {"abc", "madam", "hello", "world", "level", "DSD"};
    string* palindromes = palindromFunc(strings);

    for (int i = 0; !palindromes[i].empty(); ++i) {
        cout << palindromes[i] <<endl;
    }

    return 0;
}
