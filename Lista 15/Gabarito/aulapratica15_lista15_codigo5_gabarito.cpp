#include <iostream> // Para entrada e saída de dados (cout)

using namespace std; // Usar o namespace padrão para evitar prefixar com std::

// Definição da classe Televisao
class Televisao {
private:
    // Atributos privados para armazenar o volume e o canal
    int volume;
    int canal;

    // Constantes para os limites do volume e canal
    // Usamos static const int para que sejam constantes da classe e não de cada objeto
    // e também para que possam ser inicializadas diretamente dentro da classe em C++11 ou superior
    static const int VOLUME_MINIMO = 0;
    static const int VOLUME_MAXIMO = 100;
    static const int CANAL_MINIMO = 1;  // Assumimos canal 1 como mínimo
    static const int CANAL_MAXIMO = 99; // Assumimos canal 99 como máximo

public:
    // Construtor padrão
    // Inicializa a televisão com um volume e canal padrão
    Televisao() {
        volume = 20; // Volume inicial padrão
        canal = 5;   // Canal inicial padrão
        cout << "Televisao criada e inicializada." << endl;
    }

    // Métodos públicos para controle de volume

    // Aumentar o volume em uma unidade
    void aumentarVolume() {
        if (volume < VOLUME_MAXIMO) {
            volume++;
            cout << "Volume aumentado para: " << volume << endl;
        } else {
            cout << "Volume ja esta no maximo (" << VOLUME_MAXIMO << ")." << endl;
        }
    }

    // Diminuir o volume em uma unidade
    void diminuirVolume() {
        if (volume > VOLUME_MINIMO) {
            volume--;
            cout << "Volume diminuido para: " << volume << endl;
        } else {
            cout << "Volume ja esta no minimo (" << VOLUME_MINIMO << ")." << endl;
        }
    }

    // Métodos públicos para controle de canal

    // Aumentar uma unidade no número do canal
    void aumentarCanal() {
        if (canal < CANAL_MAXIMO) {
            canal++;
            cout << "Canal aumentado para: " << canal << endl;
        } else {
            canal = CANAL_MINIMO; // Volta para o primeiro canal se atingir o máximo
            cout << "Canal voltou para o minimo (" << CANAL_MINIMO << ")." << endl;
        }
    }

    // Diminuir uma unidade no número do canal
    void diminuirCanal() {
        if (canal > CANAL_MINIMO) {
            canal--;
            cout << "Canal diminuido para: " << canal << endl;
        } else {
            canal = CANAL_MAXIMO; // Vai para o último canal se atingir o mínimo
            cout << "Canal foi para o maximo (" << CANAL_MAXIMO << ")." << endl;
        }
    }

    // Trocar diretamente para um canal indicado
    void trocarCanal(int novoCanal) {
        if (novoCanal >= CANAL_MINIMO && novoCanal <= CANAL_MAXIMO) {
            canal = novoCanal;
            cout << "Canal trocado para: " << canal << endl;
        } else {
            cout << "Canal " << novoCanal << " e invalido. Canal atual permaneceu " << canal << endl;
        }
    }

    // Métodos públicos para consultar o canal atual e o volume atual

    // Retorna o canal atual
    int getCanal() {
        return canal;
    }

    // Retorna o volume atual
    int getVolume() {
        return volume;
    }

    // Método auxiliar para exibir o status atual da TV (similar aos outros exercícios)
    void exibirStatus() {
        cout << "\n--- Status da Televisao ---" << endl;
        cout << "Canal Atual: " << canal << endl;
        cout << "Volume Atual: " << volume << endl;
        cout << "---------------------------\n" << endl;
    }
};

// Função principal do programa
int main() {
    // Crie uma televisão
    Televisao minhaTV;

    // Exiba os valores iniciais
    minhaTV.exibirStatus();

    // Altere o canal algumas vezes
    cout << "Alterando o canal..." << endl;
    minhaTV.aumentarCanal(); // 6
    minhaTV.aumentarCanal(); // 7
    minhaTV.trocarCanal(25); // 25
    minhaTV.diminuirCanal(); // 24
    minhaTV.exibirStatus();

    // Aumente o volume algumas vezes
    cout << "Aumentando o volume..." << endl;
    minhaTV.aumentarVolume(); // 21
    minhaTV.aumentarVolume(); // 22
    minhaTV.aumentarVolume(); // 23
    minhaTV.exibirStatus();

    // Testando limites do volume
    cout << "Testando limites de volume (aumentando ate o maximo e tentando ir alem)..." << endl;
    for (int i = 0; i < 80; ++i) { // Vai de 23 até 100, depois tenta ir além
        minhaTV.aumentarVolume();
    }
    minhaTV.diminuirVolume(); // Diminui um pouco para testar
    minhaTV.exibirStatus();

    cout << "Testando limites de volume (diminuindo ate o minimo e tentando ir alem)..." << endl;
    for (int i = 0; i < 105; ++i) { // Vai de 99 até 0, depois tenta ir além
        minhaTV.diminuirVolume();
    }
    minhaTV.exibirStatus();

    // Testando limites do canal
    cout << "Testando limites de canal (aumentando ate o maximo e tentando ir alem, e vice-versa)..." << endl;
    minhaTV.trocarCanal(98);
    minhaTV.aumentarCanal(); // 99
    minhaTV.aumentarCanal(); // 1 (volta ao mínimo)
    minhaTV.diminuirCanal(); // 99 (volta ao máximo)
    minhaTV.exibirStatus();

    // Testando trocar para canal inválido
    cout << "Tentando trocar para canal invalido (1000 e 0)..." << endl;
    minhaTV.trocarCanal(1000);
    minhaTV.trocarCanal(0);
    minhaTV.exibirStatus();


    // Exiba os valores atuais de canal e volume usando os métodos get
    cout << "\n--- Valores Finais Usando Getters ---" << endl;
    cout << "Canal final: " << minhaTV.getCanal() << endl;
    cout << "Volume final: " << minhaTV.getVolume() << endl;

    return 0; // Indica que o programa terminou com sucesso
}