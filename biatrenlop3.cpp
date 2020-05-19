#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int bacsuu,nau,den,cappuchino,tongtien=0,choice=1;
char tuychon;
tuychon=' ';
bacsuu=25000;
nau=2000;
den=2000;
cappuchino=30000;
printf ("=======MENU=========\n");
printf("1.bac suu: \t25000\n");
printf ("2.nau: \t\t20000\n");
printf("3.den: \t\t20000\n");
printf("4.cappuchino: \t30000\n");
	
do {
	printf("nhap so do uong: \n");
	scanf ("%d",&choice);
if (choice>=1 &&choice<=4)
{		printf ("do uong cua ban: \n");
		switch (choice)
	{
		case 1:
		printf("da order nau");
		tongtien+=nau;
		break;
		
		case 2:
		printf ("da order bac suu");
		tongtien+=bacsuu;
		break;
		
		case 3:
		printf ("da order ca phe den");
		tongtien+=den;
		break;
		
		case 4:
		printf ("da order cappuchino");
		tongtien+=cappuchino;
		break;
		
			}	
}

}while (choice!=4);
printf ("\ntong tien: %d\n",tongtien);

printf ("\nCAM ON VA HEN GAP LAI\n ");

	return 0;
	
}
