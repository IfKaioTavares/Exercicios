/*Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4.
*
**
***
****
***
**
* */

#include <stdio.h>


void geraTriangulo(int altura);
void partSuperior(int altura);
void meio(int altura);
void partInferior(int altura);

int main(){
  geraTriangulo(4);
  return 0;
}

void geraTriangulo(int altura){
  partSuperior(altura);
  meio(altura);
  partInferior(altura);

}
void partSuperior(int altura){
  for(int i=1; i<altura; i++){
    for(int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
}
void meio(int altura){
  for(int i = 1; i<=altura; i++){
    printf("*");
  }
}
void partInferior(int altura){
   for(int i=altura; i>1; i--){
    printf("\n");
    for(int j=i; j>1; j--){
      printf("*");
    }
  }
}