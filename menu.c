#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void Menu(void){
  printf("============MENU===========\n  [1] Hamburguers\n  [2] Bebidas\n  [3] Valor da compra\n  [4] Fechar pedido\n >>>>>Qual sua escolha?<<<<<\n ");
}

void Menu_hamb(void){
	printf("=========Hamburguers========\n  [1] X-Picanha -- 10.50 R$\n  [2] X-Bacon -- 9.50 R$\n  [3] X-Tudo --12.50 R$\n  [4] Voltar\n >>>>>Qual sua escolha?<<<<<\n");
}

void Menu_bebi(void){
	printf("=========Bebidas========\n  [1] Coca Cola -- 6.50 R$\n  [2] Guaraná -- 5.50 R$\n  [3] Suco --3.00 R$\n  [4] Voltar\n >>>>>Qual sua escolha?<<<<<\n");
}

int main(){
  int opcao, preco_hamb, preco_bebi,opcao_hamb, opcao_bebi,aux=0;
  float valor_total=0;
 	
  while(opcao!=4){
  	system("clear");
  	Menu();
	aux=0;
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:

      system("clear");

      while(aux==0){

      Menu_hamb();
      scanf("%d", &opcao_hamb);

	      if(opcao_hamb==1)
	      {
	      	valor_total=valor_total+10.50;
	      	aux=1;
	      }
	      else if(opcao_hamb==2)
	      {
	      	valor_total=valor_total+9.50;
	      	aux=1;
	      }
	      else if(opcao_hamb==3)
	      {
	      	valor_total=valor_total+12.50;
	      	aux=1;
	      }
	      else
	      {
	      	aux=1;
	      }
      }
      sleep(0.5);
      break;
      case 2:
      system("clear");

      while(aux==0)
      {
      Menu_bebi();
	  scanf("%d", &opcao_bebi);
	      if(opcao_bebi==1){
	      	valor_total=valor_total+6.50;
	      	aux=1;
	      }
	      else if(opcao_bebi==2){
	      	valor_total=valor_total+5.50;
	      	aux=1;
	      }
	      else if(opcao_bebi==3){
	      	valor_total=valor_total+3.0;
	      	aux=1;
	      }
	      else{
	      	aux=1;
	      }
 	 }
 	 sleep(0.5);
      break;

      case 3:
      system("clear");
      while(aux==0){
      printf(">>>>>>>>Valor total: %.2f<<<<<<<<\n", valor_total);
     	sleep(3);
     	aux=1;
     }
      break;
      case 4:
      printf(">>>>Pedido realizado com sucesso<<<<\n");
      sleep(0.5);
      break;
    }
  }




return 0;
}
