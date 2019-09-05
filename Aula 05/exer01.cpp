#include <iostream>
using namespace std;


int numeroAleatorio(int menor, int maior) {    
    return 1 + rand() % 100;
}



bool existe(int valores[][5], int linhas, int colunas, int num){
    
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            if (valores[i][j] == num){
                return false;
            }
        }
    }
    return true;
}


int main(){

    srand((unsigned)time(0));
    int linhas = 5; 
    int colunas = 5;
    int cart[5][5];
    int min = 0; 
    int max = 100;
    int num;

    //preenche a matriz
    for (int i=0; i < linhas; i++){
       for (int j=0; j < colunas ; j++){

            num = numeroAleatorio(min, max);
            
            while (existe(cart, linhas, colunas, num) == false){
                num = numeroAleatorio(min, max);
            }
           cart[i][j] = num;
       }            
    }

    //imprime a matriz
    for (int i=0; i < linhas; i++){
        cout << endl << endl;
       for (int j=0; j< colunas; j++){
           cout << cart[i][j] << "   ";
       }
    }


    return 0;
}