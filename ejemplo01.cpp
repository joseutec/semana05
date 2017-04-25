#include <iostream>
#include <vector>
using namespace std;

int main() 

{ 
    vector <char> vtexto = {'h' ,'o' ,'l', 'a' };
    
    cout<< "tamaño:" << vtexto.size() << endl;
    cout << "caracter de la psoicion 3:" << vtexto[1] << endl;
    
   
   // imprimir todos los caracteres
    for (auto i: vtexto)
   
   {
    cout<<i;
   }
  
    

}