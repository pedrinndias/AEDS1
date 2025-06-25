#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
class Empregado {
private:
    string nome;
    double salarioBase;
    double imposto;
public:
    Empregado(string nome, double salarioBase, double imposto) {
        this->nome = nome;
        this->salarioBase = salarioBase;
        this->imposto = imposto;
    }
    string getNome() const {
        return nome;
    }
    void setNome(string nome) {
        this->nome = nome;
    }
    double getSalarioBase() const {
        return salarioBase;
    }
    void setSalarioBase(double salarioBase) {
        this->salarioBase = salarioBase;
    }
    double getImposto() const {
        return imposto;
    }
    void setImposto(double imposto) {
        this->imposto = imposto;
    }
};
class Vendedor : public Empregado {
private:
    double valorVendas;
    double comissao;
public:
    Vendedor(string nome, double salarioBase, double imposto, double valorVendas, double comissao)
        : Empregado(nome, salarioBase, imposto) {
        this->valorVendas = valorVendas;
        this->comissao = comissao;
    }
    double getValorVendas() const {
        return valorVendas;
    }
    void setValorVendas(double valorVendas) {
        this->valorVendas = valorVendas;
    }
    double getComissao() const {
        return comissao;
    }
    void setComissao(double comissao) {
        this->comissao = comissao;
    }
    double calcularSalario() const {
        return (getSalarioBase() + (comissao * valorVendas)) * (1 - getImposto());
    }
};
int main() {
    return 0;
}