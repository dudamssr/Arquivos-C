#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao, escolha;
	int pratosPrincipais = 0, sobremesaPedida = 0, bebidaPedida = 0;
	float total = 0;

	do {
		printf("\n--== Bem-vindo ao Sabor & Arte ==--\n");
		printf("1 - Pratos Principais\n");
		printf("2 - Lanches e Petiscos\n");
		printf("3 - Sobremesas\n");
		printf("4 - Bebidas\n");
		printf("5 - Finalizar Pedido\n");
		printf("Selecione uma opção: ");
		scanf("%d", &opcao);
		getchar();

		switch (opcao) {
		
		case 1:
			printf("\nPratos Principais:\n");
			printf("1 - Filé de frango - R$ 25,00\n");
			printf("2 - Bife à cavalo - R$ 30,00\n");
			printf("3 - Massa ao molho branco - R$ 22,00\n");
			printf("Escolha um prato: ");
			scanf("%d", &escolha);
			if (escolha == 1) {
				total += 25.00;
				pratosPrincipais++;
			} else if (escolha == 2) {
				total += 30.00;
				pratosPrincipais++;
			} else if (escolha == 3) {
				total += 22.00;
				pratosPrincipais++;
			} else {
				printf("Opção inválida!\n");
			}
			break;
		
		case 2:
			printf("\nLanches e Petiscos:\n");
			printf("1 - Hambúrguer artesanal - R$ 18,00\n");
			printf("2 - Batata frita - R$ 12,00\n");
			printf("3 - Nuggets - R$ 15,00\n");
			printf("Escolha um lanche: ");
			scanf("%d", &escolha);
			if (escolha == 1) total += 18.00;
			else if (escolha == 2) total += 12.00;
			else if (escolha == 3) total += 15.00;
			else printf("Opção inválida!\n");
			break;
		
		case 3:
			printf("\nSobremesas:\n");
			printf("1 - Pudim - R$ 10,00\n");
			printf("2 - Brownie - R$ 12,00\n");
			printf("3 - Sorvete - R$ 8,00\n");
			printf("Escolha uma sobremesa: ");
			scanf("%d", &escolha);
			if (escolha == 1) {
				total += 10.00;
				sobremesaPedida = 1;
			} else if (escolha == 2) {
				total += 12.00;
				sobremesaPedida = 1;
			} else if (escolha == 3) {
				total += 8.00;
				sobremesaPedida = 1;
			} else {
				printf("Opção inválida!\n");
			}
			break;
		
		case 4:
			printf("\nBebidas:\n");
			printf("1 - Suco natural - R$ 7,00\n");
			printf("2 - Refrigerante - R$ 6,00\n");
			printf("3 - Café - R$ 5,00\n");
			printf("Escolha uma bebida: ");
			scanf("%d", &escolha);
			if (escolha == 1) {
				total += 7.00;
				bebidaPedida = 1;
			} else if (escolha == 2) {
				total += 6.00;
				bebidaPedida = 1;
			} else if (escolha == 3) {
				total += 5.00;
				bebidaPedida = 1;
			} else {
				printf("Opção inválida!\n");
			}
			break;
		
		case 5:
            printf("\nPedido finalizado!\n");
            float desconto = 0;
            float totalComDesconto = total;
            if (pratosPrincipais >= 3) {
            desconto += total * 0.10;
            if (sobremesaPedida && bebidaPedida) {
            desconto += total * 0.05;
        }
    }
            totalComDesconto -= desconto;
            printf("Subtotal: R$ %.2f\n", total);
            printf("Desconto aplicado: R$ %.2f\n", desconto);
            printf("Total a pagar: R$ %.2f\n", totalComDesconto);
            printf("Até mais!\n");
        break;
        default:
        break;
		}
	}while(opcao != 0);
	
}


    
	
			
			
			
			
			
			
			
			
			