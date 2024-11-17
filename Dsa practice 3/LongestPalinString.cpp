#include <iostream>
using namespace std;

int lcs(string &a, string &b, int x, int y) {
    if (x == 0 || y == 0)
        return 0;

    if (a[x - 1] == b[y - 1])
        return 1 + lcs(a, b, x - 1, y - 1);

    return max(lcs(a, b, x, y - 1), lcs(a, b, x - 1, y));
}

int main() {
    string a = "AGGTAB";
    string b = "GXTXAYB";
    int x = a.size();
    int y = b.size();

    cout << lcs(a, b, x, y) << endl;

    return 0;
}
