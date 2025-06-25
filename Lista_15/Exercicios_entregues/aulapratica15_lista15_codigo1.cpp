#include <iostream> // Necessário para cout, cin, endl
#include <string>   // Necessário para o tipo de dado string
#include <limits>   // Necessário para numeric_limits (para limpar o buffer do cin)
// Usar o namespace padrão para evitar prefixar com std::
// Essa linha é comum em exemplos e exercícios, mas em projetos maiores,
// é preferível qualificar com std:: (ex: std::cout) ou usar "using std::cout;"
// para evitar colisões de nomes.
using namespace std;
// Definição da classe Pessoa
class Pessoa {
private:
    // Atributos privados, conforme solicitado no enunciado.
    // Isso garante o encapsulamento, ou seja, acesso e modificação controlados.
    string nome;
    int idade;
    float altura;
public:
    // Construtor:
    // Este construtor recebe nome, idade e altura como parâmetros
    // e os usa para inicializar os atributos do objeto.
    // 'this->' é usado para distinguir entre os parâmetros de entrada
    // e os atributos da classe que têm o mesmo nome.
    Pessoa(string nome, int idade, float altura) {
        this->nome = nome;
        this->idade = idade;
        this->altura = altura;
    }
    // Construtor padrão (opcional, mas adicionado conforme o exemplo do professor):
    // Permite criar um objeto Pessoa sem passar parâmetros, inicializando-o
    // com valores padrão (string vazia, 0, 0.0).
    Pessoa() {
        nome = "";
        idade = 0;
        altura = 0.0;
    }
    // Métodos modificadores (set) - também chamados de setters:
    // Permitem modificar os valores dos atributos privados de forma controlada.
    void setNome(string nome) {
        this->nome = nome;
    }
    void setIdade(int idade) {
        this->idade = idade;
    }
    void setAltura(float altura) {
        this->altura = altura;
    }
    // Métodos acessores (get) - também chamados de getters:
    // Permitem obter os valores dos atributos privados.
    string getNome() {
        return nome;
    }
    int getIdade() {
        return idade;
    }
    float getAltura() {
        return altura;
    }
    // Método para imprimir todos os dados da pessoa:
    // Exibe os valores dos atributos do objeto de forma formatada.
    void imprimirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Altura: " << altura << " metros" << endl;
    }
};
// Função principal do programa
int main() {
    // 1. Crie um objeto pessoa1 utilizando o construtor, passando os dados diretamente:
    // O construtor Pessoa(string, int, float) é chamado aqui.
    Pessoa pessoa1("Joao", 25, 1.75);
    // 2. Crie um objeto pessoa2:
    // O construtor padrão Pessoa() é chamado aqui, inicializando pessoa2.
    Pessoa pessoa2;
    // Variáveis auxiliares para ler os dados do teclado.
    string nome;
    int idade;
    float altura;
    // Leia os dados do teclado (via cin) e atribua-os usando os métodos set:
    cout << "Digite o nome da pessoa2: ";
    // `getline` é usado para ler a linha inteira, incluindo espaços, para o nome.
    getline(cin, nome);
    pessoa2.setNome(nome); // Atribui o nome lido usando o setter.
    cout << "Digite a idade da pessoa2: ";
    cin >> idade;
    pessoa2.setIdade(idade); // Atribui a idade lida usando o setter.
    // Limpa o buffer de entrada. Isso é crucial após usar `cin >>`
    // e antes de um possível `getline` futuro, para remover o caractere de nova linha
    // que `cin >>` deixa no buffer.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Digite a altura da pessoa2 (em metros): ";
    cin >> altura;
    pessoa2.setAltura(altura); // Atribui a altura lida usando o setter.
    // Limpa o buffer novamente, caso haja mais entradas numéricas seguidas por getline.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // 3. Imprima os dados de ambas as pessoas utilizando o método de impressão da classe:
    cout << endl << "Dados da pessoa1:" << endl;
    pessoa1.imprimirDados(); // Chama o método de impressão para pessoa1.
    cout << endl << "Dados da pessoa2:" << endl;
    pessoa2.imprimirDados(); // Chama o método de impressão para pessoa2.
    return 0; // Indica que o programa foi executado com sucesso.
}