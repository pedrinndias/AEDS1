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
        Elevador(int andar=0, int totalAndares=0, int capacidade=0, int numeroPessoas=0){
            this->andar=andar;
            this->totalAndares=totalAndares;
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

    cout << "*** Preenchendo Elevado ***" << endl;

    cout << "Informe a capacidade do elevador: " << endl;
    cin >> C;

    cout << "Informe o total de andares" << endl;
    cin >> T;

    E.setCapacidade(C);
    E.settotalAndar(T);

    cout << "*** Testando aplicacao ***" << endl;
    int aux;
    do{
        cout << "1- Adicionar +1 pessoa no elevador" << endl;
        cout << "2- Retirar -1 pessoa do elevador " << endl;
        cout << "3- Subir +1 andar" << endl;
        cout << "4- Descer -1 andar" << endl;
        cout << "5- Verificar andar" << endl;
        cout << "6- Verificar numero de pessoas" << endl;
        cout << "7- Sair " << endl;

        cin >> aux;

        switch (aux){
            case 1:
                E.setEntra();
                cout << E.getnumeroPessoas() << endl;
                break;
            case 2:
                E.setsai();
                cout << E.getnumeroPessoas() << endl;
                break;
            case 3:
                E.setSobe();
                cout << E.getAndar() << endl;
                break;
            case 4:
                E.setDesce();
                cout << E.getAndar() << endl;
                break;
            case 5:
                cout << E.getAndar() << endl;
                break;
            case 6:
                cout << E.getnumeroPessoas() << endl;
                break;
            case 7:
                return 0;
                break;
        }

    }while(aux != 7);
    return 0;
}