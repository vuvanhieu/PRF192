//Nh?p tu?i, tình tr?ng di h?c d? xác d?nh lo?i vé (vé tr? em, vé h?c sinh, vé sinh viên, vé ngu?i l?n).
//
//Yêu c?u: 
//    + Tình tr?ng là 1 n?u còn di h?c, là 0 n?u ngu?c l?i.
//    + Vé tr? em khi tu?i nh? hon ho?c b?ng 12.
//    + Vé h?c sinh khi tu?i l?n hon 12 và tu?i nh? hon 18 
//    + Vé sinh viên khi tu?i l?n hon 18 và và di h?c
//    + Vé ngu?i l?n khi không ph?i tr? em, không ph?i h?c sinh, không ph?i sinh viên.
//    
//    Hãy in ra màn hình lo?i vé cho m?t ngu?i.

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
