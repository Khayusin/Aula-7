#include <stdio.h>

int main(void) {
  char produto;
printf("-----------------------\nSuco: R$9,00\nBatata: R$10,00\nHamburguer: R$15,00\nCombos: R$30,00\n-----------------------\n");

  printf("Qual produto foi vendido?;\n s (suco)\n b (batata)\n h (hamburguer)\n c (Combo)\r r (relatório): ");
    produto = getchar();
    getchar();

return 0;
}

  int quantidade_Suco = 0;
  int valor_Suco = quantidade-suco*9;
  int quantidade_Batata = 0;
  int valor_batata = quantidade_Batata*10;
  int quantidadeG_Hamburguer = 0;
  int valor_Hambuguer = quantidadeG_Hamburguer*15;
  int quantidade_Combo = 0;
  int valor_combo = quantidade_Combo*30;
  int total = 0;
  

  while( produto != 'r' ) {
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
    }

printf("Qual produto foi vendido?;\n s (suco)\n b (batata)\n h (hamburguer)\n c (Combo)\r r (relatório): ");;
    produto = getchar();
    getchar();
  }

    int itens = quantidade_Suco+quantidade_Batata+quantidade_Hamburguer+quantidade_Combo
    int valor_total = valor_Suco+valor_batata+valor_Hambuguer+valor_combo
    
  printf("-----------------------\nSuco: "%d" vendidos\nBatata: "%d" vendidos\nHamburguer: "%d" vendidos\nCombos: "%d" vendidos\n-----------------------\nTotal: "%d" Itens\n Valor total: R$"%d",00", quantidade_Suco, quantidade_Batata, quantidade_Hamburguer, quantidade_Combo, itens, valor_total);
  return 0;
}