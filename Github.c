//Biblioteca 

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int reservado;
} Quarto;

Quarto quartos[10];
int totalQuartos = 10;


void inicializarQuartos();
void reservarQuarto();
void cancelarReserva();
void listarQuartos();
void pedirComida();
void finalizarfuncao();

int main() {
    int opcao;
    inicializarQuartos();

    do {
        printf("\n--== Hotel Massaro ==--\n");
        printf("1 - Reservar Quarto\n");
        printf("2 - Cancelar Reserva\n");
        printf("3 - Listar Quartos\n");
        printf("4 - Pedir Comida\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            
            case 1:
            reservarQuarto();
            break;
            
            case 2:
            cancelarReserva();
            break;
            
            case 3:
            listarQuartos();
            break;
            
            case 4:
            pedirComida();
            break;
            
            case 0:
            printf("Saindo... Obrigado!!\n");
            break;
            
            default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}

void inicializarQuartos() {
    for (int i = 0; i < totalQuartos; i++) {
        quartos[i].id = i + 1;
        quartos[i].reservado = 0;
    }
}

void reservarQuarto() {
    int numero;
    printf("\nDigite o número do quarto para reservar (1-%d): ", totalQuartos);
    scanf("%d", &numero);

    if (numero < 1 || numero > totalQuartos) 
    {
    printf("Quarto inválido!\n");
    } 
    else if (quartos[numero - 1].reservado)
    {
    printf("O quarto %d já está reservado!\n", numero);
    }
    else 
    {
    quartos[numero - 1].reservado = 1;
    printf("Reserva realizada para o quarto %d!\n", numero);
    }

    finalizarfuncao();
}

void cancelarReserva() {
    int numero;
    printf("Digite o número do quarto para cancelar a reserva: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > totalQuartos) 
    {
    printf("Quarto inválido!\n");
    } 
    else if (!quartos[numero - 1].reservado)
    {
    printf("O quarto %d não está reservado!\n", numero);
    }
    else
    {
    quartos[numero - 1].reservado = 0;
    printf("Reserva do quarto %d foi cancelada!\n", numero);
    }

    finalizarfuncao();
}

void listarQuartos() {
    printf("\n--== Listar Quartos ==--\n");

    for (int i = 0; i < totalQuartos; i++)
    {
    printf("Quarto %d - %d\n", quartos[i].id, quartos[i].reservado);
    }

    finalizarfuncao();
}
void pedirComida() {
    int comida;
    printf("\n--== Cardápio de Comidas ==--\n");
    printf("Escolha o que deseja pedir!\n");
    printf("1 - Salada Caesar\n");
    printf("2 - Tábua de Frios\n");
    printf("3 - Filé ao Molho Madeira\n");
    printf("4 - Lasanha Bolonhesa\n");
    printf("5 - Água\n");
    printf("6 - Sucos\n");

    printf("Digite o número do item desejado: ");
    scanf("%d", &comida);

    if (comida < 1 || comida > 6) 
    {
    printf("Opção inválida!!\n");
    } 
    else 
    {
    printf("Você pediu:\n");
    switch (comida) {
            
            case 1:
            printf("Salada Caesar\n");
            break;
            
            case 2:
            printf("Tábua de Frios\n");
            break;
            
            case 3:
            printf("Filé ao Molho Madeira\n");
            break;
            
            case 4:
            printf("Lasanha Bolonhesa\n");
            break;
            
            case 5:
            printf("Água\n");
            break;
            
            case 6:
            printf("Suco\n");
            break;
        }
        printf("Pedido feito!!\n");
    }

    finalizarfuncao();
}

void finalizarfuncao() {
    system("Clear");
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
    
}
