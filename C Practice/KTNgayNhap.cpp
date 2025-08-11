#include <stdio.h>

int main() {
    int d, m, y;
    int isLeap, isValid;

    do {
        isValid = 1; // Gi? s? ban d?u là h?p l?

        // Nh?p ngày, tháng, nam
        printf("Hay nhap vao ngay: ");
        scanf("%d", &d);

        printf("Hay nhap vao thang: ");
        scanf("%d", &m);

        printf("Hay nhap vao nam: ");
        scanf("%d", &y);

        // Ki?m tra tháng h?p l?
        if (m < 1 || m > 12) {
            printf("? Loi: Thang khong hop le. Vui long nhap tu 1 den 12.\n");
            isValid = 0;
        }

        // Ki?m tra nam h?p l?
        if (y < 1) {
            printf("? Loi: Nam khong hop le. Phai lon hon 0.\n");
            isValid = 0;
        }

        // Ki?m tra nam nhu?n
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            isLeap = 1;
        } else {
            isLeap = 0;
        }

        // Ki?m tra ngày h?p l? theo tháng
        int maxDay;

        if (m == 2) {
            maxDay = isLeap ? 29 : 28;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            maxDay = 30;
        } else {
            maxDay = 31;
        }

        if (d < 1 || d > maxDay) {
            printf("? Loi: Ngay khong hop le voi thang %d. Thang nay chi co toi da %d ngay.\n", m, maxDay);
            isValid = 0;
        }

        if (!isValid) {
            printf("?? Vui long nhap lai!\n\n");
        }

    } while (!isValid);

    printf("\n? Ngay thang nam da nhap la: %02d/%02d/%04d\n", d, m, y);
    return 0;
}

