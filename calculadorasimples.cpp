#include <stdio.h>


int main(){
	double numero1,numero2;
	char operador;
	printf("Informe o operador(+, -, *, /)");
	scanf("%c", &operador);
	printf("Informe os numeros a serem calculados");
	scanf("%lf %lf", &numero1, &numero2);
	
		switch (operador){
			
			case '+':
				printf("%.1lf + %.1lf = %.1lf", numero1, numero2, numero1 + numero2);
				break;
			case '-':
				printf("%.1lf - %.1lf =%.1lf", numero1, numero2, numero1 - numero2);
				break;
			case '/':
				printf("%.1lf / %.1lf = %.1lf", numero1, numero2, numero1 / numero2);
				break;
			case '*':
				printf("%.1lf * %.1lf = %.1lf", numero1, numero2, numero1 * numero2);
				break;
		}
	
	return(0);
	
	
	
}
