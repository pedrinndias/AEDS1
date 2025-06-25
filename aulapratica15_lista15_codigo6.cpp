#include <iostream>
#include <iomanip>

using namespace std;

class CondicionadorAr {
private:
    double temperaturaExterna;
    int potencia;

    static const int POTENCIA_MINIMA = 0;
    static const int POTENCIA_MAXIMA = 10;

public:
    static const double REDUCAO_POR_NIVEL;

    CondicionadorAr() {
        temperaturaExterna = 25.0;
        potencia = 0;
        cout << "Condicionador de Ar criado e inicializado." << endl;
    }

    void configurarTemperaturaExterna(double temp) {
        temperaturaExterna = temp;
        cout << "Temperatura externa configurada para: " << fixed << setprecision(1) << temperaturaExterna << "°C" << endl;
    }

    void configurarPotencia(int nivelPotencia) {
        if (nivelPotencia >= POTENCIA_MINIMA && nivelPotencia <= POTENCIA_MAXIMA) {
            potencia = nivelPotencia;
            cout << "Potencia configurada para: " << potencia << endl;
        } else {
            cout << "Potencia " << nivelPotencia << " e invalida. Deve ser entre "
                 << POTENCIA_MINIMA << " e " << POTENCIA_MAXIMA << ". Potencia atual permaneceu " << potencia << endl;
        }
    }

    double calcularTemperaturaResultante() {
        double reducaoTotal = potencia * REDUCAO_POR_NIVEL;
        double temperaturaResultante = temperaturaExterna - reducaoTotal;

        if (temperaturaResultante < 0.0) {
            temperaturaResultante = 0.0;
        }

        return temperaturaResultante;
    }

    double getTemperaturaExterna() {
        return temperaturaExterna;
    }

    int getPotencia() {
        return potencia;
    }
};

const double CondicionadorAr::REDUCAO_POR_NIVEL = 1.8;

int main() {
    CondicionadorAr condicionador1;
    CondicionadorAr condicionador2;

    condicionador1.configurarTemperaturaExterna(25.0);
    condicionador2.configurarTemperaturaExterna(31.0);

    condicionador1.configurarPotencia(5);
    condicionador2.configurarPotencia(10);

    cout << "\n--- Resultados Finais ---" << endl;

    double tempResultante1 = condicionador1.calcularTemperaturaResultante();
    cout << "Temperatura ambiente resultante do Condicionador 1: "
         << fixed << setprecision(1) << tempResultante1 << "°C" << endl;

    double tempResultante2 = condicionador2.calcularTemperaturaResultante();
    cout << "Temperatura ambiente resultante do Condicionador 2: "
         << fixed << setprecision(1) << tempResultante2 << "°C" << endl;

    return 0;
}