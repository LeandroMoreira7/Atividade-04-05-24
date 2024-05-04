#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "Portuguese");

float numero1;
float numero2;
float resultado;
int operação;
int escolha=1;

while(escolha==1){
printf(" Por favor fale sua opção\n 1=Soma\n 2=Divisão\n 3= Multiplicação\n 4=Subtração\n");
scanf("%d", &operação);

switch (operação)

{

case 1:
printf("Coloque o primeiro numero\n");
scanf("%f", &numero1);
printf("Coloque o secundo numero\n");
scanf("%f", &numero2);
resultado= numero1+numero2;
printf(" o resultado é %f\n", resultado);
break;

while(numero2==0) {
case 2:
printf("Coloque o primeiro numero\n");
scanf("%f", &numero1);
printf("Coloque o secundo numero\n");
scanf("%f", &numero2);
resultado= numero1/numero2;
printf(" o resultado é %f\n", resultado);}
break;


case 3:
printf("Coloque o primeiro numero\n");
scanf("%f", &numero1);
printf("Coloque o secundo numero\n");
scanf("%f", &numero2);
resultado= numero1*numero2;
printf(" o resultado é %f\n", resultado);
break;

case 4:
printf("Coloque o primeiro numero\n");
scanf("%f", &numero1);
printf("Coloque o secundo numero\n");
scanf("%f", &numero2);
resultado= numero1-numero2;
printf(" o resultado é %f\n", resultado);
break;

default:
printf("Coloque um valor válido\n");
}

printf("deseja continuar? 1= sim ou 2=não\n");
scanf("%d", &escolha);
}
return 0;

}