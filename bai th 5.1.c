#include <stdio.h>
#include <math.h>
void giaiphuongtrinh(float a, float b, float c){
	float delta=b*b -4*a*c;
	float x1,x2;
	
	if (delta==0){
		x1=x2= -b/(2*a);
		printf("phuong trinh co nghiem kep :");
		scanf("x1= %.2f",x1);
		}else if(delta>0){
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			printf("phuong trinh co 2 nghiem :\n");
			printf(" x1 = %.2f\n", x1);
			printf(" x2 = %.2f\n", x2);
			}else {
				printf("phuong trinh vo nghiem ");
				}
				}
			


int main() {
	float a,b,c;
	printf("nhap a :");
	scanf("%f",&a);
	printf("nhap b :");
	scanf("%f",&b);
	printf("nhap c :");
	scanf("%f",&c);
	
	giaiphuongtrinh(a, b, c);
	return 0;
		}
	

