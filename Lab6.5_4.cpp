#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string* myFunction(string list[], string word) {

    int cnt = 0;
    string* anagramList = new string[6];

    transform(word.begin(), word.end(), word.begin(), ::tolower);
    sort(word.begin(), word.end());

    for (int i = 0; list[i] != ""; i++) {
        string temp = list[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        sort(temp.begin(), temp.end());

        if (temp == word) {
            anagramList[cnt++] = list[i];
        }
    }
    anagramList[cnt] = "";
    return anagramList;
}



int main() {
    string word = "game";
    string list[] = {"mage", "team", "gamer", "meag", "apple", ""};

    string* anagramList = myFunction(list, word);

    cout << "Anagrams: \"" << word << "\" " << endl;
    for (int i = 0; anagramList[i] != ""; i++) {
        cout << anagramList[i] << endl;
    }
    return 0;
}



