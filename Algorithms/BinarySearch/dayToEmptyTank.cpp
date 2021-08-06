#include <bits/stdc++.h>
using namespace std;

int getCumulateSum(int n)
{
    return (n * (n + 1)) / 2;
}
// Method returns minimum number of days after
// which tank will become empty
int minDaysToEmpty(int C, int l)
{
    // if water filling is more than capacity then
    // after C days only tank will become empty
    if (C <= l)
        return C;   
    // initialize binary search variable
    int lo = 0;
    int hi = 1e4;
    int mid;
    // loop until low is less than high
    while (lo < hi) {
        mid = (lo + hi) / 2;

        // if cumulate sum is greater than (C - l)
        // then search on left side
        if (getCumulateSum(mid) >= (C - l))
            hi = mid;
        
        // if (C - l) is more then search on
        // right side
        else
            lo = mid + 1;       
    }

    // final answer will be obtained by adding
    // l to binary search result
    return (l + lo);
}

// Driver code to test above methods
int main()
{
    int C = 5;
    int l = 2;

    cout << minDaysToEmpty(C, l) << endl;
    return 0;
}

//https://www.geeksforgeeks.org/number-days-tank-will-become-empty/
