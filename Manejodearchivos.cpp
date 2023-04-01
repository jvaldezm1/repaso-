#include <iostream>
#include "fstream"

using namespace std;
string texto;

void Leertexto(string directorio) {
    ifstream archivo;
    archivo.open(directorio);
    if (archivo.is_open()) {
        while (getline(archivo, texto)) {
            cout << "archivo leido==>>" << texto << endl;
        }
        archivo.close();
    } else {
        cout << "archivo no encontrado " << endl;
    }

}
void Modificartexto(string directorio){
ofstream archivo ;
archivo.open(directorio,ios::app);
if (archivo.is_open()){
    archivo<<texto<<endl;
    archivo.close();
    cout<<"archivo modificado"<<endl;
}else{
    cout<<"error al leer el archvio "<<endl;
}

}
