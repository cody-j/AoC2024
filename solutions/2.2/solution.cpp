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

    int ns = 0; // number of safe records

    while (getline(cin, line)) {
        stringstream ss(line);
        int ul = 0; // number of unsafe levels (max 1)
        int a, b;
        bool asc = false; // ascending
        bool dk = false; // direction known
        if (ss >> a >> b) {
            int n = 0;
            if (!valid(a, b, true) || !valid(a, b, false)) {
                ul++;
                continue;
            }
            while (ss >> n) {
                // neighbour doesn't work, try alternatives, finally accepting failure and moving on
                if ()
                //
                // pass
            }
        } else {
            ns+=1;
            continue;
        }

    }
    cout << ns << endl;
    return ns;
}
