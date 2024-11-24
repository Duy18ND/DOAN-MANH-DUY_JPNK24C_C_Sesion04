#include <stdio.h>

int main() {
    int a, b, c, gan_gia_tri;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    if (a > b) {
        gan_gia_tri = a;
        a = b;
        b = gan_gia_tri;
    }
    if (a > c) {
        gan_gia_tri = a;
        a = c;
        c = gan_gia_tri;
    }
    if (b > c) {
        gan_gia_tri = b;
        b = c;
        c = gan_gia_tri;
    }

    printf("sap xep so tu be den lon la: : %d, %d, %d", a, b, c);

    return 0;
}

