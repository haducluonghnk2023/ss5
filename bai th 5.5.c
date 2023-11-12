#include <stdio.h>

int main() {
    int ngay, thang;
    printf("Nhap ngay sinh: ");
    scanf("%d", &ngay);
    printf("Nhap thang sinh: ");
    scanf("%d", &thang);
    if ((thang == 3 && ngay >= 21) || (thang == 4 && ngay <= 19)) {
        printf("Cung Bach Duong (Aries)\n");
    } else if ((thang == 4 && ngay >= 20) || (thang == 5 && ngay <= 20)) {
        printf("Cung Kim Nguu (Taurus)\n");
    } else if ((thang == 5 && ngay >= 21) || (thang == 6 && ngay <= 20)) {
        printf("Cung Song Tu (Gemini)\n");
    } else if ((thang == 6 && ngay >= 21) || (thang == 7 && ngay <= 22)) {
        printf("Cung Cu Giai (Cancer)\n");
    } else if ((thang == 7 && ngay >= 23) || (thang == 8 && ngay <= 22)) {
        printf("Cung Su Tu (Leo)\n");
    } else if ((thang == 8 && ngay >= 23) || (thang == 9 && ngay <= 22)) {
        printf("Cung Xu Nu (Virgo)\n");
    } else if ((thang == 9 && ngay >= 23) || (thang == 10 && ngay <= 22)) {
        printf("Cung Thien Binh (Libra)\n");
    } else if ((thang == 10 && ngay >= 23) || (thang == 11 && ngay <= 21)) {
        printf("Cung Ho Cap (Scorpio)\n");
    } else if ((thang == 11 && ngay >= 22) || (thang == 12 && ngay <= 21)) {
        printf("Cung Nhan Ma (Sagittarius)\n");
    } else if ((thang == 12 && ngay >= 22) || (thang == 1 && ngay <= 19)) {
        printf("Cung Ma Ket (Capricorn)\n");
    } else if ((thang == 1 && ngay >= 20) || (thang == 2 && ngay <= 18)) {
        printf("Cung Bao Binh (Aquarius)\n");
    } else {
        printf("Cung Song Ngu (Pisces)\n");
    }

    return 0;
}

