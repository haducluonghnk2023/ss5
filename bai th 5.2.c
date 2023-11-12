#include<stdio.h>
int main(){
	float doanhthu,hoahong;
	printf("nhap doanh thu ban hang cua dai ly (VND):");
	scanf("%f",&doanhthu);
	
	if (doanhthu<=100000000){
		hoahong= 0.05*  doanhthu;
	    
		
		}else if (doanhthu <=300000000){
			hoahong= 0.1* doanhthu;
			
		
			}else if(doanhthu>300000000){
				hoahong= 0.2* doanhthu; 
				}
				printf("hoa hong :%.2fVND \n",hoahong);
				
				
			
				return 0;
				}
				
