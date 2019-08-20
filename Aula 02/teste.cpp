#include <iostream>
using namespace std;

 struct banda
    {
        string nome;
        string tipoMusica;
        int numIntegrantes;
        int posicaoRanking;
    };

int main(){
    int qtd = 6;
    banda bandas[5];
    int g = 0;
    for (int i=1, j= 6; i < qtd; i++, j--){

        bandas[i].nome = ("Banda  " + g+1);
        bandas[i].numIntegrantes = 4;
        bandas[i].posicaoRanking = j-1;
        bandas[i].tipoMusica = "brega";
    };

    for (int i = 0; i < qtd; i++){
        cout << "Nome: " << bandas[i].nome << endl;
        cout << "Nº integrantes: " << bandas[i].numIntegrantes << endl;
        cout << "Posição ranking: " << bandas[i].posicaoRanking << endl;
        cout << "tipo: " << bandas[i].tipoMusica << endl;

    };


    return 0;
};
