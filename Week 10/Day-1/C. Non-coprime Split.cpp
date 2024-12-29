#include <iostream>
using namespace std;

int div(int n)
{
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return i;
    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b <= 3)
    {
        cout << -1 << endl;
        return;
    }

    if (a != b || a % 2 == 0)
    {
        cout << 2 << ' ' << b - 2 - b % 2 << endl;
        return;
    }

    int t = div(a);
    if (t)
        cout << t << ' ' << a - t << endl;
    else
        cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
