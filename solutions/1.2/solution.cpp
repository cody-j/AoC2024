#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    vector<int> left;
    vector<int> right;
    unordered_map<int, int> counts;

    while (getline(cin, line)) {
         // stringstream ss(line);
        stringstream ss = stringstream(line);
        int first, second;
        // read stringstream out to first and second
        ss >> first >> second;
        counts[second]++;
        left.push_back(first);
        right.push_back(second);
    }

    int s = 0;
    for (int i = 0; i < left.size(); i++) {
        if (counts.find(left[i]) != counts.end()) {
            s += left[i]*counts[left[i]];
        }
    }
    cout << s << endl;
}
