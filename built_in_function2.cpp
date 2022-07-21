#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5] = {5, 2, 3, 1, 4};
    // int mn = ar[0];
    int mx = ar[0];
    for (int i = 1; i < 5; i++)
    {
        // if (ar[i] < mn)
        // {
        //     mn = ar[i];
        // }
        mx = max(mx, ar[i]);
    }

    // int a = 10, b = 500, c = 250;
    // int mn;
    // // mn = min(a, b);
    // int mx;
    // mx = max(a, max(b, c));

    cout << mx << endl;

    return 0;
}