class contoh_method:
    #init method
  def __init__(self, praktikan1, praktikan2, praktikan3, praktikan4):
    self.praktikan1 = praktikan1
    self.praktikan2 = praktikan2
    self.praktikan3 = praktikan3
    self.praktikan4 = praktikan4

    #self parameter
  def mulai(self):
    print(f"Selamat Datang di Percobaan 2 {self.praktikan1}, {self.praktikan2}, {self.praktikan3} dan {self.praktikan4}")

    #method dengan parameter
  def selesai(self, waktu):
    print("Percobaan akan selesai dalam :")
    while waktu > 0:
      print(waktu)
      waktu -= 1


