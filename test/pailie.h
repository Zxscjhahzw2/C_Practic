#ifndef DEBUG1
#define DEBUG1


#include <stdio.h>

#define MAX_SIZE 16  // ���֧�� 4x4 ��ħ����16! �������ܴ�

int arr[MAX_SIZE]; // �洢��ǰ����
int used[MAX_SIZE]; // ��������Ƿ���ʹ��

// ���������е�����Ԫ��
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// �ݹ���������
void generatePermutations(int index, int n) {
    if (index == n) { // ����һ����������
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) { // �������п��ܵ���
        if (!used[i]) { // ��� i û��ʹ��
            used[i] = 1;
            arr[index] = i;
            generatePermutations(index + 1, n); // �ݹ�
            used[i] = 0; // ����
        }
    }
}
#endif// DEBUG1