#include <stdio.h>
#include <stdlib.h>



int main() {
	int note,choix;
	printf("QA-Lequel des langages suivants est mieux adapté au programmation structuré?\n1-PASCAL\n2-PROLOG\nEntrez votre choix: ");
	scanf("%d",&choix);

	if(choix==2){
		printf("bravoooo\n");
		note++;
	}else{
		printf("incorrect!!!!\n");
	}
    printf("Q2-Lequel des langages informatiques suivants est utilisé pour l’intelligence artificielle?\n\n1-C\n2-COBOL\nEntrez votre choix: ");
	scanf("%d",&choix);
	if(choix==1){
		printf("bravo\n");
		note++;
	}else{
		printf("incorrect\n");
	}
	printf("Q3-Le cerveau de tout système informatique est _________?\n1-CPu\n2-Mémoire\nEntrez votre choix: ");
	scanf("%d",&choix);
	if(choix==1){
		printf("bravo\n");
		note++;
	}else{
		printf("incorrect\n");
	}
	printf("la note est: %d",note);
	return 0;
}
