// Pow (x,n)
// x^n

// Doing it in O(n) ans O(log n)

#include <iostream>
using namespace std;

double powerN (int x, int n) {
    int nn = n;
    if (n < 0) { nn = (-1)*n; }

    double ans = 1.0;
    for (int i=1; i<=nn; i++)
        ans = ans*x;

    if (n<0) { ans = (double)1.0/(double)ans; }
    return ans;
}

double powerN_optimized(int x, int n) {

    double ans = 1.0;
    int nn = n;
    if (n<0) { nn = -1*n; }

    while (nn > 0) {
        if (nn%2) {
            nn = nn-1;
            ans = ans*x;
        }
        else {
            nn = nn/2;
            x = x*x;
        }
    }
    if (n<0) { ans = (double)1.0/(double)ans; }
    return ans;
}

int main () {
    int n, x;
    cout << "Enter base and power ";
    cin >> x >> n;

    //cout << powerN(x, n) << endl;
    cout << powerN_optimized(x, n) << endl;
}
