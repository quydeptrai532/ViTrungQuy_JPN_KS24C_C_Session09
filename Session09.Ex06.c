#include <stdio.h>

int main() {
    int array[100][100], n, m, choice, i, j, total, product, maxSum, sum, rowIndex;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so dong (n): ");
                scanf("%d", &n);
                printf("Nhap so cot (m): ");
                scanf("%d", &m);

                printf("Nhap cac phan tu cua mang:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        printf("array[%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &array[i][j]);
                    }
                }
                break;

            case 2:
                if (n == 0 || m == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Gia tri cac phan tu cua mang theo ma tran:\n");
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < m; j++) {
                            printf("%d ", array[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;

            case 3:
                if (n == 0 || m == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    total = 0;
                    printf("Gia tri cac phan tu la le: ");
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < m; j++) {
                            if (array[i][j] % 2 != 0) {
                                printf("%d ", array[i][j]);
                                total += array[i][j];
                            }
                        }
                    }
                    printf("\nTong cac phan tu la le: %d\n", total);
                }
                break;

            case 4:
                if (n == 0 || m == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    product = 1;
                    printf("Gia tri cac phan tu nam tren duong bien: ");
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < m; j++) {
                            // In các ph?n t? trên biên
                            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                                printf("%d ", array[i][j]);
                                product *= array[i][j];
                            }
                        }
                    }
                    printf("\nTich cac phan tu nam tren duong bien: %d\n", product);
                }
                break;

            case 5:
                if (n == 0 || m == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Gia tri cac phan tu nam tren duong cheo chinh: ");
                    for (i = 0; i < n && i < m; i++) {
                        printf("%d ", array[i][i]);
                    }
                    printf("\n");
                }
                break;

            case 6:
                if (n == 0 || m == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    printf("Gia tri cac phan tu nam tren duong cheo phu: ");
                    for (i = 0; i < n && i < m; i++) {
                        printf("%d ", array[i][m - 1 - i]);
                    }
                    printf("\n");
                }
                break;

            case 7:
                if (n == 0 || m == 0) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    maxSum = -1;
                    rowIndex = -1;
                    for (i = 0; i < n; i++) {
                        sum = 0;
                        for (j = 0; j < m; j++) {
                            sum += array[i][j];
                        }
                        if (sum > maxSum) {
                            maxSum = sum;
                            rowIndex = i;
                        }
                    }
                    printf("Dong co tong gia tri cac phan tu la lon nhat: ");
                    for (j = 0; j < m; j++) {
                        printf("%d ", array[rowIndex][j]);
                    }
                    printf("\nTong gia tri cua dong la: %d\n", maxSum);
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
