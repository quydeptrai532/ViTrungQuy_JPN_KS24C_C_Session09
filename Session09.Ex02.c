#include <stdio.h>

int main() {
    int array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int position, newValue, i;

    printf("Mang hien tai: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (tu 1 den 10): ");
    scanf("%d", &position);

    if (position < 1 || position > 10) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    array[position - 1] = newValue;

    printf("Mang sau khi sua: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
