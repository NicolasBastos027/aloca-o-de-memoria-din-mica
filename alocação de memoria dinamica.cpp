#include <iostream>
#include <stdlib.h> //para usar o malloc, calloc
using namespace std;

int main() { 

  //malloc é para alocar memória dinamicamente
  void *malloc (unsigned int num);
  //ele aloca na memoria e retorna um ponteiro para o inicio do espaço alocado
  //se não houver memoria suficiente, ele retorna um ponteiro nulo
  //alocar 100 bytes de memoria livre
  char *p;
  p = (char *) malloc(1000);
  //alocar espaço para 50 inteiros:
  int *pi;
  pi = (int *) malloc(50*sizeof(int));
  //sizeof retorna o tamanho em bytes de um tipo de dado
  if(p == NULL){
    cout << "Erro: memoria insuficiente!\n";
    system("pause");
    exit(1);
  }
  //calloc possiu um prototipo um pouco diferente

 //realloc é para realocar memoria
  void *relloc (void *ptr, unsigned int num);
  //se o ptr for num, ele devolve o mesmo ponteiro
  //se o ptr for nulo ou 0, ele aloca o espaço e retorna o um espaço vazio 
  
  //free - libera a memoria alocada free()
  void free(void *p);// basta apontar para o ponteiro 

  //alocação de arrays, quando estamos alocando uma memoria na verdade estamos alocando um array

  //para alocarmos arrays com mais de uma dimenção utilisamos o mesmo conceiro de ponteiro para ponteiro 
  //ex: char ***p;
  
  //liberar memoria de arrays:
  // for (int i=0; i < 10; i++){
  //   free(p[i]);
  // }
  // free(p);
  
  return 0;
}