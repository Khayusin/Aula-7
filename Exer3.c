#include <stdio.h>

int main(void) {
  char programa;

  printf("Escolha o programa de lavagem:\n x (Secar)\n y (Enxaguar e Secar)\n z (Lavar, Enxaguar e secar)\n S (Stop) para encerrar:");
  
  programa = getchar();
  getchar();

  int quantidade_Secar = 0;
  int quantidade_Enxaguar = 0;
  int quantidadeG_Lavar = 0;

  while( programa != 's' ) {
    switch (programa) {
      case 'x':
	quantidade_Secar++;
	break;
      case 'y': 
    quantidade_Enxaguar++;  
    quantidade_Secar++;  
	break;
      case 'z':
	quantidadeG_Lavar++;
	quantidade_Enxaguar++;
	quantidade_Secar++;
	break;
    }

  printf("Escolha o programa de lavagem:\n x (Secar)\n y (Enxaguar e Secar)\n z (Lavar, Enxaguar e secar)\n S (Stop) para encerrar:");
    programa = getchar();
    getchar();
  }

  printf("Secagens: %d Enxágues: %d Lavagens: %d", quantidade_Secar, quantidade_Enxaguar, quantidadeG_Lavar);
  return 0;
}