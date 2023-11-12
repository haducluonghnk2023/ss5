#include <stdio.h>

int main() {
    int soPhutSuDung;
    float cuocDienThoai;
    int phithuebao = 25.000;
    printf("nhap so phut su dung :");
    scanf("%d",&soPhutSuDung);
    if (soPhutSuDung <= 50) {
        cuocDienThoai += soPhutSuDung * 600.0;
    } else if (soPhutSuDung <= 200) {
        cuocDienThoai += 50 * 600.0 + (soPhutSuDung - 50) * 400.0;
    } else if (soPhutSuDung <= 400) {
        cuocDienThoai += 50 * 600.0 + 150 * 400.0 + (soPhutSuDung - 200) * 200.0;
    } else {
        cuocDienThoai += 50 * 600.0 + 150 * 400.0 + 200 * 200.0 + (soPhutSuDung - 400) * 100.0;
    }

   
    printf("Cuoc dien thoai cho %d phut su dung la: %.2f VND\n", soPhutSuDung, cuocDienThoai);

    return 0;
}
