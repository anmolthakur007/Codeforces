#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string y = "WUB";
    vector<string> words;
    size_t pos = 0;

    // Use stringstream-like parsing to split by "WUB"
    while ((pos = s.find(y)) != string::npos)
    {
        string part = s.substr(0, pos);
        if (!part.empty())
            words.push_back(part);
        s.erase(0, pos + y.length());
    }

    if (!s.empty()) // Add the last part
        words.push_back(s);

    // Output the result
    for (size_t i = 0; i < words.size(); ++i)
    {
        if (i > 0)
            cout << " ";
        cout << words[i];
    }

    cout << endl;

    return 0;
}
