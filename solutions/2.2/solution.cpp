#include <bits/stdc++.h>
using namespace std;

int valid(int n, int p, bool asc) {
    if (asc) {
        if (n>p+3 || n <= p) {
            return false;
        }
    } else {
        if (n<p-3 || n >= p) {
            return false;
        }
    }
    return true;
}

int main () {

    string line;
    int safe_records = 0;

    while (getline(cin, line)) {
        stringstream ss(line);
        bool safe = true;

        int p; //
        ss >> p;
        int n; // current value
        bool fc = true; // first comparison
        bool asc = false;

        int bad_levels = 0;
        while (ss >> n) {
            if (fc) {
                if (n==p || n>p+3 || n <p-3) {
                    if (bad_levels > 0) {
                        safe = false;
                        break;
                    } else {
                        bad_levels++;
                        continue;
                    }
                }
                if (n>p) {
                    asc = true;
                }
                fc = false;
            }
            if (valid(n, p, asc)) {
                p = n;
            } else {
                if (bad_levels > 0) {
                    safe = false;
                    break;
                } else {
                    bad_levels++;
                    continue;
                }
            }
        }

        if (safe) {
            safe_records++;
        }
    }
    cout << safe_records << endl;
    return safe_records;
}
