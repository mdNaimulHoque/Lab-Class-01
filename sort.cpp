#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {5, 4, 3, 2, 1};
    sort(a, a + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}