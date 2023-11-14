/******************************************************************************

encontrar caractere

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
      int tam;
    cout << "digite o tamanho do vetor ";
    cin >> tam;
    char n[tam];
    char caractere;
    cout << "digite o caractere buscado ";
    cin >> caractere;
    
    cout << "digite os valores do vetor " << endl;
    for(int i =0; i<tam; i++){
        cin >> n[i];
    }
    int cont = 0;
    

    
    for(int i=0; i<tam; i++){
        if(n[i]==caractere){
              cont ++;
        }
      
     
    }

    cout << "o caractere " << caractere << "foi encontrado " << cont << "vezes";
}
