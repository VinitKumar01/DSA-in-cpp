#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<string, string> name = {"Vinit", "Kumar"};
    cout << name.first << " " << name.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {2,3}, {3,4}};

    cout << arr[1].second << endl;
}

int main() {
    explainPair();
    return 0;
}