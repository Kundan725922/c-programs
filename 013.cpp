#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main () {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        qsort(a, n, sizeof(int), cmpfunc);
        qsort(b, n, sizeof(int), cmpfunc);
        int i = 0, j = 0, count = 0, max_count = 0;
        while (i < n && j < n) {
            if (a[i] <= b[j]) {
                count++;
                i++;
            } else {
                count--;
                j++;
            }
            if (count > max_count) {
                max_count = count;
            }
        }
        printf("%d\n", max_count);
    }
    return 0;
}

