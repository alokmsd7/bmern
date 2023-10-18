#include <bits/stdc++.h>
using namespace std;

int len_num(int a, int b, int n) {
    auto is_div = [](int num, int b) -> bool {
        return num % b == 0;
    };
    for (int i = 0; i < n; ++i) {
        for (int digit = 0; digit < 10; ++digit) {
            int new_num = a * 10 + digit;
            if (!is_div(new_num, b)) {
                a = new_num;
                break;
            }
        }
    }

    return a;
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int result = len_num(a, b, n);
    cout << result << endl;

    return 0;
}
