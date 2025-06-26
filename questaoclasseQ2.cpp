#include<iostream>
#include<string>
using namespace std;

class Elevador{
    private:
        int andar;
        int totalAndares; //exclui o terreo
        int capacidade;
        int numeroPessoas;
    
    public:
        Elevador(int andar=0, int totalAndadres=0, int capacidade=0, int numeroPessoas=0){
            this->andar=andar;
            this->totalAndar=totalAndadres;
            this->capacidade=capacidade;
            this->numeroPessoas=numeroPessoas;
        }

        void setCapacidade(int C){ capacidade=C;}
        void settotalAndar(int T){totalAndares=T;}
        void setEntra(){ if(numeroPessoas<capacidade){numeroPessoas++;}}
        void setsai(){ if(numeroPessoas>0){numeroPessoas--;}}
        void setSobe(){if(andar!=totalAndares){andar++;}}
        void setDesce(){if(andar!=0){andar--;}}

        int getAndar(){return andar;}
        int getCapacidade(){return capacidade;}
        int getnumeroPessoas(){return numeroPessoas;}
        int gettotalAndares(){return totalAndares;}
};

int main(){
    Elevador E;
    int C;
    int T;
    cout << "*** 
    cout << "Informe a capacidade do elevador: " <<endl;
    cin >> C;
    cout << "Informe o total de andares"
}