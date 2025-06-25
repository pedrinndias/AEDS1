#include <iostream> // Para entrada e saída de dados (cout)

using namespace std; // Usar o namespace padrão para evitar prefixar com std::

// Definição da classe Relogio
class Relogio {
private:
    // Atributos privados para armazenar a hora, minuto e segundo
    int hora;
    int minuto;
    int segundo;

public:
    // Construtor padrão (opcional, mas boa prática para inicializar)
    Relogio() {
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    // Construtor que recebe hora, minuto e segundo (para inicializar na criação)
    Relogio(int h, int m, int s) {
        setHora(h, m, s); // Reutiliza a lógica de validação do setHora
    }

    // Método setHora:
    // Recebe hora, minuto e segundo como parâmetros e define os atributos.
    // Inclui validação para garantir que os valores sejam válidos para um horário.
    void setHora(int h, int m, int s) {
        // Validação da hora (0-23)
        if (h >= 0 && h < 24) {
            hora = h;
        } else {
            hora = 0; // Define como 0 ou lança um erro, dependendo da necessidade
            cout << "Aviso: Hora invalida. Definida como 0." << endl;
        }

        // Validação do minuto (0-59)
        if (m >= 0 && m < 60) {
            minuto = m;
        } else {
            minuto = 0; // Define como 0
            cout << "Aviso: Minuto invalido. Definido como 0." << endl;
        }

        // Validação do segundo (0-59)
        if (s >= 0 && s < 60) {
            segundo = s;
        } else {
            segundo = 0; // Define como 0
            cout << "Aviso: Segundo invalido. Definido como 0." << endl;
        }
    }

    // Método getHora:
    // Retorna os valores atuais de hora, minuto e segundo por referência.
    // Isso permite que o chamador receba os valores diretamente nas suas variáveis.
    void getHora(int &h, int &m, int &s) {
        h = hora;
        m = minuto;
        s = segundo;
    }

    // Método que avança o horário em um segundo, ajustando os minutos e horas
    // quando necessário (como um relógio digital).
    void avancaHorario() {
        segundo++; // Incrementa os segundos

        if (segundo >= 60) {
            segundo = 0; // Reseta segundos para 0
            minuto++;    // Incrementa os minutos

            if (minuto >= 60) {
                minuto = 0; // Reseta minutos para 0
                hora++;     // Incrementa as horas

                if (hora >= 24) {
                    hora = 0; // Reseta horas para 0 (novo dia)
                }
            }
        }
    }

    // Método auxiliar para imprimir o horário de forma formatada (para facilitar a visualização)
    void imprimeHorario() {
        // Usa setw e setfill para formatar com dois dígitos (ex: 05, 12)
        cout.width(2);
        cout.fill('0');
        cout << hora << ":";
        cout.width(2);
        cout.fill('0');
        cout << minuto << ":";
        cout.width(2);
        cout.fill('0');
        cout << segundo << endl;
    }
};

// Função principal do programa
int main() {
    // Cria um objeto Relogio usando o construtor padrão
    Relogio meuRelogio1;

    // Define um horário inicial para meuRelogio1 usando setHora
    cout << "Definindo horario para meuRelogio1..." << endl;
    meuRelogio1.setHora(23, 59, 50);
    cout << "Horario inicial meuRelogio1: ";
    meuRelogio1.imprimeHorario();

    // Cria um objeto Relogio usando o construtor parametrizado
    Relogio meuRelogio2(10, 30, 45);
    cout << "Horario inicial meuRelogio2 (usando construtor): ";
    meuRelogio2.imprimeHorario();

    cout << "\nAvancando o horario de meuRelogio1 15 vezes para testar..." << endl;
    for (int i = 0; i < 15; ++i) {
        meuRelogio1.avancaHorario();
        cout << "Avanco " << i + 1 << ": ";
        meuRelogio1.imprimeHorario();
    }

    cout << "\nAvancando o horario de meuRelogio2 uma vez..." << endl;
    meuRelogio2.avancaHorario();
    cout << "Horario meuRelogio2 apos avanco: ";
    meuRelogio2.imprimeHorario();

    // Usando getHora para obter os valores e exibi-los
    int h, m, s;
    meuRelogio1.getHora(h, m, s);
    cout << "\nHorario atual de meuRelogio1 (obtido por getHora): " << h << ":" << m << ":" << s << endl;

    meuRelogio2.getHora(h, m, s);
    cout << "Horario atual de meuRelogio2 (obtido por getHora): " << h << ":" << m << ":" << s << endl;

    // Testando setHora com valores inválidos para ver os avisos
    cout << "\nTestando setHora com valores invalidos:" << endl;
    meuRelogio1.setHora(25, 65, 70); // Hora, minuto e segundo inválidos
    cout << "Horario apos setHora com invalidos: ";
    meuRelogio1.imprimeHorario();


    return 0; // Indica que o programa terminou com sucesso
}