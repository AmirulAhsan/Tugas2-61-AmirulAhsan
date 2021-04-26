#include <stdio.h>
#include <stdlib.h>

int main() {
  char ulang,y='y',t='t';
  int pilihan;
  int konsol,game;
  int a,b,c;
  int total,bayar,kembali,kurang,harga;

  printf("\n \t ======== SELAMAT DATANG DI TOKO GAME CHARGE 87 ========\n");
  awal:; // fungsi awal
  printf("\n 1. Konsol Game \n 2. Video Games \n 3. EXIT\n");
  printf("\n Masukkan Pilihan Anda :");scanf("%d",&pilihan);

  switch(pilihan){

  case 1 :

    printf("\n Daftar Konsol Game di toko Kami :\n");
    printf("\n +-----------------------------------------------+");
    printf("\n | Konsol \t\t\t Harga \t\t |");
    printf("\n +-----------------------------------------------+");
    printf("\n | 1. Xbox series X \t\t Rp 10.000.000,- |");
    printf("\n | 2. Nintendo Switch \t\t Rp 6.000.000,-  |");
    printf("\n | 3. Nvidia Shield \t\t Rp 5.000.000,-  |");
    printf("\n | 4. PS4 \t\t\t Rp 7.000.000,-  |");
    printf("\n | 5. PS5  \t\t\t Rp 11.000.000,- |");
    printf("\n +-----------------------------------------------+ \n");
    printf("\n Anda mau yang mana? :");scanf("%d",&a);

    if(a==1){
      harga =10000000;
    }
    else if(a==2){
      harga =6000000;
    }
    else if(a==3){
      harga =5000000;
    }
    else if(a==4){
      harga =7000000;
    }
    else if(a==5){
      harga =11000000;
    }
    else{
      // menanyakan apakah user ingin belanja lagi atau tidak
      printf("\n Apakah Anda masih ingin berbelanja ? [y/t] \t :");getchar();
      scanf("%s",&ulang);
        if (ulang == y){{goto awal;}}
        else if(ulang == t){{goto akhir;}}
    }
    printf("\n Total Harga \t\t : Rp. %d",harga);
    printf("\n Total Pembayaran \t : Rp. ");scanf("%d",&bayar);
    c = bayar - harga; // meyimpan hasil uang yang dibayarkan user terhadap harga barang yg dipilih
    if(c >= 0){
      kembali = bayar - harga; // menghitung uang kembalian user
      printf("\n Kembalian \t\t : Rp. %d",kembali);
    }
    // meminta user menambahkan uang jika pembayaran sebelumnya tidak mencukupi
    while(c < 0 || kembali < 0){
      printf("\n Maaf uang Anda kurang \t : Rp. %d",-c);
      printf("\n Masukkan uang tambahan  : Rp. ");scanf("%d",&kurang);
      kembali = -c - kurang; // menghitung uang kembali setelah user memasukkan uang tambahan

      if(kembali == 0){
        printf("\n Kembalian \t\t : Rp. %d",kembali);
        break;
        }
      if(kembali < 0){
        printf("\n Kembalian \t\t : Rp. %d",-kembali);
        break;
        }
      }
      printf("\n Apakah Anda masih ingin berbelanja ? [y/t] \t :");scanf("%s",&ulang);
        if (ulang == y){{goto awal;}}       // mengalihkan user ke halaman atau fungsi awal jika user ingin berbelanja lagi
        else if(ulang == t){{goto akhir;}}  // mengalihkan user ke halaman atau fungsi akhir jika user tidak ingin berbelanja lagi
    break;

  case 2 :

    printf("\n Daftar Video Game teratas di toko Kami :\n");
    printf("\n +-----------------------------------------------+");
    printf("\n | Nama Game \t\t\t Harga \t\t | ");
    printf("\n +-----------------------------------------------+");
    printf("\n | 1. Minecraft \t\t Rp 80.000,-     |");
    printf("\n | 2. The Legend of Zelda \t Rp 100.000,-    |");
    printf("\n | 3. FIFA 2021 \t\t Rp 120.000,-    |");
    printf("\n | 4. Super Smash Bros \t\t Rp 90.000,-     |");
    printf("\n | 5. Assasins Creed Valhalla \t Rp 105.000,-    |");
    printf("\n +-----------------------------------------------+ \n");
    printf("\n Anda mau yang mana? :");scanf("%d",&b);

    if(b==1){
      harga = 80000;
    }
    else if(b==2){
      harga = 100000;
    }
    else if(b==3){
      harga = 120000;
    }
    else if(b==4){
      harga = 90000;
    }
    else if(b==5){
      harga = 105000;
    }

    printf("\n Total Harga \t\t : Rp. %d",harga);
    printf("\n Total Pembayaran \t : Rp. ");scanf("%d",&bayar);
    c = bayar - harga;
    if(c >= 0){
      kembali = bayar - harga;
      printf("\n Kembalian \t\t : Rp. %d",kembali);
    }
    while(c < 0 || kembali < 0){
      printf("\n Maaf uang Anda kurang \t : Rp. %d",-c);
      printf("\n Masukkan uang tambahan  : Rp. ");scanf("%d",&kurang);
      kembali = -c - kurang;

      if(kembali == 0){
        printf("\n Kembalian \t\t : Rp. %d",kembali);
        break;
        }
      if(kembali < 0){
        printf("\n Kembalian \t\t : Rp. %d",-kembali);
        break;
        }
      }
      printf("\n Apakah Anda masih ingin berbelanja ? [y/t] \t :");getchar();
      scanf("%s",&ulang);
        if (ulang == y){{goto awal;}}
        else if(ulang == t){{goto akhir;}}
    break;

  case 3 :
    // keluar dari program jika input user adalah 3
    printf("\n Terima kasih telah mengunjungi toko kami.... \n Semoga hari anda menyenangkan....\n");
    return EXIT_SUCCESS;

  default :
    // menanyakan user untuk berbelanja atau tidak jika input yg dimasukkan user salah
    printf("\n Maaf input Anda tidak sesuai !");
    printf("\n Apakah Anda masih ingin berbelanja ? [y/t] \t :");getchar();
    scanf("%s",&ulang);
      if (ulang == y){{goto awal;}}
      else if(ulang == t){
        printf("\n Terima kasih telah berkunjung \n");
        return EXIT_SUCCESS;
      }
    }

  akhir:; // fungsi akhir
  printf("\n Terima kasih telah berbelanja di Toko kami....\n");
  return 0;
}
