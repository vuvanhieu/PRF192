//Nh?p tu?i, t�nh tr?ng di h?c d? x�c d?nh lo?i v� (v� tr? em, v� h?c sinh, v� sinh vi�n, v� ngu?i l?n).
//
//Y�u c?u: 
//    + T�nh tr?ng l� 1 n?u c�n di h?c, l� 0 n?u ngu?c l?i.
//    + V� tr? em khi tu?i nh? hon ho?c b?ng 12.
//    + V� h?c sinh khi tu?i l?n hon 12 v� tu?i nh? hon 18 
//    + V� sinh vi�n khi tu?i l?n hon 18 v� v� di h?c
//    + V� ngu?i l?n khi kh�ng ph?i tr? em, kh�ng ph?i h?c sinh, kh�ng ph?i sinh vi�n.
//    
//    H�y in ra m�n h�nh lo?i v� cho m?t ngu?i.

#include<stdio.h>
int main(){
	int tuoi, statusStudy, ve_tre_em, ve_hoc_sinh, ve_sinh_vien, ve_nguoi_lon;
	
	printf("Nhap so tuoi:"); scanf("%d", &tuoi);
	printf("Nhap tinh trang hoc:"); scanf("%d", &statusStudy);
	

	
	ve_tre_em = tuoi <=12;
	ve_hoc_sinh = tuoi > 12 && tuoi < 18;
	ve_sinh_vien = tuoi > 18 && statusStudy == 1; 
	ve_nguoi_lon = !ve_tre_em && !ve_hoc_sinh && !ve_sinh_vien;
	
	printf("Loai ve cua ban \n");
	printf("Ve tre em: %d\n", ve_tre_em);
	printf("Ve hoc sinh: %d\n", ve_hoc_sinh);
	printf("Ve sinh vien: %d\n", ve_sinh_vien);
	printf("Ve nguoi lon: %d\n", ve_nguoi_lon);
	
	return 0;
}
