#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, res1, res2;
    cin >> a >> b >> c >> d;

    if (b == d) {
        res2 = b;
        res1 = a + c;
    }
    else {
        res1 = a * d + b * c;
        res2 = b * d;
    }
    int max = res1 > res2 ? res1 : res2;
    for (int i = 2; i < max; i++) {
        while (res1 % i == 0 && res2 % i == 0) {
            res1 /= i;
            res2 /= i;
        }
        if(i>=res1||1>=res2) break;
    }
    cout << res1 << " " << res2 << "\n";
}