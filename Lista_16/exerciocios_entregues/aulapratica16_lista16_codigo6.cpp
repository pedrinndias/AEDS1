#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
class Funcionario {
protected:
    string nome;
    double salarioBase;
public:
    Funcionario(string nome, double salarioBase) {
        this->nome = nome;
        this->salarioBase = salarioBase;
    }
    virtual double calcularSalario() = 0;
    virtual void exibirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Salario Final: R$" << fixed << setprecision(2) << calcularSalario() << endl;
    }
};
class Gerente : public Funcionario {
private:
    double bonusFixo = 2000.00;
public:
    Gerente(string nome, double salarioBase) : Funcionario(nome, salarioBase) {}

    double calcularSalario() override {
        return salarioBase + bonusFixo;
    }
    void exibirDados() override {
        cout << "--- Gerente ---" << endl;
        Funcionario::exibirDados();
    }
};
class Desenvolvedor : public Funcionario {
private:
    int numeroProjetosConcluidos;
    double bonusPorProjeto = 500.00;
public:
    Desenvolvedor(string nome, double salarioBase, int numeroProjetosConcluidos)
        : Funcionario(nome, salarioBase) {
        this->numeroProjetosConcluidos = numeroProjetosConcluidos;
    }
    double calcularSalario() override {
        return salarioBase + (bonusPorProjeto * numeroProjetosConcluidos);
    }

    void exibirDados() override {
        cout << "--- Desenvolvedor ---" << endl;
        Funcionario::exibirDados();
        cout << "Projetos Concluidos: " << numeroProjetosConcluidos << endl;
    }
};
class Estagiario : public Funcionario {
private:
    float percentualBolsa;
public:
    Estagiario(string nome, double salarioBase, float percentualBolsa)
        : Funcionario(nome, salarioBase) {
        this->percentualBolsa = percentualBolsa;
    }
    double calcularSalario() override {
        return salarioBase * percentualBolsa;
    }
    void exibirDados() override {
        cout << "--- Estagiario ---" << endl;
        Funcionario::exibirDados();
        cout << "Percentual de Bolsa: " << percentualBolsa * 100 << "%" << endl;
    }
};
int main() {
    return 0;
}