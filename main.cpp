#include <iostream>
#include<stdio.h>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main(){
    string Alfabeto;
    int Num_Elementos, i=0;
    cin >> Alfabeto;
    Num_Elementos = Alfabeto.size();
    int Numero_Estados;
    cin >> Numero_Estados;
    if(Numero_Estados < 0 || Numero_Estados>10){
        return 0;
    }
    int Estado_Inicial;
    cin >> Estado_Inicial;
    int Estados_Finais[Numero_Estados], Qtd_EstadosF=0;
    char numero;
    char proxChar;
    i=0;
    do{
        scanf("%d%c",&Estados_Finais[i],&numero);
        i++;
        Qtd_EstadosF++;
    }while(numero != '\n');
    if(i > Numero_Estados){
        return 0;
    }
    int Num_Transicoes;
    cin >> Num_Transicoes;
    if(Num_Transicoes<1 || Num_Transicoes > (Numero_Estados* Num_Elementos)){
        return 0;
    }
    int Estado_Saida[Num_Transicoes],Estado_Chegada[Num_Transicoes];
    char Simbolo_lido[Num_Transicoes];
    for(i=0;i<Num_Transicoes;i++){
        scanf("%d %c %d", &Estado_Saida[i], &Simbolo_lido[i], &Estado_Chegada[i]);
    }
    int Num_Testes;
    cin >> Num_Testes;
    if(Num_Testes <1 || Num_Testes>100){
        return 0;
    }
    int Aux=0;
    string Testes[Num_Testes];
    char Simbolo_lido_Compu ;
    int Estado_Atual, Prox_Estado;
    while(Aux < Num_Testes){
        cin >> Testes[Aux];
        Aux++;
    }
    bool Aceita = false;
    i=0;
    int posicao = 0, Num_String=0,Auxiliar=0;
    while(i < Num_Testes){
        cout << Testes[i] << endl;
        Testes[i].erase(0,1);
        Testes[i].erase(Testes[i].size()-1,Testes[i].size());
        Estado_Atual = Estado_Inicial;
        while(posicao < Testes[i].size()){
            Simbolo_lido_Compu = Testes[i].at(posicao);
            for(int j=0;j<Num_Transicoes;j++){
                if( Estado_Atual == Estado_Saida[j]){
                    if(Simbolo_lido_Compu == Simbolo_lido[j]) {
                        Estado_Atual = Estado_Chegada[j];
                        Auxiliar++;
                        break;
                    }
                }

            }
            posicao++;
        }
        for(int j=0;j<Qtd_EstadosF;j++){
            if(Estado_Atual == Estados_Finais[j]){
                    Aceita = true;
            }
        }
        if(Auxiliar < Testes[i].size() &&  Testes[i].size()>0 ){
            Aceita = false;
        }
        if(Aceita == true){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
        i++;
        posicao=0;
        Aceita = false;
        Auxiliar=0;
    }
    return 0;
}
