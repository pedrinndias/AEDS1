#include<iostream>
#include<string>
using namespace std;

class funcionario{
    private:
        string nome;
        float Salariobase;
    public:
        funcionario(string nome=" ", float Salariobase=0.0){
            this->nome = nome;
            this->Salariobase = Salariobase;
        }

        void setNome(string nome){this->nome = nome;}
        void setSalariobase(float Salariobase){this->Salariobase = Salariobase;}
        float getSalariobase(){return Salariobase;}
        string getNome(){return nome;}  
};

class gerente : public funcionario{
    private:
        float bonus;
    public:
        gerente(float bonus=0.0, string nome=" ", float Salariobase=0.0):funcionario(nome, Salariobase){
            this->bonus=bonus;
        }
     void setBonus(float bonus){this->bonus=bonus;}
     float getBonus(){return bonus;}

     float calcularSalarios(){return getSalariobase()+bonus;}
};

int main(){
    string nome;
    float Salariobase;
    float bonus;

    cout <<" Digite seu nome: ";
    cin  >> nome; 
    cout <<" \n Digite seu salario: ";
    cin  >> Salariobase; 
    cout <<" \n Digite seu bonus: ";
    cin  >> bonus; 
    gerente G(bonus, nome, Salariobase);
     cout <<" \n";
    cout << G.calcularSalarios(); 
    return 0;
}