/*Saya Robi Naufal Kaosar mengerjakan evaluasi TMD dalam mata kuliah Alpro 2 untuk keberkahanNya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.*/

#include "luhur.h"

int main(){
  char prth[500]; //-----------------------------------------------------------------Variabel untuk kueri

  // Menu awal
  opening();
  // Looping untuk melakukan proses berulang (Program tidak sekali jalan)
  do{
    printf("\nGabutDB [db_teemde]> ");
    scanf(" %499[^.]s", &prth); //---------------------------------------------------Input kueri
    getchar(); //--------------------------------------------------------------------Mencegah infinity loop tak terduga
    int n; //------------------------------------------------------------------------Sebagai counter huruf dalam kueri
    char kueri[50]; //---------------------------------------------------------------Sebagai pendeteksi kueri
    lean = 0;
    n = mulai(n,kueri, prth); //-----------------------------------------------Mendeteksi kueri dan count huruf (Start mesin kata)

    //------------------------Kondisi-kondisi kueri----------------------------------

    // Melakukan output help sebagai informasi kueri apa saja yang dapat digunakan
    if (strcmp(kueri,"help") == 0){
      // Kondisi jika tidak ada input di belakang "help", tampilkan informasi
      if (belakang(n, 0, prth,0) == 0){
        printf("\nList of all Gabut commands:\n");
        printf("INSERT TO : Insert data into an existing table.\n");
        printf("UPDATE TO : Update the data in the table.\n");
        printf("DELETE TO : Deletes the data in the table.\n");
        printf("SELECT TO : Select the table to be displayed.\n");
        printf("good bye. : Exit GabutDB.\n");
        printf("help.     : Open this list.\n");
      }else{ //----------------------------------------------------------------------Kondisi jika terdapat ilegal input kueri
        n = maju(n,0,kueri,prth,0); //-----------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
        printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
      }
    }else

    // Melakukan command good bye untuk keluar dari GabutDB
    if (strcmp(kueri,"good") == 0){
      n = maju(n, 0, kueri, prth,0); //----------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
      // Kondisi jika input sesudah good ada bye
      if (strcmp(kueri,"bye") == 0){
        // Kondisi jika tidak ada kueri lain setelah bye, maka lakukan command
        if (belakang(n, 0, prth,0) == 0){
          tetew();
          printf("Atosan..\n");
          exit(0); //----------------------------------------------------------------Memberhentikan program
        }else{ //--------------------------------------------------------------------Kondisi jika ada input ilegal setelah bye
          n = maju(n, 0, kueri, prth,0); //------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
          printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
        }
      }else{ //----------------------------------------------------------------------Kondisi jika terdapat kesalahan input kueri
        printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
      }
    }else

    // Melakukan command insert untuk input data
    if (strcmp(kueri,"insert") == 0){
      n = maju(n,0,kueri,prth,0); //-------------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
      if (strcmp(kueri,"to") == 0){
        masukin(n,prth,kueri); //----------------------------------------------------Masuk ke dalam prosedur untuk melakukan input data
      }else{ //----------------------------------------------------------------------Kondisi jika terdapat kesalahan input kueri
        printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
      }
    }else
    if (strcmp(kueri,"update") == 0){
      n = maju(n,0,kueri,prth,0); //-------------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
      if (strcmp(kueri,"to") == 0){
        ubah(n,prth,kueri); //-------------------------------------------------------Masuk ke dalam prosedur untuk melakukan update data
      }else{ //----------------------------------------------------------------------Kondisi jika terdapat kesalahan input kueri
        printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
      }
    }else
    if (strcmp(kueri,"delete") == 0){
      n = maju(n,0,kueri,prth,0); //-------------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
      if (strcmp(kueri,"to") == 0){
        hapus(n,prth,kueri); //------------------------------------------------------Masuk ke dalam prosedur untuk hapus data
      }else{ //----------------------------------------------------------------------Kondisi jika terdapat kesalahan input kueri
        printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
      }
    }else
    if (strcmp(kueri,"select") == 0){
      n = maju(n,0,kueri,prth,0); //-------------------------------------------------Mesin kata untuk mendeteksi dan count huruf (Increament)
      if (strcmp(kueri,"to") == 0){
        milih(n,prth,kueri); //------------------------------------------------------Masuk ke dalam prosedur untuk select data
      }else{ //----------------------------------------------------------------------Kondisi jika terdapat kesalahan input kueri
        printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
      }
    }else{ //------------------------------------------------------------------------Kondisi jika terdapat kesalahan input kueri
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }while(1 == 1); //-----------------------------------------------------------------Infinity loop untuk melakukan proses berulang hingga exit
  return 0;
}
