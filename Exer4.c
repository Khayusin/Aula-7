#include <stdio.h>

int main(void) {
    char produto;
    int quantidade_Suco = 0;
    int quantidade_Batata = 0;
    int quantidade_Hamburguer = 0;
    int quantidade_Combo = 0;
    int total_itens = 0;
    int valor_total = 0;

    printf("-----------------------\n");
    printf("Suco: R$9,00\n");
    printf("Batata: R$10,00\n");
    printf("Hamburguer: R$15,00\n");
    printf("Combos: R$30,00\n");
    printf("-----------------------\n");

    while(1) {
        printf("Qual produto foi vendido?\n");
        printf("s (suco)\n");
        printf("b (batata)\n");
        printf("h (hamburguer)\n");
        printf("c (Combo)\n");
        printf("r (relatório): ");
        
        produto = getchar();
        getchar(); // Para consumir o caractere de nova linha
        
        if (produto == 'r') {
            break;
        }

        switch (produto) {
            case 's':
                quantidade_Suco++;
                break;
            case 'b': 
                quantidade_Batata++;  
                break;
            case 'h':
                quantidade_Hamburguer++;
                break;
            case 'c':
                quantidade_Combo++;
                break;
            default:
                printf("Opção inválida!\n");
                continue;
        }
    }

    total_itens = quantidade_Suco + quantidade_Batata + quantidade_Hamburguer + quantidade_Combo;
    valor_total = (quantidade_Suco * 9) + (quantidade_Batata * 10) + 
                  (quantidade_Hamburguer * 15) + (quantidade_Combo * 30);
    
    printf("-----------------------\n");
    printf("Suco:       %d vendidos\n", quantidade_Suco);
    printf("Batata:      %d vendidas\n", quantidade_Batata);
    printf("Hamburguer:  %d vendidos\n", quantidade_Hamburguer);
    printf("Combos:      %d vendidos\n", quantidade_Combo);
    printf("-----------------------\n");
    printf("Total:      %d itens\n", total_itens);
    printf("Valor total: R$ %d,00\n", valor_total);
    
    return 0;
}
