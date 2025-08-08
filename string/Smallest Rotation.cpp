#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "baca"; // example input
    int a = s.length();
    s += s; // duplicate string

    int i = 0, j = 1;
    while (i < a && j < a) {
        int k = 0;
        while (k < a && s[i + k] == s[j + k])
            k++;
        if (k == a) break; // all matched
        if (s[i + k] <= s[j + k])
            j += k + 1;
        else
            i += k + 1;
        if (i == j)
            j++;
    }

    int ans = (i < a) ? i : j;
    cout << "Smallest rotation: " << s.substr(ans, a) << endl;

    return 0;
}
