#include <iostream>

using namespace std;
const int N = 1e5 + 10;
int a[N];

void merge_sort(int l, int r) {
    if (l >= r) return;
    int mid = (l + r) >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    int i = l, j = mid + 1, k = 0, tmp[N];
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) tmp[k++] = a[i++];
        else tmp[k++] = a[j++];
    }
    while (i <= mid) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (i = l, j = 0; i <= r; i++, j++) a[i] = tmp[j];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    merge_sort(0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}