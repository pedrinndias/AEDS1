#include <iostream> // Para entrada e saída de dados (cout)
#include <iomanip>  // Para formatar a saída com casas decimais (setprecision, fixed)

using namespace std; // Usar o namespace padrão para evitar prefixar com std::

// Definição da classe CondicionadorAr
class CondicionadorAr {
private:
    // Atributos privados para armazenar a temperatura externa e a potência
    double temperaturaExterna; // Temperatura ambiente fora do condicionador
    int potencia;              // Nível de potência do condicionador (0 a 10)

    // Constantes para os limites de potência e o efeito por nível
    static const int POTENCIA_MINIMA = 0;
    static const int POTENCIA_MAXIMA = 10;
    static const double REDUCAO_POR_NIVEL = 1.8; // Redução de temperatura por nível de potência

public:
    // Construtor padrão
    // Inicializa o condicionador com valores padrão
    CondicionadorAr() {
        temperaturaExterna = 25.0; // Temperatura externa padrão
        potencia = 0;              // Potência inicial padrão (desligado)
        cout << "Condicionador de Ar criado e inicializado." << endl;
    }

    // Método para configurar a temperatura externa
    void configurarTemperaturaExterna(double temp) {
        temperaturaExterna = temp;
        cout << "Temperatura externa configurada para: " << fixed << setprecision(1) << temperaturaExterna << "°C" << endl;
    }

    // Método para configurar a potência (de 0 a 10)
    void configurarPotencia(int nivelPotencia) {
        if (nivelPotencia >= POTENCIA_MINIMA && nivelPotencia <= POTENCIA_MAXIMA) {
            potencia = nivelPotencia;
            cout << "Potencia configurada para: " << potencia << endl;
        } else {
            cout << "Potencia " << nivelPotencia << " e invalida. Deve ser entre "
                 << POTENCIA_MINIMA << " e " << POTENCIA_MAXIMA << ". Potencia atual permaneceu " << potencia << endl;
        }
    }

    // Método para calcular e retornar a temperatura ambiente resultante
    // O condicionador nunca reduz a temperatura abaixo de 0°C de variação.
    double calcularTemperaturaResultante() {
        double reducaoTotal = potencia * REDUCAO_POR_NIVEL;
        double temperaturaResultante = temperaturaExterna - reducaoTotal;

        // O condicionador nunca reduz a temperatura abaixo de 0°C de variação
        // Isso significa que a TEMPERATURA RESULTANTE não deve ser inferior a 0°C,
        // mas sim que a REDUÇÃO não pode fazer com que a temperatura caia abaixo de 0°C
        // se a temperatura externa já for baixa.
        // A interpretação "nunca reduz a temperatura abaixo de 0°C de variação"
        // é um pouco ambígua, mas geralmente significa que a temperatura mínima alcançável
        // é 0°C. Se a temperatura externa for, por exemplo, 5°C e a redução fosse 10°C,
        // a resultante seria 0°C, não -5°C.
        if (temperaturaResultante < 0.0) {
            temperaturaResultante = 0.0;
        }

        return temperaturaResultante;
    }

    // Métodos para consultar os atributos (opcional, mas útil para depuração)
    double getTemperaturaExterna() {
        return temperaturaExterna;
    }

    int getPotencia() {
        return potencia;
    }
};

// Função principal do programa
int main() {
    // Crie dois condicionadores
    CondicionadorAr condicionador1;
    CondicionadorAr condicionador2;

    // Defina temperaturas externas diferentes
    cout << "\n--- Configurando Condicionador 1 ---" << endl;
    condicionador1.configurarTemperaturaExterna(25.0); // Ex: 25°C

    cout << "\n--- Configurando Condicionador 2 ---" << endl;
    condicionador2.configurarTemperaturaExterna(31.0); // Ex: 31°C

    // Ajuste o primeiro para potência 5
    cout << "\n--- Ajustando Potencia Condicionador 1 ---" << endl;
    condicionador1.configurarPotencia(5);

    // Ajuste o segundo para potência máxima (10)
    cout << "\n--- Ajustando Potencia Condicionador 2 ---" << endl;
    condicionador2.configurarPotencia(10);

    // Exiba a temperatura ambiente resultante para cada um.
    cout << "\n--- Resultados Finais ---" << endl;

    double tempResultante1 = condicionador1.calcularTemperaturaResultante();
    cout << "Temperatura ambiente resultante do Condicionador 1: "
         << fixed << setprecision(1) << tempResultante1 << "°C" << endl;

    double tempResultante2 = condicionador2.calcularTemperaturaResultante();
    cout << "Temperatura ambiente resultante do Condicionador 2: "
         << fixed << setprecision(1) << tempResultante2 << "°C" << endl;

    // Testando a regra de "nunca reduzir abaixo de 0°C de variação"
    cout << "\n--- Testando limite de 0°C de variacao ---" << endl;
    CondicionadorAr condicionadorTeste;
    condicionadorTeste.configurarTemperaturaExterna(5.0); // Temperatura externa baixa
    condicionadorTeste.configurarPotencia(10); // Potência máxima para grande redução
    double tempTeste = condicionadorTeste.calcularTemperaturaResultante();
    cout << "Temp. externa: 5.0C, Potencia: 10. Resultante esperada >= 0: "
         << fixed << setprecision(1) << tempTeste << "°C" << endl;


    return 0; // Indica que o programa terminou com sucesso
}