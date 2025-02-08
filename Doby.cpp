#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string toLowerCase(const string &s)
{
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        vector<string> words(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> words[i];
        }

        string minWord = words[0];
        for (int i = 1; i < n; ++i)
        {
            if (toLowerCase(words[i]) < toLowerCase(minWord))
            {
                minWord = words[i];
            }
        }

        cout << minWord << "\n";
    }

    return 0;
}