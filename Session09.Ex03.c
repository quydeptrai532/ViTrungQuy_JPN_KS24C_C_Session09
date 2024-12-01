#include <stdio.h>

int main() {
    int array[100];
    int n, i, position;

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

    printf("Mang hien tai: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (tu 1 den %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

   
    for (i = position - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--;  

    printf("Mang sau khi xoa: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
