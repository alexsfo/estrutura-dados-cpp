#include <iostream>
using namespace std;
  
void pauOuImpar(int);
int par (int);
int impar (int);


int main() ///////// main
{

pauOuImpar(3);



return 0;
}

 
 void pauOuImpar(int num)
 {
   if (num % 2 == 0){
     cout << "Numero par" << endl;
   }else{
     cout << "Numero ímpar" << endl;
   }
 }

 int par (int num){
   if (num % 2 == 0){
     return 1;
   }else
   {
     return 0;
   }
 }
   
 int impar (int num){
   if (num % 2 != 0){
     return 1;
   }else
   {
     return 0;
   }
 }
 