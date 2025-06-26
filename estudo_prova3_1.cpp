#include<iostream>
#include<string>
using namespace std;
class Pessoa{
    private:
        string nome;
        int idade;
        float altura;
    public:
    Pessoa(string nome="", int idade=0, float altura=0){
        this -> nome = nome;
        this -> idade= idade;
        this -> altura = altura;
    }

    void setNome(string Nome1) {nome = Nome1;}
    void setIdade(int Idade1) {idade = Idade1;}
    void setAltura(float AlturA2) {altura = AlturA2;}

    string getNome(){return nome;}
    int getIdade(){return idade;}
    float getAltura(){return altura;}


};

int main(){
    Pessoa p1("Pedro Dias", 19, 1.75);
    Pessoa p2;
    string N2;
    int I2; 
    float A2;
    cout << "Digite seu nome: " << endl;
    cin >> N2;
    p2.setNome(N2);
    cout << "Digite sua idade: " << endl;
    cin >> I2;
    p2.setIdade(I2);
    cout << "Digite sua altura" << endl;
    cin >> A2;
    p2.setAltura(A2);

    cout <<  p1.getNome() << endl;
    cout <<  p1.getIdade() << endl;
    cout <<  p1.getAltura() << endl;
    
    cout <<  p2.getNome() << endl;
    cout <<  p2.getIdade() << endl;
    cout <<  p2.getAltura() << endl;
    return 0;
}