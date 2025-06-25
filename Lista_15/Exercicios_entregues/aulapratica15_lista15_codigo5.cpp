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
        if (canal < CANAL_MAXIMO) {
            canal++;
            cout << "Canal aumentado para: " << canal << endl;
        } else {
            canal = CANAL_MINIMO;
            cout << "Canal voltou para o minimo (" << CANAL_MINIMO << ")." << endl;
        }
    }
    void diminuirCanal() {
        if (canal > CANAL_MINIMO) {
            canal--;
            cout << "Canal diminuido para: " << canal << endl;
        } else {
            canal = CANAL_MAXIMO;
            cout << "Canal foi para o maximo (" << CANAL_MAXIMO << ")." << endl;
        }
    }
    void trocarCanal(int novoCanal) {
        if (novoCanal >= CANAL_MINIMO && novoCanal <= CANAL_MAXIMO) {
            canal = novoCanal;
            cout << "Canal trocado para: " << canal << endl;
        } else {
            cout << "Canal " << novoCanal << " e invalido. Canal atual permaneceu " << canal << endl;
        }
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
    return 0;
}