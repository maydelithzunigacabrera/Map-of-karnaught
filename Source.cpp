#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;
using namespace System;

void MapaDeKarnaugh2Variable(vector<int> DatosDeVerdad) {

	vector<int> Grupo1, Grupo2;
	int IdentificadorDeFuncion = 0;

	for (int i = 0; i < 2; i++) {
		Grupo1.push_back(DatosDeVerdad[i]);
		Grupo2.push_back(DatosDeVerdad[i + 2]);
	}

	cout << endl << endl;
	cout << "\t X \\ Y      0       1      " << endl;
	cout << "\t   0       [0]     [1]     " << endl;
	cout << "\t   1       [2]     [3]     " << endl;
	cout << endl << endl;

	cout << "\t X \\ Y      0       1      " << endl;
	cout << "\t   0        ";
	if (Grupo1[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[0];
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo1[1] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << "       " << Grupo1[1] << "      " << endl;
	Console::ForegroundColor = ConsoleColor::White;
	cout << "\t   1        ";
	if (Grupo2[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[0];
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[1] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << "       " << Grupo2[1] << "      " << endl;
	Console::ForegroundColor = ConsoleColor::White;
	cout << endl << endl;

	for (int i = 0; i < 2; i++) {
		IdentificadorDeFuncion += Grupo1[i] + Grupo2[i];
	}

	cout << endl << endl;
	Console::ForegroundColor = ConsoleColor::White;
	cout << "\t\t INFORMES:" << endl << endl;

	switch (IdentificadorDeFuncion)
	{
	case 0:
		cout << "No hay agrupaciones" << endl;
		cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = 0" << endl;
		break;
	case 1:
		if (Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'" << endl;
		}
		else if (Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y" << endl;
		}
		else if (Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'" << endl;
		}
		else if (Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY" << endl;
		}
		break;
	case 2:
		if (Grupo1[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X'Y' + XY'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X'Y + XY'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X" << endl;
		}if (Grupo1[0] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    Y'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    Y" << endl;
		}
		break;
	case 3:
		if (Grupo1[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X + Y" << endl;
		}
		else if (Grupo1[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X + Y'" << endl;
		}
		else if (Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X' + Y" << endl;
		}
		else if (Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =    X' + Y'" << endl;
		}
		break;
	case 4:
		cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
		cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = 1" << endl;
		Grupo1 = Grupo2 = { 0,0 };
		break;
	default:
		break;
	}
}

void TablaDeVerdad2(vector<int>DatosDeVerdad) {

	int aux = 0;

	cout << endl << endl;
	cout << "\t X " << "\t Y " << "        f(x,y)" << endl;
	do {
		cout << "\t 0 " << "\t 0 " << "  [0]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0 " << "\t 1 " << "  [1]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1 " << "\t 0 " << "  [2]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1 " << "\t 1 " << "  [3]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);

	MapaDeKarnaugh2Variable(DatosDeVerdad);
}

void MapaDeKarnaugh3Variable(vector<int>DatosDeVerdad) {

	vector<int> Grupo1, Grupo2;
	int IdentificadorDeFuncion = 0;

	for (int i = 0; i < 4; i++) {
		Grupo1.push_back(DatosDeVerdad[i]);
		Grupo2.push_back(DatosDeVerdad[i + 4]);
	}

	cout << endl << endl;
	cout << "\t X \\ YZ      00       01       11       10" << endl;
	cout << "\t   0         [0]      [1]      [2]      [3]" << endl;
	cout << "\t   1         [4]      [5]      [6]      [7]" << endl;
	cout << endl << endl;


	cout << "\t X \\ YZ      00       01       11       10" << endl;
	cout << "\t   0         ";
	if (Grupo1[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[0];
	Console::ForegroundColor = ConsoleColor::White;
	cout << "        ";
	if (Grupo1[1] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[1] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo1[2] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[2] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo1[3] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[3] << endl;
	Console::ForegroundColor = ConsoleColor::White;
	cout << "\t   1         ";
	if (Grupo2[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[0] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[1] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[1] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[2] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[2] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[3] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[3] << endl;
	cout << endl << endl;
	Console::ForegroundColor = ConsoleColor::White;

	for (int i = 0; i < 4; i++) {
		IdentificadorDeFuncion += Grupo1[i] + Grupo2[i];
	}

	cout << endl << endl;
	cout << "\t\t INFORMES:" << endl << endl;

	switch (IdentificadorDeFuncion) {
	case 0:
		cout << "No hay agrupaciones" << endl;
		cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = 0" << endl;
		break;
	case 1:

		if (Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z'" << endl;
		}
		else if (Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z" << endl;
		}
		else if (Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ" << endl;
		}
		else if (Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ'" << endl;
		}
		else if (Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY'Z'" << endl;
		}
		else if (Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY'Z" << endl;
		}
		else if (Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XYZ" << endl;
		}
		else if (Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XYZ'" << endl;
		}
	case 2:
		if (Grupo1[0] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + XY'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + XYZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + XYZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + X'YZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + XY'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + XYZ" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + XYZ'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ + XY'Z'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ + XY'Z" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ + XYZ'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ' + XY'Z'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ' + XY'Z" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ' + XYZ" << endl;
		}
		break;
	case 3:
		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + X'Z" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + X'Y" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + XZ" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ + XY" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + X'YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + XYZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + XYZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + XY'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + Y'Z" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + YZ" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + XYZ'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + X'Y'Z'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + XY'Z'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + XY'Z" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + YZ" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + YZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + Y'Z'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + Y'Z" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + X'YZ" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + X'YZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + XYZ'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ + X'Y'Z'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ + Y'Z" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ + YZ" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ + X'YZ'" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY + X'Y'Z'" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY + X'Y'Z" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY + YZ" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY + YZ'" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY + XY'Z'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + X'YZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + X'YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XYZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XYZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + X'YZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + XYZ'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ + X'Y'Z'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ + XY'Z'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ' + X'Y'Z'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ' + X'Y'Z" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ' + XY'Z'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ' + XY'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ + XYZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ + XYZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ' + XY'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ' + XYZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + XY'Z + XYZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + X'YZ' + XY'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + X'YZ' + XYZ" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X'Y'Z + XY'Z' + XYZ" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + XY'Z' + XYZ'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ + XY'Z' + XYZ'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ' + XY'Z' + XYZ" << endl;
		}
		break;
	case 4:
		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Z" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[2] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + YZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + X'Y' + X'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XY' + XZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + X'Y" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XY" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + YZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + X'Z + X'Y" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z +  XZ + XY" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1 && Grupo1[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + X'Z + YZ" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + XZ + YZ" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + X'Y + YZ'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1 && Grupo1[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + YZ'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY' + YZ'" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XZ + XY + YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z + XZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + XY" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + Y'Z + XY'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + YZ + XY" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + XY'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + YZ + XZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + X'Z + Y'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + X'Z + XYZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z' + X'YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z + X'YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + X'YZ' + XYZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z' + XYZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z' + XYZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y' + Y'Z + XYZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + X'Y + XY'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + X'Y + YZ" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + YZ + XY'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + XY'Z' + XYZ'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Z + Y'Z + XYZ'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo1[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'Y + XY'Z" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo1[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'Y + YZ" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo1[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'Y + XYZ'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + YZ + XY'Z'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + YZ' + XY'Z'" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y + YZ' + XY'Z" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[0] == 1 && Grupo1[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XY' + X'YZ" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[0] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XY' + XZ" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XY' + X'YZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + XY' + XYZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + XY' + XZ" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + XY' + X'YZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + XY' + XYZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ + XY' + XYZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ' + XY' + XZ" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1 && Grupo1[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + YZ + XZ" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ' + XZ" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + XZ + XY" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + XZ + X'YZ'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[1] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z + XZ + XY" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'YZ + XY' + XZ" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ + XZ + XY" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1 && Grupo1[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + YZ + XY" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + YZ' + XY" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + YZ' + XY" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + XY'Z' + XY" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ + XY + XY'Z'" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ' + XY + XY'Z'" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = YZ' + XZ + XY" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + X'YZ + XY'Z + XYZ'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = XY'Z' + X'Y'Z + XYZ + X'YZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + X'YZ + XYZ'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay una agrupaci			" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = Y'Z' + X'YZ' + XYZ" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1 && Grupo2[1] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z' + YZ' + XY'Z" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1) {
			cout << "Hay una agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay una agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = X'Y'Z + YZ' + Y'Z'" << endl;
		}
		break;
	case 5: //Camila
		if (Grupo2[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y'Z'" << endl;
		}
		else if (Grupo2[0] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y'Z" << endl;
		}
		else if (Grupo2[0] == 0 && Grupo2[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + YZ" << endl;
		}
		else if (Grupo2[0] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + YZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + X" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[2] == 0 && Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + X" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    YZ + X" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    YZ' + X" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + X'Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[0] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + Y" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + XZ" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y + XZ" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[0] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + XY + X'Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y + XY' + X'Z" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + XY + Y'Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y + XY' + YZ'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[3] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + XY'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[3] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + XY" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[0] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[0] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + X'Y" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[2] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y'Z + YZ' + XZ' + XY" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + X'Y + XY'Z' + YZ" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + X'YZ' + XY' + XZ" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + X'Z' + Y'Z' + XYZ" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[0] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + X'Y + XY'Z + YZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[3] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y'Z' + YZ + XZ + XY" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[0] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    XY' + X'Z + Y'Z + XYZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[3] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + X'YZ + XY' + XZ'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + XZ' + X'Y" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[3] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + XZ' + YZ" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[3] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + XZ + Y'Z" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + XZ' + X'Y'" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[0] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + XY + X'Z'" << endl;
		}

		else if (Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + XY + Y'Z'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y + XY' + X'Z'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y + XY' + YZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + XZ + YZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[0] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + XZ + X'Y" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[0] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + XZ + X'Y'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + XZ + Y'Z'" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + XZ'" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + X'Z'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[0] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + Y" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y + XZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + X'Y" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + XY" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + Z'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + XY'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[0] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + YZ' + X'Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[2] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + YZ' + XZ" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + YZ + X'Y'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[3] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + YZ + XY'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[2] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + YZ' + XY'" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[0] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + YZ' + X'Y'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[3] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + YZ + XZ'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + YZ + X'Z'" << endl;
		}
		break;
	case 6: //Camila
		if (Grupo1[0] == 0 && Grupo1[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y + X" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + X" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + X" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z + YZ' + X" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y'Z' + YZ + X" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + X" << endl;
		}

		if (Grupo2[0] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y" << endl;
		}
		else if (Grupo2[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Z'" << endl;
		}
		else if (Grupo2[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y'" << endl;
		}
		else if (Grupo2[0] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y'Z + YZ'" << endl;
		}
		else if (Grupo2[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y'Z' + YZ" << endl;
		}
		else if (Grupo2[0] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + Y" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + Y" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + Z'" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + Z" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + Y + XZ'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z + YZ' + XY'" << endl;
		}
		else if (Grupo1[0] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + X'Y + XY'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + Y + XZ" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + X'Y + XY'" << endl;
		}
		else if (Grupo1[1] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Z' + YZ + XY'" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + YZ' + XZ" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + Z' + XY" << endl;
		}
		else if (Grupo1[2] == 0 && Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + X'Z' + XZ" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + Z + XY" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X'Y' + YZ + XZ'" << endl;
		}
		else if (Grupo1[3] == 0 && Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + X'Z + XZ'" << endl;
		}
		break;
	case 7: //Camila
		if (Grupo1[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z + Y + Z" << endl;
		}
		else if (Grupo1[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + Y + X" << endl;
		}
		else if (Grupo1[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Z' + Y' + X" << endl;
		}
		else if (Grupo1[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    Y' + Z' + X" << endl;
		}
		else if (Grupo2[0] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Z + Y" << endl;
		}
		else if (Grupo2[1] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Z'+ Y" << endl;
		}
		else if (Grupo2[2] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y' + Z'" << endl;
		}
		else if (Grupo2[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162)
				<< "n de la funci" << char(162) << "n =    X' + Y' + Z" << endl;
		}
		break;
	case 8:
		cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3,4,5,6,7]" << endl;
		cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = 1" << endl;
		Grupo1 = Grupo2 = { 0,0,0,0 };
		break;
	default:
		break;
	}
}

void TablaDeVerdad3(vector<int>DatosDeVerdad) {
	int aux = 0;

	cout << endl << endl;
	cout << "\t X " << "\t Y " << "\t Z " << "        f(x,y,z)" << endl;
	do {
		cout << "\t 0 " << "\t 0 " << "\t 0 " << "  [0]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0 " << "\t 0 " << "\t 1 " << "  [1]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0 " << "\t 1 " << "\t 0 " << "  [2]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0 " << "\t 1 " << "\t 1 " << "  [3]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1 " << "\t 0 " << "\t 0 " << "  [4]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1 " << "\t 0 " << "\t 1 " << "  [5]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1 " << "\t 1 " << "\t 0 " << "  [6]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1 " << "\t 1 " << "\t 1 " << "  [7]      ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);

	MapaDeKarnaugh3Variable(DatosDeVerdad);
}

void MapaDeKarnaugh4Variable(vector<int> DatosDeVerdad)
{
	vector<int> Grupo1, Grupo2, Grupo3, Grupo4;
	int IdentificadorDeFuncion = 0;

	for (int i = 0; i < 4; i++) {
		Grupo1.push_back(DatosDeVerdad[i]);
	    Grupo2.push_back(DatosDeVerdad[i + 4]);
		Grupo3.push_back(DatosDeVerdad[i + 8]);
		Grupo4.push_back(DatosDeVerdad[i + 12]);
	}

	cout << endl << endl;
	cout << "\t XY \\ ZW      00       01       11       10" << endl;
	cout << "\t   00         [0]     [1]      [2]      [3]" << endl;
	cout << "\t   01         [4]     [5]      [6]      [7]" << endl;
	cout << "\t   11         [8]     [9]     [10]     [11]" << endl;
	cout << "\t   10        [12]    [13]     [14]     [15]" << endl;
	cout << endl << endl;

	if (Grupo1[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[0];
	Console::ForegroundColor = ConsoleColor::White;


	cout << "\t XY \\ ZW      00       01       11       10" << endl;
	cout << "\t   00          ";
	if (Grupo1[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[0] << "       ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo1[1] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[1] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo1[2] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[2] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo1[3] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo1[3] << "      " << endl;
	Console::ForegroundColor = ConsoleColor::White;
	cout << "\t   01          ";
	if (Grupo2[0] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[0] << "       ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[1] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[1] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[2] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[2] << "        ";
	Console::ForegroundColor = ConsoleColor::White;
	if (Grupo2[3] == 1) Console::ForegroundColor = ConsoleColor::Yellow;
	cout << Grupo2[3] << "      " << endl;
	Console::ForegroundColor = ConsoleColor::White;
	cout << "\t   11          ";

	cout << Grupo3[0] << "       ";


	cout << Grupo3[1] << "        ";


	cout << Grupo3[2] << "        " << Grupo3[3] << "      " << endl;;
	cout << "\t   10          " << Grupo4[0] << "       " << Grupo4[1] << "        " << Grupo4[2] << "        " << Grupo4[3] << "      " << endl;;
	cout << endl << endl;

	for (int i = 0; i < 16; i++) {
		IdentificadorDeFuncion += DatosDeVerdad[i];
	}

	cout << endl << endl;
	cout << "\t\t INFORMES:" << endl << endl;

	switch (IdentificadorDeFuncion)
	{
	case 0:
		cout << "No hay agrupaciones" << endl;
		cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n = 0" << endl;
		break;
	case 1:
		if (Grupo1[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'Z'W'" << endl;
		}
		else if (Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'Z'W" << endl;
		}
		else if (Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'ZW" << endl;
		}
		else if (Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'ZW'" << endl;
		}
		else if (Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YZ'W'" << endl;
		}
		else if (Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YZ'W" << endl;
		}
		else if (Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YZW" << endl;
		}
		else if (Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YZW'" << endl;
		}
		else if (Grupo3[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYZ'W'" << endl;
		}
		else if (Grupo3[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYZ'W" << endl;
		}
		else if (Grupo3[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYZW" << endl;
		}
		else if (Grupo3[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYZW'" << endl;
		}
		else if (Grupo4[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'Z'W'" << endl;
		}
		else if (Grupo4[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'Z'W" << endl;
		}
		else if (Grupo4[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'ZW" << endl;
		}
		else if (Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'ZW'" << endl;
		}
		break;

	case 2:

		if (Grupo1[0] == 1 && Grupo1[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'Z'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'W" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y'Z" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YZ'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YW" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'YZ" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYZ'" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYW" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XYZ" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'Z'" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'W" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Z'W'" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Z'W" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'ZW" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'ZW'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YZ'W'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YZ'W" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YZW" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YZW'" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XZ'W'" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XZ'W" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XZW" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XZW'" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}

		if (Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		break;

	case 3:

		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
		}

		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}

		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}

		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13,14]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14,15]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}

		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}

		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}

		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}

		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}

		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}

		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1,13]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}

		if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12,15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12,15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo3[1] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo3[1] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo3[2] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12,15]" << endl;
		}

		if (Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		break;

	case 4:

		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,5,9,13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,6,10,14]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo4[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo4[3] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo4[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo4[1] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo4[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo4[3] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo3[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}
		else if (Grupo4[3] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}

		if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8,9]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9,10]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5,6]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10,11]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}

		if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4,7]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6,7]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}

		if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8,11]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10,11]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,15]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}



		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9,13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
		}

		if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [13,14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [14,15]" << endl;
		}



		if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		break;

	case 5:
		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [9]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [11]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}

		if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,5]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,6]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,7]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [12]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [13]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [14]" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [15]" << endl;
		}

		if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [1]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [3]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7,11]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10,14]" << endl;
		}
		else if (Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}

		if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo1[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [4]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [6]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo2[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[0] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[1] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [9,13]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[2] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [10,14]" << endl;
		}
		else if (Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1 && Grupo3[3] == 1)
		{
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
		}
		break;

	case 6:
		if (Grupo1[0] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 1: [0]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 1: [10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X'Y'Z'W' + X'Y'ZW + X'YZ'W + X'YZW' + XYZ'W' + XYZW" << endl;
		}


	case 10:
		if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X' + Z'" << endl;
		} 
		else if (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X'Z + X'W + Z'Y + YW" << endl;
		}
		else if (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y + X'Z" << endl;
		}
		else if (Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y + X'ZW + XZ'W'" << endl;
		}
		else if (Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y + XZ'" << endl;
		}
		else if (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [9,10,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  YW + YZ + XZ' + XW" << endl;
		}
		else if (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [9,10,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X + YZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [12,0]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X + YZW' + Y'Z'W'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X + Y'Z'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,0,1]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [13,14,1,2]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  XW + XZ + Y'Z' + Y'W" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [12,13,14,15,0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y' + XZ" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [12,13,14,15,0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,4]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y' + X'Z'W' + XZW'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [12,13,14,15,0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y' + X'Z'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [13,14,1,2]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [14,15,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  Y'W + Y'Z + X'Z' + X'W" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [14,15,2,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X' + Y'Z" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [15,3]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X' + YZ'W' + Y'ZW'" << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,5,8,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =  X' + YZ'" << endl;
		}
		break;


	case 11: {


		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + YZ' + YW " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + YW + YZ  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + YZ' + YW' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) && (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + YW' + YZ " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z' + Y'W  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1) && (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W + Y'Z  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z' + Y'W'  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) && (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W' + Y'Z  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) && (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Z' + X'W + Y  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1) && (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'W + X'Z + Y  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1) && (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,4,5]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Z' + X'W' + Y  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[3] == 1) && (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,4,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'W' + X'Z + Y  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [9,10,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y + XZ' + XW  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1) && (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [9,10,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y + XW + XZ  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo3[0] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,11,12,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y + XZ' + XW'  " << endl;
		}
		else if ((Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) &&
			(Grupo3[0] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1) && (Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y + XW' + XZ  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y'Z' + Y'W + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1) && (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y'W + Y'Z + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y'Z' + Y'W' + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) && (Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y'W' + Y'Z + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YZ' + YW + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YW + YZ + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YZ' + YW' + X  " << endl;
		}
		else if ((Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) &&
			(Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) && (Grupo2[0] == 1 && Grupo2[3] == 1 && Grupo3[0] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   YW' + YZ + X  " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo1[2] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'ZW + YZ' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo1[3] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'ZW' + YZ' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo1[0] == 1 && Grupo4[0] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W' + YW " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo1[3] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'ZW' + YW " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) && (Grupo1[0] == 1 && Grupo4[0] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W' + YZ " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) && (Grupo1[1] == 1 && Grupo4[1] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W + YZ " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo2[0] == 1 && Grupo3[0] == 1) && (Grupo2[2] == 1 && Grupo3[2] == 1) && (Grupo1[1] == 1 && Grupo4[1] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W + YZ'W' + YZW " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo2[1] == 1 && Grupo3[1] == 1) && (Grupo2[3] == 1 && Grupo3[3] == 1) && (Grupo1[2] == 1 && Grupo4[2] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'ZW + YZ'W + YZW' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo2[0] == 1 && Grupo3[0] == 1) && (Grupo2[3] == 1 && Grupo3[3] == 1) && (Grupo1[1] == 1 && Grupo4[1] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W + YW'  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo2[0] == 1 && Grupo3[0] == 1) && (Grupo2[3] == 1 && Grupo3[3] == 1) && (Grupo1[2] == 1 && Grupo4[2] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'ZW + YW'  " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Z'W' + YZ' " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo3[0] == 1 && Grupo3[1] == 1) && (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,5,9,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Z'W + YZ' " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,5,9,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Z'W + YW " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1) && (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,6,10,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + ZW + YW " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) && (Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,6,10,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + ZW + YZ " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo2[2] == 1 && Grupo2[3] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1) && (Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + ZW' + YZ " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo2[2] == 1 && Grupo3[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z' + YZW " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1) && (Grupo2[3] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z' + YZW' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1) && (Grupo2[0] == 1 && Grupo3[0] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W + YZ'W' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1) && (Grupo2[3] == 1 && Grupo3[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [7,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W + YZW' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) && (Grupo2[0] == 1 && Grupo3[0] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [4,8]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z + YZ'W' " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) && (Grupo2[1] == 1 && Grupo3[1] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z + YZ'W " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo1[0] == 1 && Grupo4[0] == 1) && (Grupo2[1] == 1 && Grupo3[1] == 1) && (Grupo1[2] == 1 && Grupo4[2] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [0,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [2,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W' + Y'ZW + YZ'W  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo1[1] == 1 && Grupo4[1] == 1) && (Grupo2[2] == 1 && Grupo3[2] == 1) && (Grupo1[3] == 1 && Grupo4[3] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [1,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [3,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z'W + Y'ZW' + YZW  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1) && (Grupo2[1] == 1 && Grupo3[1] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [5,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W' + YZ'W  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo4[0] == 1 && Grupo4[3] == 1) && (Grupo2[2] == 1 && Grupo3[2] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,3,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 2: [6,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W' + YZW  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo1[0] == 1 && Grupo2[0] == 1 && Grupo3[0] == 1 && Grupo4[0] == 1) && (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,,12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z' + Z'W'  " << endl;
		}
		else if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			((Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1) && (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1))) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,5,9,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z' + Z'W  " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[1] == 1 && Grupo2[1] == 1 && Grupo3[1] == 1 && Grupo4[1] == 1) && (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,5,9,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W + Z'W " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1) && (Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,6,10,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'W + ZW " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[2] == 1 && Grupo2[2] == 1 && Grupo3[2] == 1 && Grupo4[2] == 1) && (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,6,10,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z + ZW " << endl;
		}
		if ((Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1) &&
			(Grupo1[3] == 1 && Grupo2[3] == 1 && Grupo3[3] == 1 && Grupo4[3] == 1) && (Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1)) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'Z + ZW' " << endl;
		}







	}

	case 12:
		if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 0 && Grupo4[2] == 0 && Grupo4[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y     " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Z + W     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Z + W'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Z' + W'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Z' + W     " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Z     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + W'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Z'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y' + Z     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y' + W'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 0 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y' + Z'     " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 0 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Z      " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + W'      " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + z'      " << endl;
		}
		break;

	case 13:
		if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + ZW' " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,12]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + Z'W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y' + ZW'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 0 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y' + Z'W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y' + ZW'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y' + Z'W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 0 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + ZW'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 0 && Grupo4[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,4,8,12]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + Z'W'  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY' + Z + W  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y' + Z + W  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY' + Z + W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y' + Z + W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY' + Z' + W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [0,1,2,3]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'Y' + Z' + W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + Z' + W  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + Z' + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Yw + Z  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Yw' + Z  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [6,7,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + YZ + W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + YZ' + W'  " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 0 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [5,6,9,10]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + YW + Z'  " << endl;
		}





		break;

	case 14:
		if (Grupo1[0] == 0 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + Z " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,5,9,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + Z'W + ZW'  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Z + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + YW' + Z + Y'W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y'W + ZW' + YZ'  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + YZ' + Y'Z + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY' + X'Y + Z + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY' + YW' + X'W + Z  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,7,8,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'W + Y'Z + YW' + XZ'  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [4,5,8,9]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XY' + YZ' + X'Z + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   Y + Z + W  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X'W + Z + Y + XW'  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [3,7,11,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [1,2,5,6]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XZ' + ZW' + X'W + Y  " << endl;
		}
		else if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 4: [2,3,6,7]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 4: [8,9,12,13]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   XZ' + Y + X'Z + W  " << endl;
		}


		break;

	case 15:
		if (Grupo1[0] == 0 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + W + Z " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 0 && Grupo1[2] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + W' + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[2] == 0 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + W' + Z' " << endl;
		}
		else if (Grupo1[0] == 1 && Grupo1[1] == 1 && Grupo1[2] == 1 && Grupo1[3] == 0 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y + Z' + W " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 0 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y' + W + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 0 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y' + W' + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 0 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y' + W' + Z' " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 0 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [8,9,10,11,12,13,14,15]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X + Y' + Z' + W " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 0 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y' + W + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 0 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y' + W' + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 0 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y' + W' + Z' " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 0 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,12,13,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y' + W + Z' " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 0 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + W + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 0 && Grupo4[2] == 1 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [2,3,6,7,10,11,14,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + W' + Z " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 0 && Grupo4[3] == 1) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,3,4,7,8,11,12,15]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + W' + Z' " << endl;
		}
		else if (Grupo1[1] == 1 && Grupo1[1] == 1 && Grupo1[0] == 1 && Grupo1[3] == 1 && Grupo2[0] == 1 && Grupo2[1] == 1 && Grupo2[2] == 1 && Grupo2[3] == 1 &&
			Grupo3[0] == 1 && Grupo3[1] == 1 && Grupo3[2] == 1 && Grupo3[3] == 1 && Grupo4[0] == 1 && Grupo4[1] == 1 && Grupo4[2] == 1 && Grupo4[3] == 0) {
			cout << "Hay agrupaci" << char(162) << "n de 8: [1,2,5,6,9,10,13,14]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,4,5,8,9,12,13]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [4,5,6,7,8,9,10,11]" << endl;
			cout << "Hay agrupaci" << char(162) << "n de 8: [0,1,2,3,4,5,6,7]" << endl;
			cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   X' + Y + W + Z' " << endl;
		}
		break;

	case 16:
		cout << "Hay agrupaci" << char(162) << "n de 16: [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]" << endl;
		cout << "Simplificaci" << char(162) << "n de la funci" << char(162) << "n =   1 " << endl;
		break;
	}
}

void TablaDeVerdad4(vector<int>DatosDeVerdad)
{
	int aux = 0;
	cout << endl << endl;
	cout << "\t X " << "\t Y" << "\t Z" << "\t W" << "             f (x,y,z,w)" << endl;
	do {
		cout << "\t 0" << "\t 0" << "\t 0" << "\t 0" << "   [0]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 0" << "\t 0" << "\t 1" << "   [1]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 0" << "\t 1" << "\t 0" << "   [2]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 0" << "\t 1" << "\t 1" << "   [3]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 1" << "\t 0" << "\t 0" << "   [4]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 1" << "\t 0" << "\t 1" << "   [5]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 1" << "\t 1" << "\t 0" << "   [6]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 0" << "\t 1" << "\t 1" << "\t 1" << "   [7]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 0" << "\t 0" << "\t 0" << "   [8]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 0" << "\t 0" << "\t 1" << "   [9]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 0" << "\t 1" << "\t 0" << "  [10]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 0" << "\t 1" << "\t 1" << "  [11]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 1" << "\t 0" << "\t 0" << "  [12]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 1" << "\t 0" << "\t 1" << "  [13]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 1" << "\t 1" << "\t 0" << "  [14]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);
	do {
		cout << "\t 1" << "\t 1" << "\t 1" << "\t 1" << "  [15]          ";
		cin >> aux;
	} while (!(aux == 0 || aux == 1));
	DatosDeVerdad.push_back(aux);

	MapaDeKarnaugh4Variable(DatosDeVerdad);

}

int main() {

	vector<int> DatosDeVerdad;
	int opc;

	cout << endl << endl << endl;
	cout << "\t\tMENU - Mapa de Karnaugh" << endl << endl;
	cout << "\t\t\t1) Realizar mapa de 2 variables" << endl;
	cout << "\t\t\t2) Realizar mapa de 3 variables" << endl;
	cout << "\t\t\t3) Realizar mapa de 4 variables" << endl;
	cout << "\t\t\t4) Salir" << endl << endl;
	do {
		cout << "Ingrese la opci" << char(162) << "n que desea : ";
		cin >> opc;
	} while (opc < 1 || opc > 4);

	switch (opc) {
	case 1:
		system("cls");
		TablaDeVerdad2(DatosDeVerdad);
		break;
	case 2:
		system("cls");
		TablaDeVerdad3(DatosDeVerdad);
		break;
	case 3:
		system("cls");
		TablaDeVerdad4(DatosDeVerdad);
		break;
	}
	char g = _getch();
	return 0;
}
