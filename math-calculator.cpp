#include <iostream>
using namespace std;

///*******************************************************
void moja_funkcja()
{
	cout << "[1] - dodawanie" << endl;
	cout << "[2] - odejmowanie" << endl;
	cout << "[3] - mnozenie" << endl;
	cout << "[4] - dzielenie" << endl;
	cout << "[0] - wyjscie z programu" << endl;
}
int dodawanie(int x, int y)
{
	return x + y;
}
int odejmowanie(int x, int y)
{
	return x - y;
}
int mnozenie(int x, int y)
{
	return x*y;
}
int dzielenie(int x, int y)
{
	return x / y*1.0;
}
///*******************************************************
int main()
{
	cout << "W programie sa dostepne nastepujace opcje: " << endl;
	int liczba;
	do
	{
		moja_funkcja();
		cin >> liczba;
		switch (liczba)
		{
		case 1:
		{
			int x, y;
			cout << "Podaj pierwsza liczbe: ";
			cin >> x;
			cout << "\nPodaj druga liczbe: ";
			cin >> y;
			cout << "Wynik dodawania liczb " << x << " i " << y << " wynosi : " << dodawanie(x, y) << endl;
			cout << endl;
			break;
		}
		case 2:
		{
			int x, y;
			cout << "Podaj pierwsza liczbe: ";
			cin >> x;
			cout << "\nPodaj druga liczbe: ";
			cin >> y;
			cout << "Wynik dodawania liczb " << x << " i " << y << " wynosi : " << odejmowanie(x, y) << endl;
			cout << endl;
			break;
		}
		case 3:
		{
			int x, y;
			cout << "Podaj pierwsza liczbe: ";
			cin >> x;
			cout << "\nPodaj druga liczbe: ";
			cin >> y;
			cout << "Wynik dodawania liczb " << x << " i " << y << " wynosi : " << mnozenie(x, y) << endl;
			cout << endl;
			break;
		}
		case 4:
		{
			int x, y;
			cout << "Podaj pierwsza liczbe: ";
			cin >> x;
			cout << "\nPodaj druga liczbe: ";
			cin >> y;
			if (y == 0)
			{
				while (y == 0)
				{
					cout << "Nie wolno dzieliæ przez 0!\nPodaj jeszcze raz liczbe: ";
					cin >> y;
				}
			}
			cout << "\nWynik dzielenia liczb " << x << " i " << y << " wynosi : " << dzielenie(x, y) << endl;
			cout << endl;
			break;
		}
		}
	} while (liczba != 0);

	system("pause");
	return 0;
}