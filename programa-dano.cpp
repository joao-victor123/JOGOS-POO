#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	// declarando as variáveis
	int Vida1 = 20, Vida2 = 20;
	int dano1 = 0, dano2 = 0;
	string P1, P2;
	// declarando uma variável booleana
	bool sair = false;

	// digitar o nome do primeiro jogador
	cout << "Digite o nome do Jogador 1" << endl;
	cin >> P1;
	// digitar o nome do segundo jogador
	cout << "Digite o nome do Jogador 2" << endl;
	cin >> P2;

	// criando um laço
	while (sair == false)
	{
		//imprimindo os bonequinhos na tela
		cout << "-" << dano1 << "                   -" << dano2 << endl;
		cout << " o                   o  " << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^  " << endl;
		cout << P1 << "                " << P2 << endl;
		cout << "Vida: " << Vida1 << "         " << " Vida: " << Vida2 << endl;
		// ataque do jogador 1 e jogador 2
		cout << "Ataque: 2" << "         " << "Ataque: 2" << endl;
		// defesa do jogador 1 e 2
		cout << "Defesa: 3" << "         " << "Defesa: 3" << endl;
		 
		// variável do dado
		int dado6;

		// adicionar números aleatórios de acordo com a hora do computador
		srand((int)time(0));

		// gerando os números aleatórios para o jogador 1
		dado6 = rand() % 6 + 1;
		dano1 = dado6 - 4;
		// se o número do dado for menor que 4 , o jogador 2 não recebe nenhum dano 
		if (dado6 < 4)
		{
			dano1 = 0;
		}
		Vida1 = Vida1 - dano1;

		//gerando os números aleatórios para o jogador 2
		dado6 = rand() % 6 + 1;
		dano2 = dado6 - 4;
		//se o número do dado for menor que 4 , o jogador 1 não recebe nenhum dano
		if (dado6 < 4)
		{
			dano2 = 0;
		}
		Vida2 = Vida2 - dano2;

		//Espera apertar enter para ir para a próxima rodada.
		system("pause");

		cout << "Vida: " << Vida1 << "         " << "Vida: " << Vida2 << endl;

		if (Vida1 <= 0 || Vida2 <= 0)
		{
			// verificando se continua ou para.
			sair = true;
		}
		// limpa a tela
		system("cls");
	}
	//anuciando o vencedor do jogo
	cout << "Fim de jogo" << endl;
	if (Vida1 > 0) cout << "Vitoria de: " << P1 << endl;
	else if (Vida2 > 0) cout << "Vitoria de: " << P2 << endl;
	else cout << "Ambos perderam" << endl;

	return 0;
}