#include <bits/stdc++.h>
using namespace std;


int main() {
    string line;

    vector<int> left;
    vector<int> right;

    while(getline(cin, line)) {
        // stringstream ss(line);
        stringstream ss = stringstream(line);

        int first, second;

        // read stringstream out to first and second
        ss >> first >> second;

        left.push_back(first);
        right.push_back(second);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int s = 0;
    cout << (right[0]-left[0]) << endl;

    for (int i = 0; i < left.size(); i++) {
        s += abs(left[i]-right[i]);
    }
    cout << s << "\n";
    return s;
}
