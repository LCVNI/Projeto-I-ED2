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
 for(int i = 0; i <dados.tamanho - 1; 1++){
 int indiceMenor = i; //assume que é o menor

 //procura os numeros menores com base no menor numero anterior
 for(int j = i+1; j<dados.tamanho; j++){
 if(dados.vetor[j]<dados.vetor[indiceMenor])
  indiceMenor = j;
   }
 }
 if(indiceMenor !=i){
  int temporario = dados.vetor[i];
  dados.vetor[i] = dados.vetor[indiceMenor;
  dados.vetor[indicceMenor] =  temporario;
    }
 }
}
