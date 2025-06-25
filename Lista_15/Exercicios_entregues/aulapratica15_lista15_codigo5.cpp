#include <iostream>
using namespace std;
class Televisao {
private:
    int volume;
    int canal;
    static const int VOLUME_MINIMO = 0;
    static const int VOLUME_MAXIMO = 100;
public:
    Televisao() {
        volume = 20;
        canal = 5;
        cout << "Televisao criada e inicializada." << endl;
    }
    void aumentarVolume() {
        if (volume < VOLUME_MAXIMO) {
            volume++;
            cout << "Volume aumentado para: " << volume << endl;
        } else {
            cout << "Volume ja esta no maximo (" << VOLUME_MAXIMO << ")." << endl;
        }
    }
    void diminuirVolume() {
        if (volume > VOLUME_MINIMO) {
            volume--;
            cout << "Volume diminuido para: " << volume << endl;
        } else {
            cout << "Volume ja esta no minimo (" << VOLUME_MINIMO << ")." << endl;
        }
    }
    void aumentarCanal() {
        canal++;
        cout << "Canal aumentado para: " << canal << endl;
    }
    void diminuirCanal() {
        canal--;
        cout << "Canal diminuido para: " << canal << endl;
    }
    void trocarCanal(int novoCanal) {
        canal = novoCanal;
        cout << "Canal trocado para: " << canal << endl;
    }
    int getCanal() {
        return canal;
    }
    int getVolume() {
        return volume;
    }
    void exibirStatus() {
        cout << "\n--- Status da Televisao ---" << endl;
        cout << "Canal Atual: " << canal << endl;
        cout << "Volume Atual: " << volume << endl;
        cout << "---------------------------\n" << endl;
    }
};
int main() {
    Televisao minhaTV;
    minhaTV.exibirStatus();
    minhaTV.aumentarCanal();
    minhaTV.trocarCanal(999);
    minhaTV.aumentarVolume();
    minhaTV.exibirStatus();
    minhaTV.diminuirCanal();
    minhaTV.diminuirCanal();
    minhaTV.exibirStatus();
    return 0;
}