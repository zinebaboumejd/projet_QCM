#include <stdio.h>
#include <stdlib.h>



int main() {
	int note,choix,x,i=0;
	printf("QA-Lequel des langages suivants est mieux adapté au programmation structuré?\n1-PASCAL\n2-PROLOG\n-3- PL/SQL\nEntrez votre choix: ");
	scanf("%d",&choix);

	if(choix==2){
		printf("bravoooo\n");
		note+=4;
	}else{
		
		while(choix!=2){
			note-=2;
				printf("incorrect!!!!\n");  
			printf("Entrez la bonne repponce\n");
			scanf("%d",&choix);
			
			
		}
		printf("bravoooo\n");	
	}
		printf(" la valeur de note est %d\n",note);
//	printf(" la valeur de note est %d\n",note);

	
    printf("Q2-Lequel des langages informatiques suivants est utilisé pour l’intelligence artificielle?\n\n1-C\n2-COBOL\nEntrez votre choix: ");
	scanf("%d",&choix);
	if(choix==1){
		printf("bravo\n");
		note+=4;
	}else{
			
		while(choix!=1){
			note-=2;
			printf("incorrect!!!!\n");
			printf("Entrez la bonne repponce\n");
			scanf("%d",&choix);
				
			
		}
		printf("bravoooo\n");	
		
	}
	printf(" la valeur de note est %d\n",note);
		
	printf("Q3-Le cerveau de tout système informatique est _________?\n1-CPu\n2-Mémoire\nEntrez votre choix: ");
	scanf("%d",&choix);
	if(choix==1){
		printf("bravo\n");
		note+=4;
	}else{
			
		while(choix!=1){
			printf("incorrect!!!!\n");
			note-=2;
			printf("Entrez la bonne repponce\n");
			scanf("%d",&choix);
				
			
		}
		printf("bravoooo\n");	
		
	}
if(note<=0){
printf(" la note et 0\n");	
}
else
printf(" la valeur de note est %d\n",note);
	return 0;
}
