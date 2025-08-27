#include <stdio.h>
#include <stdlib.h>

struct Cliente {
    char nome[100];
    char email[100];
};


int main() {
    struct Cliente clientes[100];
    int opcao, numClientes = 0;
    
    do {
        printf("====================================\n");
        printf("   --- CADASTRO DE CLIENTES --- \n");
        printf("====================================\n");
        printf("sELECIONE UMA OPCAO:\n");
        printf("1 - Adicionar Cliente\n");
        printf("2 - Visualizar Cliestes Cadastrados\n");
        printf("3 - Editar Clientes\n");
        printf("4 - Excluir Clientes\n");
        printf("5 - Sair\n");
        printf("------------------------------------\n");

        scanf("%d", &opcao);

        switch (opcao){
            case 1: {
                printf("Digite o nome do cliente: \n");
                scanf("%s", clientes[numClientes].nome);

                printf("Digite o email do cliente: \n");
                scanf("%s", clientes[numClientes].email);

                numClientes++;

                printf("Cliente adicionado com sucesso.\n");
                break;
            }
            case 2:{
                printf("Clientes cadastrados:\n");

                for (int i = 0; i < numClientes; i++) {
                    printf("Nome: %s\n", clientes[i].nome);
                    printf("Email: %s\n", clientes[i].email);
                    printf("---------------------------------\n");
                }
            break;
            }
            case 3: {
                char nome[100];

                printf("Digite o nome do cliente que deseja editar: \n");
                scanf("%s", nome);

                for (int i = 0; i < numClientes; i++) {
                    if (strcmp(clientes[i].nome, nome) == 0) {
                        printf("Digite o novo nome do cliente: \n");
                        scanf("%s", clientes[i].nome);

                        printf("Digite o novo email do cliente: \n");
                        scanf("%s", clientes[i].email);

                        printf("Dasdos editados com sucesso.\n");
                        break;
                    }
                }
                break;
            }
            case 4: {
                char nome[100];

                printf("Digite o nome do cliente do que deseja excluir: \n");
                scanf("%s", nome);

                for (int i = 0; i < numClientes; i++) {
                    if(strcmp(clientes[i].nome, nome) == 0) {
                        for (int j = i; j < numClientes - 1; j++) {
                            clientes[j] = clientes[j + 1];
                        }

                        numClientes--;

                        printf("Cliente excluido com sucesso.\n");
                        break;
                    }
                }
                break;
            }
            case 5:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao !=5 );
    
    return 0;
}
