#include <iostream>
using namespace std;

int maiorDeTres(int, int, int);
int maior(int, int);

int main(){

                int n1 = 499;
    int n2 = 476;
    int n3 = 895;
    int maiorNum, aux;

    cout << "Função maiorDeTres: " << maiorDeTres(n1, n2, n3) << endl; 
    
    aux = maior(n1, n2);
    maiorNum = maior(aux, n3);
    cout << "Função maior: " << maiorNum << endl;    

    return 0;
}


int maiorDeTres(int n1, int n2, int n3){
int maior;

if (n1 > n2 && n1 > n3){
    maior = n1;
}else if (n2 > n1 && n2 > n3){
    maior = n2;
}else if (n3 > n1 && n3 > n2){
    maior = n3;
}

return maior;
}


int maior (int n1, int n2){
int maior;
    if (n1 > n2){
        maior = n1;
    }else if (n2 > n1){
        maior = n2;
    }else {
        cout << "numero iguais" << endl;
    }

return maior;
}