// PRAK_DKP_MODUL4_KELOMPOK32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

char letakkursi[25][25];
string jstudio, jfilm, jam, hari2;//untuk dipakai di pencetakan tiket
int pilihfilm() {
	int film;
	cout << endl;
	cout << endl;
	cout << "\t\t\tPilih judul film berikut ini : " << "\n\t\t\t1.Interstellar" << "\n\t\t\t2.How To Train Your Dragon" << "\n\t\t\t3.Johnny English Reborn" << "\n\t\t\t4.TinTin" << "\n\t\t\t5.Stand By Me Doraemon 2" << "\n\t\t\t6.Terminator\n";
	cout << "\t\t\tMasukan Pilihan Angka : "; cin >> film;
	while (film < 0 || film>6) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> film; }
	switch (film) {
	case 1:
		jfilm = "Interstellar";
		break;
	case 2:
		jfilm = "How To Train Your Dragon\t  ";
		break;
	case 3:
		jfilm = "Johnny English Reborn";
		break;
	case 4:
		jfilm = "TinTin\t\t  ";
		break;
	case 5:
		jfilm = "Stand By Me Doraemon 2\t  ";
		break;
	case 6:
		jfilm = "Terminator\t  ";
		break;

	}

	return film;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
