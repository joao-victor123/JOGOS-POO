// Meu primeiro código em C++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{ 
    // declarando as variáveis 
	char inicial;
	string nome;
	string classe;

	//cadastrando o personagem
	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome);
	inicial = nome[0];
	cout << "digite a classe do personagem:" << endl;
	getline(cin, classe);
	cout << "personagem:" << inicial << ". " << nome.substr(nome.find(" ")) << endl;
	cout << "classe:" << classe << endl;

	// os poderes do personagem
	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;

	// vida do personagem
	int vida = 65;
	int vida_maxima = 110;
	// mostrando em tela as caracteristicas do personagem
	cout << "Status " << endl;
	cout << "Ataque : " << ataque << "\nDefesa : " << defesa << endl;
	cout << "Magica : " << magica << "\nDef. Magica : " << def_magica << endl;

	cout << "Vida : " << vida << " / " << vida_maxima << endl;
	float porc_vida;
	porc_vida = (vida * 100) / vida_maxima;

	// depois do porto da divisão, ele mostra mais dois números
	cout.precision(2);
	cout << "vida : " << fixed << porc_vida << "%" << endl;
	return 0;

}