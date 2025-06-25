#include <iostream>
#include <vector>
using namespace std;
class Forma {
public:
    virtual double calcularArea() = 0;
};
class Retangulo : public Forma {
private:
    double base;
    double altura;
public:
    Retangulo(double base, double altura) : base(base), altura(altura) {}

    double calcularArea() override {
        return base * altura;
    }
};
class Triangulo : public Forma {
private:
    double base;
    double altura;
public:
    Triangulo(double base, double altura) : base(base), altura(altura) {}

    double calcularArea() override {
        return (base * altura) / 2;
    }
};
int main() {
    return 0;
}