import percobaan2
#Function dengan non return type
def non_return_func(praktikan1, praktikan2, praktikan3, praktikan4):
    print(f"Selamat Datang di Praktikum DKP 2021 {praktikan1}, {praktikan2}, {praktikan3} dan {praktikan4}")

#Function dengan return type
def return_func(shift):
    print(f"Shift kalian adalah ", shift)
    if (shift == 1) or (shift == 2) :
        return print(f"Fungsi return mengembalikan nilai menjadi ", shift * 2)
    else:
        return print("Tidak ada shift tersebut")

#Function dengan Arbitrary Type
def arbitrary_func(*penutup):
    for nama in penutup:
        print("Terimakasih", nama)

#Anonymous Function
anonim_func = lambda praktikan1, praktikan2, praktikan3, praktikan4, kelompok: print(f"Ini adalah percobaan {praktikan1}, {praktikan2}, {praktikan3} dan {praktikan4} kelompok ", kelompok )

#Pemanggilan Fungsi
non_return_func("Fauzan", "Mirza", "Dimsa", "Reindrow")
return_func(2)
anonim_func("Fauzan", "Mirza", "Dimsa", "Reindrow",32)

#membuat object
p1 = percobaan2.contoh_method("Fauzan","Mirza","Dimsa","Reindrow")

#memanggil method dengan self parameter
p1.mulai()

#memanggil method dengan parameter
p1.selesai(3)

#arbitrary_func("nama 1", "nama2", "nama 3", "nama 4")