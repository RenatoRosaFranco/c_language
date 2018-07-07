# include <stdio.h>

int main(){
  printf("************************************\n");
  printf("* Bem vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

	int numerosecreto, chute;
	numerosecreto = 42;

	printf("Qual é o seu chute? \n");
	scanf("%d", &chute);	

	printf("Você chutou o numero %d \n", chute);
	printf("O numero secreto é %d \n", numerosecreto);
}