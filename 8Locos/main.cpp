#include<iostream>
using namespace std;

class Carta{
public:
	int id;
	char palo;
	char numero;
	Carta *next;
	Carta(char _palo, char _numero, int _id) {
		palo = _palo;
		id = _id;
		numero = _numero;
	};
};
class Jugador{
public:
	int score;
	ListaDeCartas Mano;
	void CojerCarta(ListaDeLaBaraja Baraja) {
		char palotemporal=Baraka.head.palo;
		char numeroTemporal= Baraka.head.numero;
		int idTemporal= Baraka.head.id;
		Carta Tempo(palotemporal, numeroTemporal, idTemporal);
		Mano.Insert( );

	}
	void PonerCarta(int posicion) {
		Carta **p;
		p = ListaDeCartas.head;
		for (int i = 0; i < posicion; i++) {
			p = &(*p)->next;
		}
	}
	int CalcularScore() { }
};

int main() {
	cout << "Ingrese el Numero de Jugadores: ";
	int NumeroDeJugadores;
	cin >> NumeroDeJugadores;
	while (NumeroDeJugadores<2) {
		cout << "El numero de jugadores tiene que ser minimo de 2 jugadores" << endl;
		cout << "Ingrese el Numero de Jugadores: ";
		cin >> NumeroDeJugadores;
	}
	system("pause");
	return 0;
}