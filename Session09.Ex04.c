#include <stdio.h>

int main() {
    int array[100], n = 0, choice, value, position, i;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang (toi da 100): ");
                scanf("%d", &n);
                if (n > 100 || n <= 0) {
                    printf("So phan tu khong hop le!\n");
                } else {
                    printf("Nhap cac phan tu vao mang:\n");
                    for (i = 0; i < n; i++) {
                        printf("Phan tu %d: ", i + 1);
                        scanf("%d", &array[i]);
                    }
                }
                break;

            case 2:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Mang hien tai: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (n == 100) {
                    printf("Mang da day! Khong the them phan tu.\n");
                } else {
                    printf("Nhap gia tri phan tu can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them (tu 1 den %d): ", n + 1);
                    scanf("%d", &position);
                    if (position < 1 || position > n + 1) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (i = n; i >= position; i--) {
                            array[i] = array[i - 1];
                        }
                        array[position - 1] = value;
                        n++;
                        printf("Them phan tu thanh cong.\n");
                    }
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Nhap vi tri can sua (tu 1 den %d): ", n);
                    scanf("%d", &position);
                    if (position < 1 || position > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        printf("Nhap gia tri moi: ");
                        scanf("%d", &value);
                        array[position - 1] = value;
                        printf("Sua phan tu thanh cong.\n");
                    }
                }
                break;

            case 5:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Nhap vi tri can xoa (tu 1 den %d): ", n);
                    scanf("%d", &position);
                    if (position < 1 || position > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (i = position - 1; i < n - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        n--;
                        printf("Xoa phan tu thanh cong.\n");
                    }
                }
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
