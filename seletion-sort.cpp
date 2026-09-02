#ifndef SELETION-SORT_H
#define SELETION-SORT_H

#include "corpo.cpp"
#include <iostream>
using namespace std;

//importando a struct
Dados dados;

//carregando dados da struct
void carregarDados(Dados novalista){
 dados = novaLista;
}


//mostra os dados da strcut
Dados obterdados(){
 return dados;
}

//add no indice  e verifica se cabe no vetor
void dados(int indice, int valor){
 if(indice >= 0 && indice <dados.tamanho){
 dados.vetor[indice] = valor;
 }
}
//faz a ordenacao com base no numero 
void ordenar(){
  int indiceMenor = 0; //assume que é o menor
  for(int i = 0; i < dados.tamanho; i++){ //procura os numeros menores com base no menor numero anterior
    if(dados.vetor[i] <= dados.vetor[indiceMenor]){ // se entrar aqui, achou um menor
      int tmp = dados.vetor[indiceMenor];           //Troca de posicao com o menor
      dados.vetor[indiceMenor] = dados.vetor[i];
      dados.vetor[i] = tmp;
      indiceMenor = i;
    }
  }
}

