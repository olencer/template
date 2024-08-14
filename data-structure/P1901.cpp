#include <bits/stdc++.h>

const int N = 1E6;

int h[N + 1];
int v[N + 1];
int sum[N + 1];
int stack[N + 1];

void solve()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> h[i] >> v[i];
    }

    *stack = 0;
    for (int i = 1; i <= n; ++i) {
        while (*stack && h[stack[*stack]] < h[i]) {
            sum[i] += v[stack[*stack]];
            --*stack;
        }
        sum[stack[*stack]] += v[i];
        stack[++*stack] = i;
    }
    std::cout << *std::max_element(sum + 1, sum + n + 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
