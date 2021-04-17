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
int pilihhari() {
	int hari;
	cout << endl;
	cout << endl;
	cout << "\t\t\tPilih hari?" << "\n\t\t\t1.Senin" << "\n\t\t\t2.Selasa" << "\n\t\t\t3.Rabu" << "\n\t\t\t4.Kamis" << "\n\t\t\t5.Jumat" << "\n\t\t\t6.Sabtu" << "\n\t\t\t7.Minggu\n";
	cout << "\t\t\tMasukan Pilihan Angka : "; cin >> hari;//harga hari senin-kamis normal ,jumat +5000,sabtu/minggu +10,000
	while (hari < 1 || hari>7) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> hari; }
	if (hari == 1) {
		hari2 = "Senin ";
	}
	else
		if (hari == 2) {
			hari2 = "Selasa";
		}
		else
			if (hari == 3) {
				hari2 = "Rabu  ";
			}
			else
				if (hari == 4) {
					hari2 = "Kamis ";
				}
				else
					if (hari == 5) {
						hari2 = "Jumat ";
					}
					else
						if (hari == 6) {
							hari2 = "Sabtu ";
						}
						else { hari2 = "Minggu"; }

	return hari;
}
int pilihhari() {
	int hari;
	cout << endl;
	cout << endl;
	cout << "\t\t\tPilih hari?" << "\n\t\t\t1.Senin" << "\n\t\t\t2.Selasa" << "\n\t\t\t3.Rabu" << "\n\t\t\t4.Kamis" << "\n\t\t\t5.Jumat" << "\n\t\t\t6.Sabtu" << "\n\t\t\t7.Minggu\n";
	cout << "\t\t\tMasukan Pilihan Angka : "; cin >> hari;//harga hari senin-kamis normal ,jumat +5000,sabtu/minggu +10,000
	while (hari < 1 || hari>7) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> hari; }
	if (hari == 1) {
		hari2 = "Senin ";
	}
	else
		if (hari == 2) {
			hari2 = "Selasa";
		}
		else
			if (hari == 3) {
				hari2 = "Rabu  ";
			}
			else
				if (hari == 4) {
					hari2 = "Kamis ";
				}
				else
					if (hari == 5) {
						hari2 = "Jumat ";
					}
					else
						if (hari == 6) {
							hari2 = "Sabtu ";
						}
						else { hari2 = "Minggu"; }

	return hari;
}
int jadwalfilm(int film) {
	int jd;
	if (film == 1) {

		cout << "\n\n\t\t\tPilih Jam Tayang : ";
		cout << "\n\t\t\t1. 07.00\n\t\t\t2. 13.00";
		cout << "\n\t\t\tMasukan Angka Yang Dipilih : "; cin >> jd;
		while (jd < 1 || jd>2) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jd; }
		switch (jd)
		{
		case 1:
			jam = "07.00";
			break;
		case 2:
			jam = "13.00";
			break;
		}
	}

	if (film == 2)
	{
		cout << "\n\t\t\tPilih Jam Tayang : ";
		cout << "\n\t\t\t1. 08.30\n\t\t\t2. 14.30";
		cout << "\n\t\t\tMasukan Angka Yang Dipilih : "; cin >> jd;
		while (jd < 1 || jd>2) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jd; }
		switch (jd)
		{
		case 1:
			jam = "08.30";
			break;
		case 2:
			jam = "14.30";
			break;

		}
	}

	if (film == 3)
	{
		cout << "\n\t\t\tPilih Jam Tayang : ";
		cout << "\n\t\t\t1. 10.00\n\t\t\t2. 16.00";
		cout << "\n\t\t\tMasukan Angka Yang Dipilih : "; cin >> jd;
		while (jd < 1 || jd>2) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jd; }
		switch (jd)
		{
		case 1:
			jam = "10.00";
			break;
		case 2:
			jam = "16.00";
			break;

		}
	}

	if (film == 4) {

		cout << "\n\n\t\t\tPilih Jam Tayang : ";
		cout << "\n\t\t\t1. 19.00\n\t\t\t2. 22.00";
		cout << "\n\t\t\tMasukan Angka Yang Dipilih : "; cin >> jd;
		while (jd < 1 || jd>2) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jd; }
		switch (jd)
		{
		case 1:
			jam = "19.00";
			break;
		case 2:
			jam = "22.00";
			break;
		}

	}
	if (film == 5) {

		cout << "\n\n\t\t\tPilih Jam Tayang : ";
		cout << "\n\t\t\t1. 20.30\n\t\t\t2. 23.30";
		cout << "\n\t\t\tMasukan Angka Yang Dipilih : "; cin >> jd;
		while (jd < 1 || jd>2) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jd; }
		switch (jd)
		{
		case 1:
			jam = "20.30";
			break;
		case 2:
			jam = "23.30";
			break;
		}

	}

	if (film == 6)
	{
		cout << "\n\t\t\tPilih Jam Tayang : ";
		cout << "\n\t\t\t1. 11.30\n\t\t\t2. 17.30";
		cout << "\n\t\t\tMasukan Angka Yang Dipilih : "; cin >> jd;
		while (jd < 1 || jd>2) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jd; }
		switch (jd)
		{
		case 1:
			jam = "11.30";
			break;
		case 2:
			jam = "17.30";
			break;
		}

	}

	return film;
}
int jadwalstudio(int film) {
	int harga[3];
	int studio;
	string studio1 = "Reguler";//harga=Rp.35.000,00
	string studio2 = "4DXD   ";//harga=Rp.75.000,00
	string studio3 = "SphereX";//harga=Rp.50.000,00
	harga[0] = 35000;
	harga[1] = 75000;
	harga[2] = 50000;

	cout << "\n\n\t\t\tPilih studio untuk film ini";
	cout << "\n\t\t\t1." << studio1 << "\n\t\t\t2." << studio2 << "\n\t\t\t3." << studio3;
	cout << "\n\t\t\tMasukan angka plihan : "; cin >> studio;
	while (studio < 0 || studio>3) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> studio; }
	switch (studio) {
	case 1:
		studio = harga[0];
		jstudio = studio1;
		break;
	case 2:
		studio = harga[1];
		jstudio = studio2;
		break;
	case 3:
		studio = harga[2];
		jstudio = studio3;
		break;
	}
	return studio;
}

int pilihkursi() {
	char a[25][25], d[25][25];
	int kolom = 3, baris = 3, i, b, jmltiket;

	//pembuatan array kursi
	for (i = 1; i <= baris; i++) { //kolom
		for (b = 1; b <= kolom; b++) { //baris
			a[i][b] = '*';//digunakan untuk menampilkan kursi yang tersedia
			d[i][b] = ' ';//digunakan untuk menampilkan kursi yang dipilih
		}
	}

	cout << "\n\n\t\t\tPemesanan Tiket \n";
	cout << "\n\t\t\tMasukan jumlah tiket yang akan dibeli (maksimal 9 tiket): "; cin >> jmltiket;
	while (jmltiket < 1 || jmltiket>9) { cout << "\t\t\tAngka yang anda masukkan salah silahkan masukan ulang : "; cin >> jmltiket; }


	//untuk menampilkan kursi dalam bentuk array 2 dimensi
	cout << endl << "\t\t\tKursi Yang Tersedia Adalah: " << endl << endl;
	for (i = 1; i <= baris; i++) { //kolom
		for (b = 1; b <= kolom; b++) { //baris   
			cout << "\t" << "\t\t\t|" << a[i][b] << "|";
		}
		cout << endl;
	}
	//untuk memilih kursi yang bakal dipilih
	cout << "\t\t\tPilih letak kursi";
	if (jmltiket >> 1) cout << "\n\t\t\tPilih letak kursi yang berbeda dari pesanan sebelumnya";
	for (int j = 0; j < jmltiket; j++)
	{
		cout << "\n\t\t\tBaris berapa? "; cin >> i;
		while (i < 1 || i>3) { cout << "\t\t\tAngka yang anda masukan salah, silahkan masukan kembali : "; cin >> i; }
		cout << "\t\t\tKolom berapa? "; cin >> b;
		while (b < 1 || b>3) { cout << "\t\t\tAngka yang anda masukan salah, silahkan masukan kembali : "; cin >> b; }
		//agar pemilihan kursi tidak lebih dari batas baris dan kolom

		a[i][b] = ' ';//dibuat kosong karena kursi telah dipilih
		d[i][b] = '*';//dibuat bintang karena kursi telah dipilih

	}
	cout << endl << "\t\t\tKursi Yang Kamu Pilih: " << endl << endl;
	for (i = 1; i <= baris; i++) { //kolom
		for (b = 1; b <= kolom; b++) { //baris
			cout << "\t" << "\t\t\t|" << d[i][b] << "|";
		}
		cout << endl;

	}
	cout << "\n\t\t\tTerimakasih telah memesan tiket";
	getchar();

	for (i = 1; i <= baris; i++) { //kolom
		for (b = 1; b <= kolom; b++) { //baris
			letakkursi[i][b] = d[i][b];
		}
	}
	return jmltiket;


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
