#include <bits/stdc++.h>

const int N = 1E6;

int a[N + 1];
int queue[N + 1];
int front = 1, rear = 0;

void solve()
{
    int n, k;
    std::cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        while (front <= rear && a[queue[rear]] >= a[i]) { --rear; }
        while (front <= rear && i - queue[front] + 1 > k) { ++front; }
        queue[++rear] = i;
        if(i >= k) { std::cout << a[queue[front]] << " \n"[i == n]; }
    }

    front = 1, rear = 0;
    for (int i = 1; i <= n; ++i) {
        while (front <= rear && a[queue[rear]] <= a[i]) { --rear; }
        while (front <= rear && i - queue[front] + 1 > k) { ++front; }
        queue[++rear] = i;
        if(i >= k) { std::cout << a[queue[front]] << " \n"[i == n]; }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
