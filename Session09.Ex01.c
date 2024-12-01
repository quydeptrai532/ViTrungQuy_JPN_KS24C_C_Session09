#include <stdio.h>

int main() {
    int array[100];
    int n, i, value, position;

    printf("Nhap so phan tu muon nhap vao mang (toi da 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu vao mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    printf("Nhap vi tri can them (tu 1 den %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (i = n; i >= position; i--) {
        array[i] = array[i - 1];
    }
    array[position - 1] = value;
    n++;

    printf("Mang sau khi them phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
