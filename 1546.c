#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * 100 / max;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    sum /= n;
    printf("%.2lf", sum);
    return 0;
}