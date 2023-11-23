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




double equality(double a, double b, double precision) {
    if (abs(a - b) < precision) {
        return true;
    } else {
        return false;
    }
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