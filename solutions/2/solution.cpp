#include <bits/stdc++.h>
using namespace std;

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
        while (ss >> n) {
            if (fc) {
                if (n == p) {
                    safe = false;
                    break;
                }
                if (n>p) {
                    asc = true;
                }
                fc = false;
            }

            if (asc) {
                if (n>p+3 || n <= p) {
                    safe = false;
                    break;
                }
            } else {
                if (n<p-3 || n >= p) {
                    safe = false;
                    break;
                }
            }
            p = n;
        }

        if (safe) {
            safe_records++;
        }
    }
    cout << safe_records << endl;
    return safe_records;
}
