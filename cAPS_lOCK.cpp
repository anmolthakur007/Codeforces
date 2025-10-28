#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;

    bool allUpper = true;
    bool allExceptFirstUpper = true;

    // Check if the whole word is uppercase
    for (char c : word) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    // Check if all characters except the first are uppercase
    for (size_t i = 1; i < word.length(); ++i) {
        if (!isupper(word[i])) {
            allExceptFirstUpper = false;
            break;
        }
    }

    if (allUpper) {
        // Convert entire word to lowercase
        for (char &c : word) {
            c = tolower(c);
        }
    } else if (allExceptFirstUpper) {
        // Toggle case: capitalize first, lowercase rest
        word[0] = toupper(word[0]);
        for (size_t i = 1; i < word.length(); ++i) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word << endl;

    return 0;
}