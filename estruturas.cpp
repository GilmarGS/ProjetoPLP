#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <ctime>

using std::string;
using std::vector;
using namespace std;

struct Carro
{   
    string modelo;    
    string codigo;
    string descricao;
    float valor;
    int quantidadeDisponivel;
    int quantidadePassageiros;

};
struct Loja
{
	string nome;
};

struct Cidade
{
    String nome;
    vector<Loja> lojas;
    vector<Carro> carros;
};

struct Usuario
{
    string cpf;
    string nome;
    string cnh;
    int quantidadeAlugado;
    vector<Carro> carrosAlugados;
    
};
