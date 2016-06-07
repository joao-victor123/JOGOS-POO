
#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

void imprimir_espacos(int total1);

int main(int argc, char* args[])
{
	// criando a variável
	bool sair = false;

	string jog1, jog2;
	int quant1 = 0, quant2 = 0;
	// pegando os nomes dos jogadores
	cout << "Digite o nome do primeiro jogador" << endl;
	cin >> jog1;
	cout << "Digite o nome do segundo jogador" << endl;
	cin >> jog2;
	// criando um laço
	while (sair == false)
	{
		int total_espacos = 50;
		// usando a hora do pc como forma de sortear números aleatórios
		srand((int)time(0));
		// gerando os números aleatórios
		total_espacos = rand() % 3 + 1;

		quant1 = quant1 + total_espacos;
		total_espacos = rand() % 3 + 1;
		quant2 = quant2 + total_espacos;

		// imprimindo o nome do jogo e a pista
		cout << "NEED FOR SPEED" << endl;

		cout << "LARGADA                                               CHEGADA" << endl;
		// iprimindo os carros na tela
		cout << " jogador 1:" << jog1 << endl;
		imprimir_espacos(quant1);
		cout << "  _  " << endl;
		imprimir_espacos(quant1);
		cout << "-o-o>" << endl;
		cout << "------------------------------------------------------------ " << endl;
		cout << " jogador 2:" << jog2 << endl;
		imprimir_espacos(quant2);
		cout << "  _  " << endl;
		imprimir_espacos(quant2);
		cout << "-o-o>" << endl;

		//limpa a tela
		system("cls");

		if (quant1 >= 50 || quant2 >= 50)
		{
			// avaliando a condição
			sair = true; 

		}
		// limpando a tela 
		else system("cls");
	}
	// anuciando o fim da corrida
	cout << "CORRIDA FINALIZADA" << endl;

	// imprimir na tela o vencedor da corrida!!
	if (quant1 >= 50) cout <<"PARABENS, CAMPEAO! :  " << jog1 << endl;
	else if (quant2 >= 50) cout << "PARABENS, CAMPEAO! :  " << jog2 << endl;
	else cout << "FIZERA UM FEITO HISTORICO, EMPATE!" << endl;

	return 0;

}
void imprimir_espacos(int total) 
{
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		cout << " ";

	}

}
