#include <bits/stdc++.h>

using namespace std;


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