# Vetores 
## Lista de Exercicios!

## Tecnologias

|tecnologia|Descrição|
|-|-|
|Linguagem C|Dev|
|IDE|Embarcadero DevC++|
|Bloco de notas|Portugol|

## Exemplo de Código
  ```c
  #include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int v[25], maior=0, pos=0;
    
    cout<<"Vetor: [";
    for(int i=0; i<25; i++){
        v[i]=rand()%101;
        cout<<v[i];
        if(i<24) cout<<", ";
        
        if(v[i]>maior){
            maior=v[i];
            pos=i;
        }
    }
    cout<<"]\nMaior: "<<maior<<" posicao "<<pos<<endl;
    return 0;
}
  ```
## 👤Desenvolvido por
Victor Alves

Turma: 1DES_A

SENAI 2026

Data: 14/05/2026

GitHub: alveslabb
