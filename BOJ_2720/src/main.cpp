#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int q{ 25 };
    int d{ 10 };
    int n{ 5 };
    int p{ 1 };

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int v;
        cin >> v;

        int cq = v / q;
        v -= cq * q;

        int cd = v / d;
        v -= cd * d;

        int cn = v / n;
        v -= cn * n;

        int cp = v / p;

        cout << cq << ' ' << cd << ' ' << cn << ' ' << cp << '\n';
    }

    return 0;
}