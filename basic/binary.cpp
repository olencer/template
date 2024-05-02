int l = leftBound - 1, r = rightBound + 1;
while (l + 1 < r) {
    int mid = l + ((r - l) >> 1);
    if(check(mid)) {
        l = mid;
    } else {
        r = mid;
    }
}
std::cout << l << '\n';

int l = leftBound - 1, r = rightBound + 1;
while (l + 1 < r) {
    int mid = l + ((r - l) >> 1);
    if(check(mid)) {
        r = mid;
    } else {
        l = mid;
    }
}
std::cout << r << '\n';
