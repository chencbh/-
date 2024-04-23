#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int currentMax = 0; // 当前最大子数组和
    int globalMax = 0; // 全局最大子数组和

    for (int i = 0; i < n; i++) {
        currentMax += arr[i];
        if (currentMax < 0) {
            currentMax = 0;
        }
        if (globalMax < currentMax) {
            globalMax = currentMax;
        }
    }
    return globalMax;
}

int main() {
    int n;
    printf("数组的长度: ");
    scanf_s("%d", &n);

    int arr[1000];
    printf("元素: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    int maxSum = maxSubArraySum(arr, n);
    printf("解: %d\n", maxSum);

    return 0;
}
