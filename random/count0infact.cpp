#include <bits/stdc++.h>
using namespace std;
int solve(int n) {
    int compt = 0;
    while (n >= 5) {
        compt += n / 5;
        n /= 5;
    }
    return compt;
}