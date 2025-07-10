#include<iostream>
#include<string>
using namespace std;

class empregado{
    private:
        string nome;
        int codigoSetor;
        double salariobase;
        double impostos;
    public:
        empregado(string nome="", int codigoSetor=0, double salariobase=0.0, double impostos=0.0){
            this->nome=nome;
            this->codigoSetor=codigoSetor;
            this->salariobase=salariobase;
            this->impostos=impostos;
        }

        void setNome(string nome){this->nome=nome;}
        void setcodigoSetor(int codigoSetor){this->codigoSetor=codigoSetor;}
        void setsalarioBase(double salariobase){this->salariobase=salariobase;}
        void setImpostos(double impostos){this->impostos=impostos;}

        string getNome(){return nome; }
        int getcodigoSetor(){return codigoSetor;}
        double getsalarioBase(){return salariobase;}
        double getImpostos(){return impostos;}
    
    
};

class vendedor : public empregado{
    private:
        double valorVendas;
        double comissao;
    public:
        vendedor(double valorvendas=0.0, double comissao =0.0, string nome="", int codigoSetor, double salariobase, double impostos):empregado(nome, codigoSetor, salariobase, impostos){
            this->valorVendas=valorvendas;
            this->comissao=comissao;
        }

        void setvalorVendas(double valorVendas){this->valorVendas=valorVendas;}
        void setcodigoSetor(double comissao){this->comissao=comissao;}
        double getvalorVendas(){return valorVendas;}
        double getcomissao(){return comissao;}

        double calcularSalario(){return ((getsalarioBase()+(getvalorVendas()*getcomissao()))*(100-getImpostos()));}
        void mostrar(){
            cout << getNome() << endl;
            cout << getcodigoSetor() << endl;
            cout << getsalarioBase() << endl;
            cout << getImpostos() << endl;
            cout << getvalorVendas() <<endl;
            cout << getcomissao() << endl;
            cout << "Salario: ";
            cout << calcularSalario();
        }
};

int main(){
    vendedor V(1000, 30, "Pedro", 1234, 1500, 10);
    V.mostrar();
    return 0;
}