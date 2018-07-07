# include <stdio.h>
# define NUMERO_DE_TENTATIVAS 3

int main(){
  printf("************************************\n");
  printf("* Bem vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

	int numerosecreto, chute;
	numerosecreto = 42;

	for(int i= 0; i <= NUMERO_DE_TENTATIVAS; i++){
		printf("Qual é o seu chute? \n");
		scanf("%d", &chute);	

		printf("Você chutou o numero %d \n", chute);
		
		int acertou = chute == numerosecreto;

		if (acertou){
			printf("Parabéns você acertou!\n");
			printf("Jogue denovo, você é um bom jogador!\n");
			break;
		}
		else {

			// se o numero for maior
			int maior = chute > numerosecreto;
			if (maior) {
				printf("Seu chute foi maior que o numero secreto!\n");
			}
			else {	
				printf("Seu chute foi menor do que o numero secreto!\n");
			}
			printf("Mas não desanime, tente denovo!\n");
		}
	}
	printf("Fim de jogo!\n");
}