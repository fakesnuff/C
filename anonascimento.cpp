#include <stdio.h>
#include <windows.h>
#include <time.h>

int main(){
	
	char nome[30];
	double altura;
	int idade, anonas;
	int time;
	
	
	printf("Infome seu nome: \n");
	scanf("%s", &nome);
	printf("Informe sua altura: \n");
	scanf("%lf", &altura);
	printf("Informe sua idade \n");	
	scanf("%d", &idade);
	
	SYSTEMTIME t;
	GetLocalTime(&t);
	
	time_t now = time(0); // Get the system time	
	
	printf("%i ",&t);
	printf("%s \n", nome);
	printf("%lf \n", altura);
	printf("%i \n", idade);
	/* printf("%i \n", &anoanas); */
	
	return(0);
}
