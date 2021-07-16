#include <stdio.h>
#include <stdlib.h>
#define TAM 200

struct projeto{
	int codigo, ano, stats;
    char titulo[20], desc[40], gerente[20];
	
	
	
};

int main(){
	
	struct projeto registro[TAM];
	struct projeto troca;
	int busca, i, j, acha, op;
	 
	op = 0;
	while (op !=5){
		printf("1 - Cadastrar Projeto\n");
		printf("2 - Apresentar projetos cadastrados \n");
		printf("3 - Pesquisar Projeto por código\n");
		printf("4 - Ordenar os projetos por ano\n");
		printf("5 - Sair\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &op);
		fflush(stdin);
		if (op == 1){
			system("cls");
			for (i=0; i<TAM; i++){
				printf("Digite o codigo do projeto da posicao %d:", i+1);
				scanf("%d", &registro[i].codigo);
				fflush(stdin);
				printf("Titulo do projeto: ") ;
			    scanf("%s", &registro[i].titulo);
			    fflush(stdin);
			    printf("Descricao do projeto: ") ;
			    scanf("%s", &registro[i].desc);
			    fflush(stdin);
			    printf("Status do projeto do projeto: ") ;
			    scanf("%i", &registro[i].stats);
			    fflush(stdin);
			    printf("Gerente do projeto: ") ;
			    scanf("%s", &registro[i].gerente);
			    fflush(stdin);
			    printf("Ano do Projeto: ") ;
			    scanf("%i", &registro[i].ano);
			    fflush(stdin);
			    
			return main();
			
			}
		}
		
		else{
			
			if (op == 2){
				
				system("cls");
				for(i=0;i<TAM; i++){
					
					
					printf("\n Codigo: %i \n", registro[i].codigo);
					printf("Titulo: %s\n", registro[i].titulo);
					printf("Descricao: %s\n", registro[i].desc);
					printf("Status: %i \n", registro[i].stats);
					printf("Gerente: %s \n", registro[i].gerente);
					printf("Ano: %s \n", registro[i].ano);
					
				}
			}
			else{
				if(op == 3){
					system("cls");
					printf("Digite o codigo que deseja buscar: ");
					scanf("%d", &busca);
					i = 0;
					acha = 0;
					while ((i < TAM) && (acha == 0)){
						if (registro[i].codigo == busca){
						
							acha = 1;
						}
						else{
							i++;
						}
						
					}
					if (acha == 1){
						printf("\n Codigo: %i \n", registro[i].codigo);
						printf("Titulo: %s\n", registro[i].titulo);
						printf("Descricao: %s\n", registro[i].desc);
						printf("Status: %i \n", registro[i].stats);
						printf("Gerente: %s \n", registro[i].gerente);
						printf("Ano: %s \n", registro[i].ano);
						
					}
					else
						printf("\n Registro nao encontrado");
					
				}
				else{
					
					if (op == 4){
						system("cls");
						for(i=0; i<TAM; i++){
							for(j=i+1;j<TAM;j++){
								if(registro[i].ano > registro[j].ano){
									troca = registro[i];
									registro[i] = registro[j];
									registro[j] = troca;
									
								}
								
							}
						}
						for(i=0;i<TAM;i++){
							printf("\n Codigo: %i, titulo: %s, Ano: %i \n\n", registro[i].codigo, registro[i].titulo, registro[i].ano);
							
						}
					}
					
				}
			}
		}
		
		
	}

    return(0);
}
