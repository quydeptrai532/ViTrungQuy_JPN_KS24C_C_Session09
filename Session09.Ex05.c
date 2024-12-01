#include <stdio.h>

int main() {
    int array[100], n, choice, value, position, i, j, total, count, max, min;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
                    printf("Gia tri cac phan tu dang quan ly: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    total = 0;
                    printf("Gia tri cac phan tu chan: ");
                    for (i = 0; i < n; i++) {
                        if (array[i] % 2 == 0) {
                            printf("%d ", array[i]);
                            total += array[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n", total);
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    max = array[0];
                    min = array[0];
                    for (i = 1; i < n; i++) {
                        if (array[i] > max) max = array[i];
                        if (array[i] < min) min = array[i];
                    }
                    printf("Gia tri lon nhat trong mang: %d\n", max);
                    printf("Gia tri nho nhat trong mang: %d\n", min);
                }
                break;

            case 5:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    total = 0;
                    printf("Gia tri cac phan tu la so nguyen to: ");
                    for (i = 0; i < n; i++) {
                        if (array[i] <= 1) {
                            continue;
                        }
                        int isPrime = 1;
                        for (j = 2; j * j <= array[i]; j++) {
                            if (array[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                        if (isPrime) {
                            printf("%d ", array[i]);
                            total += array[i];
                        }
                    }
                    printf("\nTong cac phan tu la so nguyen to: %d\n", total);
                }
                break;

            case 6:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Nhap vao mot so can thong ke: ");
                    scanf("%d", &value);
                    count = 0;
                    for (i = 0; i < n; i++) {
                        if (array[i] == value) {
                            count++;
                        }
                    }
                    printf("So %d xuat hien %d lan trong mang.\n", value, count);
                }
                break;

            case 7:
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

            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
