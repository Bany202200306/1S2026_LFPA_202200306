#include<iostream>
#include<stdlib.h>
using namespace std;

class Gato{
    private: //Atributos de mi objeto 
        int anios;
        string nombre;
        int peso;
    public: //Metodos
        Gato(int, string, int); //Constructor
        void maullar();
        void saltar(); 
};

//Constructor para inicializar los atributos :D
Gato::Gato(int _anios, string _nombre, int _peso){
    anios = _anios;
    nombre = _nombre;
    peso = _peso;
}

void Gato::maullar(){
    cout<<"Mi gata "<<nombre<<" esta maullando"<<endl;
}

void Gato::saltar(){
    cout<<"Mi gata "<<nombre<<" no deberia saltar por que su peso es mayor a "<<peso<<"kg"<<endl;
}

int main(){
    Gato g1 = Gato(6, "Afrodita", 4);
    g1.maullar();
    g1.saltar();

    system("pause");
    return 0;
}
