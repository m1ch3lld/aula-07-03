#include <stdio.h>

float MediaDoAluno(float no1, float no2){
	float media = (no1 + no2) / 2 
	if media (<= 7 ){
	 printf("Passou de ano: ")
	}else {
		printf("Reprovou de ano")
	}
	return media;
}
	
	int main (){
		
		float nota1, nota2, media
		
		printf("Digite a primeira nota do aluno: ");
		scanf("%f", &nota1);
		
		printf("Digite a segunda nota do aluno: ");
		scanf("%f", &nota2) ;
		
		media MediaDoAluno(nota1, nota2);
		
		printf("===Resultados===\n");
		printf("Primeira nota: %.1f", nota1);
		printf("Segunda nota: %.1f", nota2);
		printf("media: %.1f", media);
		
		return 0
		
}
