
#include <iostream>
#include <string>
using namespace std;

struct Node{
    int valor;
    Node* prox = nullptr;

    Node(int v) : valor(v), prox(nullptr) {}
};

//Setar o nível de urgência dos pacientes
//1 = baixa
//2 = media
//3 = alta



struct Fila {
    Node* frente = nullptr;
    Node* tras = nullptr;

    void enqueue(int valor){
        Node* novo = new Node(valor);
        if(!tras) {frente = tras = novo; return;}
        tras->prox = novo;
        tras = novo;
    }

    int dequeue() {
        int valor = frente->valor;
        Node* tmp = frente;
        frente = frente->prox;
        if(!frente) tras = nullptr;
        delete tmp;
        return valor;
    }

    void frente_peek() {
        if(frente) cout << "Frente da fila: " << frente->valor << endl;
        else cout << "Fila vazia" << endl;
    }
};

//lista encadeada de medicos

struct Medicos {
    void adicionarMedico(Node*& head, int valor) {
        Node* novo = new Node(valor);
        novo->prox = head;
        head = novo;
    }
    

    void chamarMedico(Node*& head) {
        if (!head) return;
        Node* tmp = head;
        head = head->prox;
        delete tmp;
    }

    void percorrer(Node* head) {
        Node* p = head;
        while (p) { cout << p->valor << " ", p = p->prox;}
    }

    //descomentar: médico volta apos atender
};

//Histórico com Pilha (LIFO)
push(nome)

pop() remover topo

peek() ver sem remover

//Relatório final
ImprimirHistorico()

Preservar dados (usar pilha auxiliar)

Imprimir do topo até a base

Integração completa funcionando


int main() {


}
