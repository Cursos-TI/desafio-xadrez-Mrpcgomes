#include <stdio.h>
int main() {

    int torre = 0;                //declarado a primeira variável (torre) e dado o valor inicial "0".     
    while (torre <5){             //condição para variável torre.
        printf ("direita\n");     //enquanto a condição para variável for verdadeira será impresso "direita".
        torre++;                  //incremento para variável, evitar loop infinito e rodar programa sem (bugs).
  
    }

for (int bispo = 0; bispo < 5; bispo++) { //declarado a segunda variável (bispo) e dado o valor inicial "0", condição para variável bispo e incremento para variável, evitar loop infinito e rodar programa sem (bugs).
printf ("Direita cima\n");              //enquanto a condição para variável for verdadeira será impresso "direita cima".
}                                         
    
int rainha = 0;                           //declarado a ultima variável (rainha) e dado o valor inicial "0". 
  do{
     printf ("esquerda\n");              //enquanto a condição para variável for verdadeira será impresso "esquerda".
    rainha++;                              //incremento para variável, evitar loop infinito e rodar programa sem (bugs).    
    }while (rainha <8);                     //condição para que o "movimento" (loop) rode até chegar a 8;



    return 0;
}
