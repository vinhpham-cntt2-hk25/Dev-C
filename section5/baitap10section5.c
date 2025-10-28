#include <stdio.h>

int main() {
    float soKWh, tienBacThang = 0, phuPhi, tienDien;
    int loaiHo;

    // Nh?p d? li?u
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soKWh);
    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loaiHo);

    // Tính ti?n theo b?c thang luy ti?n
    if (soKWh <= 50)
        tienBacThang = soKWh * 1500;
    else if (soKWh <= 100)
        tienBacThang = 50 * 1500 + (soKWh - 50) * 2000;
    else if (soKWh <= 200)
        tienBacThang = 50 * 1500 + 50 * 2000 + (soKWh - 100) * 2500;
    else
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soKWh - 200) * 3000;

    // Tính ph? phí theo lo?i h? tiêu dùng
    switch (loaiHo) {
        case 1:
            phuPhi = tienBacThang * 0.05;
            break;
        case 2:
            phuPhi = tienBacThang * 0.10;
            break;
        case 3:
            phuPhi = tienBacThang * 0.08;
            break;
        default:
            printf("Loai ho khong hop le!\n");
            return 0;
    }

    // T?ng ti?n di?n
    tienDien = tienBacThang + phuPhi;

    // Xu?t k?t qu?
    printf("\nTien bac thang: %.2f VND", tienBacThang);
    printf("\nPhu phi: %.2f VND", phuPhi);
    printf("\n==> Tong tien dien phai tra: %.2f VND\n", tienDien);

    return 0;
}
