#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);

	printf("\n%d e maior do que 10 ?\n", num);
	if(num>10){
	printf("1");
	}else{
	printf("0");}
	
	printf("\n%d e maior ou igual do que 10 ?\n", num);
	if(num>=10){
	printf("1");
	}else{
	printf("0");}
	
	printf("\n%d e menor do que 10 ?\n", num);
	if(num<10){
	printf("1");
	}else{
	printf("0");}
	
	printf("\n%d e menor ou igual do que 10 ?\n", num);
	if(num<=10){
	printf("1");
	}else{
	printf("0");}
	
	printf("\n%d e igual a 10 ?\n", num);
    if(num==10){
	printf("1");
	}else{
	printf("0");}
	
	printf("\n%d e diferente do que 10 ?\n", num);
	if(num!=10){
   printf("1");
	}else{
	printf("0");}	
	
	system("pause");
	
	return  0;
}











