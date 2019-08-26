#include <iostream>
using namespace std;

void SOMA(float a, int b);

int main(){

    SOMA(15.2, 23); //chamada da função antes da definição da mesma


    return 0;




}
void SOMA(float a, int b) {

    float result = a + b;
    
    
    cout <<  "A soma de " << a << " com " << b << " é: " << result << endl;


}
