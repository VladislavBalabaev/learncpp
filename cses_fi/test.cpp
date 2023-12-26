#include <bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;


// to shorten the code: type names (typedef) & macros (#define)
typedef long long ll;
ll a = 1;

void macros(int i, int n) {
    REP(i, 1, n) {
        //
    }
}




bool equality(double a, double b, double precision) {
    if (abs(a - b) < precision) {
        return true;
    } else {
        return false;
    }
}


int faulhabers_formula(int a, int b, int n) {
    return n * (a + b) / 2;
}


int geometric_progression(int a, int b, int k) {
    return (b * k - a) / (k - 1);
}


int binets_formula(int n) {
    return ((1 + 5 ^ (1 / 2)) ^ (n) - (1 + 5 ^ (1 / 2)) ^ (n)) / (2 ^ (n) * 5 ^ (1 / 2));
}


int main() {
    // to make i/o more efficient: 
    ios::sync_with_stdio(0);
    cin.tie(0);

    // to read input & write output 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    int a = 123456789;
    // long long b = a*a;   - wrong, will give -1757895751, right:
    long long b = (long long)a*a;


}
// g++ -O2 test.cpp -o test