#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int saat;
	float ucret, toplam_ucret;
	char bas_harf;
	printf("�al��an�n ba� harfini giriniz> ");
	scanf("%c",&bas_harf);
	printf("�al��ma saatini giriniz> ");
	scanf("%d",&saat);
	printf("Saat �cretini giriniz> ");
	scanf("%f",&ucret);
	toplam_ucret = saat * ucret;
	printf("%c ba�harfli �al��an�n, alaca�� �cret: %f\n",bas_harf,toplam_ucret);
	getchar();
	return 0;
}
