#include <stdio.h>

int main(void) {
  char programa;

  printf("Escolha o programa de lavagem:\n x (Secar)\n y (Enxaguar e Secar)\n z (Lavar, Enxaguar e secar)\n S (Stop) para encerrar:");
  
  programa = getchar();
  getchar();

  int quantidade_Secar = 0;
  int quantidade_Enxaguar = 0;
  int quantidade_Lavar = 0;

  while( programa != 's' ) {
    switch (programa) {
      case 'z':
	quantidade_Lavar++;
	printf("Lavando...\n");
      case 'y': 
    quantidade_Enxaguar++;
    printf("Enxaguando...\n");
      case 'x':
	quantidade_Secar++;
	printf("Secando...\n");
    }


  printf("Escolha o programa de lavagem:\n x (Secar)\n y (Enxaguar e Secar)\n z (Lavar, Enxaguar e secar)\n S (Stop) para encerrar:");
    programa = getchar();
    getchar();
  }

  printf("Secagens: %d Enxágues: %d Lavagens: %d", quantidade_Secar, quantidade_Enxaguar, quantidade_Lavar);
  return 0;
}
