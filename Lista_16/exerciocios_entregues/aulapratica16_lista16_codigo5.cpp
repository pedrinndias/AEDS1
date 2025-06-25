#include <iostream>
#include <string>
using namespace std;
class Veiculo {
protected:
    double peso;
    double velocidadeMaxima;
    double preco;
public:
    Veiculo(double peso, double velocidadeMaxima, double preco) {
        this->peso = peso;
        this->velocidadeMaxima = velocidadeMaxima;
        this->preco = preco;
    }
    double getPeso() const {
        return peso;
    }
    void setPeso(double peso) {
        this->peso = peso;
    }
    double getVelocidadeMaxima() const {
        return velocidadeMaxima;
    }
    void setVelocidadeMaxima(double velocidadeMaxima) {
        this->velocidadeMaxima = velocidadeMaxima;
    }
    double getPreco() const {
        return preco;
    }
    void setPreco(double preco) {
        this->preco = preco;
    }
    void print() const {
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Velocidade Maxima: " << velocidadeMaxima << " km/h" << endl;
        cout << "Preco: R$" << preco << endl;
    }
};
class Motor {
protected:
    int numCilindros;
    double potencia;
public:
    Motor(int numCilindros, double potencia) {
        this->numCilindros = numCilindros;
        this->potencia = potencia;
    }
    int getNumCilindros() const {
        return numCilindros;
    }
    void setNumCilindros(int numCilindros) {
        this->numCilindros = numCilindros;
    }
    double getPotencia() const {
        return potencia;
    }
    void setPotencia(double potencia) {
        this->potencia = potencia;
    }
    void print() const {
        cout << "Numero de Cilindros: " << numCilindros << endl;
        cout << "Potencia: " << potencia << " HP" << endl;
    }
};
class CarroPasseio : public Veiculo, public Motor {
private:
    string modelo;
    string cor;
public:
    CarroPasseio(double peso, double velocidadeMaxima, double preco,
                 int numCilindros, double potencia,
                 string modelo, string cor)
        : Veiculo(peso, velocidadeMaxima, preco), Motor(numCilindros, potencia) {
        this->modelo = modelo;
        this->cor = cor;
    }
    string getModelo() const {
        return modelo;
    }
    void setModelo(string modelo) {
        this->modelo = modelo;
    }
    string getCor() const {
        return cor;
    }
    void setCor(string cor) {
        this->cor = cor;
    }
    void print() const {
        cout << "--- Carro de Passeio ---" << endl;
        Veiculo::print();
        Motor::print();
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
    }
};
class Caminhao : public Veiculo, public Motor {
private:
    double toneladas;
    double alturaMaxima;
    double comprimento;
public:
    Caminhao(double peso, double velocidadeMaxima, double preco,
             int numCilindros, double potencia,
             double toneladas, double alturaMaxima, double comprimento)
        : Veiculo(peso, velocidadeMaxima, preco), Motor(numCilindros, potencia) {
        this->toneladas = toneladas;
        this->alturaMaxima = alturaMaxima;
        this->comprimento = comprimento;
    }
    double getToneladas() const {
        return toneladas;
    }
    void setToneladas(double toneladas) {
        this->toneladas = toneladas;
    }
    double getAlturaMaxima() const {
        return alturaMaxima;
    }
    void setAlturaMaxima(double alturaMaxima) {
        this->alturaMaxima = alturaMaxima;
    }
    double getComprimento() const {
        return comprimento;
    }
    void setComprimento(double comprimento) {
        this->comprimento = comprimento;
    }
    void print() const {
        cout << "--- Caminhao ---" << endl;
        Veiculo::print();
        Motor::print();
        cout << "Toneladas: " << toneladas << " t" << endl;
        cout << "Altura Maxima: " << alturaMaxima << " m" << endl;
        cout << "Comprimento: " << comprimento << " m" << endl;
    }
};
int main() {
    return 0;
}