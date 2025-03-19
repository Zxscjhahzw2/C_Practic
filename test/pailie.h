#ifndef DEBUG1
#define DEBUG1


#include <stdio.h>

#define MAX_SIZE 16  // 最大支持 4x4 的魔方阵（16! 计算量很大）

int arr[MAX_SIZE]; // 存储当前排列
int used[MAX_SIZE]; // 标记数字是否已使用

// 交换数组中的两个元素
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 递归生成排列
void generatePermutations(int index, int n) {
    if (index == n) { // 生成一个完整排列
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) { // 遍历所有可能的数
        if (!used[i]) { // 如果 i 没有使用
            used[i] = 1;
            arr[index] = i;
            generatePermutations(index + 1, n); // 递归
            used[i] = 0; // 回溯
        }
    }
}
#endif// DEBUG1