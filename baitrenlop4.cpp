#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int taikhoan;
	int matkhau;
	int sodu=10000;
	int	ruttien,luachon;
	char tieptuc;
	
	printf ("nhap ma so the cua ban: ");
	scanf ("%d",&taikhoan);
	printf("mat khau: ");
	scanf ("%d",&matkhau);
	if (taikhoan==3 && matkhau==4);
	{
	do {
		
		printf("dang nhap thanh cong!");
		printf ("\n1.rut tien\n2.kiem tra so du tai khoan\n");
		scanf ("%d",&luachon);
		switch ( luachon ) 
		{	case 1:
			printf ("nhap so tien ma ban muon rut: ");
			scanf ("%d",&ruttien);
			sodu-=ruttien;
			printf ("ban da rut %d tu tai khoan\n",ruttien);
			if (ruttien>sodu)
			printf ("so du tai khoan cua ban khong du tien\n");
			break;
			
			case 2:
			printf ("so du tai khoan cua ban la: %d\n",sodu);
			break;
				
		}
		
		printf ("ban co muon tiep tuc rut tien!\n");
		scanf ("%s",tieptuc);
	}while (tieptuc!='y');
}
	return 0;
}
