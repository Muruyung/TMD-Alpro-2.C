/*Saya Robi Naufal Kaosar mengerjakan evaluasi [nama evaluasi] dalam mata kuliah [nama mata kuliah] untuk keberkahanNya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.*/

#include "luhur.h"

//-------------------------------Just For Fun------------------------------------

// Opening
void opening(){
  printf("Welcome to the Gabut DBMS. Commands end with . \nBeta Version 1.0.\n");
  Beep(500,430);
  Beep(595,180);
  Sleep(113);
  Beep(400,640);
  Sleep(590);
  printf("\nCopyright (c) 1990, 2018, Muruyung, GabutDB Corporation Ab and others.\n");
  Beep(670,430);
  Beep(795,170);
  Sleep(120);
  Beep(532,650);
  Sleep(310);
  printf("\nType 'help.' for help\n");
  Beep(750,150);
  Beep(750,150);
  Beep(795,135);
  Beep(890,170);
  Beep(805,800);
}

// Suara jika berhasil melakukan kueri
void berhasil(){
  Beep(650,100);
  Beep(650,65);
  Sleep(300);
  Beep(650,280);
  Beep(508,100);
  Beep(650,225);
  Sleep(200);
  Beep(780,500);
  Sleep(300);
  Beep(390,200);
}

// Suara ketika berhasil melakukan select
void tampil(){
  Beep(430,20);
  Beep(430,20);
  Beep(420,120);
  Sleep(1200);
  Beep(390,100);
  Beep(700,200);
  Sleep(190);
  Beep(700,115);
  Beep(700,130);
  Beep(650,180);
  Beep(585,180);
  Beep(513,180);
}

// Suara gabut
void tetew(){
  printf("Te");
  Beep(650,200);
  printf("tew..\n");
  Beep(760,450);
  Sleep(1650);
  printf("Te");
  Beep(650,200);
  printf("Tew..\n");
  Beep(760,450);
  Sleep(1650);
  printf("Te");
  Beep(650,200);
  printf("te");
  Beep(680,200);
  printf("te");
  Beep(720,200);
  printf("tew..\n");
  Beep(760,450);
  Sleep(100);
  printf("Te");
  Beep(760,210);
  printf("te");
  Beep(760,210);
  printf("te");
  Beep(760,210);
  Sleep(300);
  printf("tew..\n");
  Beep(680,500);
  printf("Te");
  Beep(760,200);
  printf("te");
  Beep(760,200);
  printf("te");
  Beep(760,200);
  printf("te");
  Beep(760,200);
  printf("tew\n");
  Beep(760,200);
  Sleep(100);
  printf("Te");
  Beep(650,200);
  printf("te");
  Beep(680,200);
  printf("te");
  Beep(720,200);
  printf("tew..\n");
  Beep(760,450);
  Sleep(200);
  printf("Te");
  Beep(760,210);
  printf("te");
  Beep(760,210);
  printf("te");
  Beep(760,210);
  Sleep(300);
  printf("tew..\n");
  Beep(680,500);
  printf("Te");
  Beep(760,200);
  printf("te");
  Beep(760,200);
  printf("te");
  Beep(760,200);
  printf("te");
  Beep(760,200);
  printf("tew..\n");
  Beep(760,200);
}

//-------------------------------------------------------------------------------

//-----------------------------Algoritma sorting---------------------------------
//---------------------(Menggunakan Template Quick Sort)-------------------------

// Sorting untuk file tcitacita
void quickcita(int n, cita a[], int depan,int pengker){
   int c, d, pivot;
   cita e;
   if(depan<pengker){
      pivot=depan;
      c=depan;
      d=pengker;
      while(c<d){
         while(a[c].kode<=a[pivot].kode &&c<pengker){
           c++;
         }
         while(a[d].kode>a[pivot].kode){
           d--;
         }
         if(c<d){
            e=a[c];
            a[c]=a[d];
            a[d]=e;
         }
      }
      e=a[pivot];
      a[pivot]=a[d];
      a[d]=e;
      quickcita(n,a,depan,d-1);
      quickcita(n,a,d+1,pengker);
   }
}

// Sorting untuk file tperjalanan
void quickjalan(int n, jalan a[], int depan,int pengker){
   int c, d, pivot;
   jalan e;
   if(depan<pengker){
      pivot=depan;
      c=depan;
      d=pengker;
      while(c<d){
         while(a[c].kode<=a[pivot].kode &&c<pengker){
           c++;
         }
         while(a[d].kode>a[pivot].kode){
           d--;
         }
         if(c<d){
            e=a[c];
            a[c]=a[d];
            a[d]=e;
         }
      }
      e=a[pivot];
      a[pivot]=a[d];
      a[d]=e;
      quickjalan(n,a,depan,d-1);
      quickjalan(n,a,d+1,pengker);
   }
}

// Sorting untuk file tmanusia
void quickmns(int n, jelema a[], int depan,int pengker){
   int c, d, pivot;
   jelema e;
   if(depan<pengker){
      pivot=depan;
      c=depan;
      d=pengker;
      while(c<d){
         while(strcmp(a[c].nama,a[pivot].nama) <= 0 &&c<pengker){
           c++;
         }
         while(strcmp(a[d].nama,a[pivot].nama) == 1){
           d--;
         }
         if(c<d){
            e=a[c];
            a[c]=a[d];
            a[d]=e;
         }
      }
      e=a[pivot];
      a[pivot]=a[d];
      a[d]=e;
      quickmns(n,a,depan,d-1);
      quickmns(n,a,d+1,pengker);
   }
}
//-------------------------------------------------------------------------------

//---------------------------Algoritma Searching---------------------------------
//-------------------(Menggunakan Template Binary Search)------------------------

// Search data tcitacita
int teangancita(int n,cita tcita[n],int m1,int temu){
  int awal = 0; //--------------------------------------------------------------Untuk batas indeks depan
  int akhir = n-1; //-----------------------------------------------------------Untuk batas indeks belakang
  do{
    temu = (awal+akhir)/2; //---------------------------------------------------Nilai tengah indeks

    // Kondisi jika angka cari lebih kecil dari angka isi
    if(m1 > tcita[temu].kode){
      awal = temu+1;
    }else{
      // Kondisi jika angka cari lebih besar dari angka isi
      akhir = temu-1;
    }
  }while(akhir >= awal && tcita[temu].kode != m1);

  // Kondisi jika ditemukan
  if (tcita[temu].kode==m1){
    return temu;
  }
  // Jika tidak ditemukan
  return n;
}

// Search data tperjalanan
int teanganjalan(int n,jalan tjalan[],int m1,int temu){
  int awal = 0; //--------------------------------------------------------------Untuk batas indeks depan
  int akhir = n-1; //-----------------------------------------------------------Untuk batas indeks belakang
  do{
    temu = (awal+akhir)/2; //---------------------------------------------------Nilai tengah indeks

    // Kondisi jika angka cari lebih kecil dari angka isi
    if(m1 > tjalan[temu].kode){
      awal = temu+1;
    }else{
      // Kondisi jika angka cari lebih besar dari angka isi
      akhir = temu-1;
    }
  }while(akhir >= awal && tjalan[temu].kode != m1);

  // Kondisi jika ditemukan
  if (tjalan[temu].kode==m1){
    return temu;
  }

  // Jika tidak ditemukan
  return n;
}
//-------------------------------------------------------------------------------

//-------------------------------Mesin Kata--------------------------------------

// Mendeteksi akhir pita
int EOP(int n, char prth[]){
  // Kondisi jika n berada di ujung pita, maka return 0
  if (n < strlen(prth)){
    return 0;
  }

  // Kondisi jika n berada sebelum mencapai akhir pita, maka return 1
  else{
    return 1;
  }
}

// Mendeteksi kata di belakang current kata
int belakang(int n, int m, char prth[], int bol){
  // Kondisi jika pita yang dibaca merupakan whitespace (spasi atau enter) maka n Increament
  if ((prth[n] == ' ' || prth[n] == '\n') && bol == 0){
    belakang(n+1, m, prth,0);
  }else // Kondisi jika tidak ada kata lain setelah current kata, maka return 0
  if (EOP(n,prth) == 1){
    return 0;
  }else{ // Kondisi jika ada kata lain pada setelah current kata, maka return 1
    return 1;
  }
}

// Increament kata
int maju(int n, int m, char kueri[], char prth[], int bol){
  // Kondisi jika pita yang dibaca merupakan whitespace (spasi atau enter) maka n Increament
  if ((prth[n] == ' ' || prth[n] == '\n') && bol == 0){
    maju(n+1, m, kueri, prth,0);
  }else // Kondisi jika dideteksi karakter, maka salin ke dalam variabel kueri
  if (prth[n] != ' ' && EOP(n,prth) == 0 && prth[n] != '\n'){
    if ((int)prth[n] >= 65 && (int)prth[n] <= 90 && lean == 0){
      prth[n] = ((int)prth[n]) + 32;
    }
    kueri[m] = prth[n];
    maju(n+1, m+1, kueri, prth,1); // Increament n dan m menggunakan rekursif
  }else{ // Jika sudah mencapai whitespace (spasi atau enter)
    kueri[m] = '\0'; //--------Mengakhiri ujung variabel agar tidak ada char asing
    return n; //---------------Return n sebagai indeks pita
  }
}

// Start Increament kata
int mulai(int n, char kueri[], char prth[]){
  n = 0; //--------------------------------Memulai indeks pita
  n = maju(n, 0, kueri, prth, 0); //-------Melakukan Increament kata
  return n; //-----------------------------Mengembalikan nilai indeks pita
}
//-------------------------------------------------------------------------------

//-------------Custom prosedur untuk mempermudah proses tertentu-----------------

// Prosedur untuk read file
void pail(int n, int sim, int sim2, char prth[], char kueri[], cita tcita[], jalan tjalan[], jelema tmanusia[]){
  n = maju(n, 0, kueri, prth, 0); //-----------------------------------------------------Melakukan Increament kata

  // Kondisi jika memanggil file tcitacita
  if (strcmp(kueri,"tcitacita") == 0){
    FILE *out = fopen("tcitacita.dat","r");
    if (out){
      fscanf(out, "%d %s", &tcita[d].kode, &tcita[d].nama);
      while(strcmp(tcita[d].nama,"#d@7#") != 0 && tcita[d].kode != sim){ //--------------Melakukan looping selama tidak bertemu dummy dan primary key tidak sama dengan kueri
        d++;
        fscanf(out, "%d %s", &tcita[d].kode, &tcita[d].nama);
      }
    }
    fclose(out);
  }else // Kondisi jika memanggil file tperjalanan
  if (strcmp(kueri,"tperjalanan") == 0){
    FILE *out = fopen("tperjalanan.dat","r");
    if (out){
      fscanf(out, "%d %s %d", &tjalan[d].kode, &tjalan[d].catat, &tjalan[d].taun);
      while(strcmp(tjalan[d].catat,"#d@7#") != 0 && tjalan[d].kode != sim){ //-----------Melakukan looping selama tidak bertemu dummy dan primary key tidak sama dengan kueri
        d++;
        fscanf(out, "%d %s %d", &tjalan[d].kode, &tjalan[d].catat, &tjalan[d].taun);
      }
    }
    fclose(out);
  }else{ // Kondisi jika memanggil file tmanusia
    FILE *out = fopen("tmanusia.dat","r");
    if (out){
      fscanf(out, "%s %d %d", &tmanusia[d].nama, &tmanusia[d].kd_cita, &tmanusia[d].kd_jalan);
      //--------------Melakukan looping selama tidak bertemu dummy dan primary key tidak sama dengan kueri
      while(strcmp(tmanusia[d].nama,"#d@7#") != 0 && strcmp(namajel, tmanusia[d].nama) != 0 && tmanusia[d].kd_cita != sim && tmanusia[d].kd_jalan != sim2){
        d++;
        fscanf(out, "%s %d %d", &tmanusia[d].nama, &tmanusia[d].kd_cita, &tmanusia[d].kd_jalan);
      }
    }
    fclose(out);
  }
}

// Prosedur untuk write update file pada tmanusia
void khsuson(int n, char prth[], char kueri[], int pin, int e){
  n = maju(n, 0, kueri, prth, 0); //---------------------------------------------Melakukan Increament kata

  // Deklarasi typedef struct
  jalan tjalan[250];
  cita tcita[250];
  jelema tmanusia[250];

  int c; //----------------------------------------------------------------------Iterasi looping

  // Kondisi jika sesuai dengan kueri
  if (strcmp(kueri,"set") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"nama") == 0){

      // Kondisi untuk mengecek apakah ada kata lain di belakang current kata atau tidak
      if (belakang(n, 0, prth,0) == 1){
        n = maju(n, 0, kueri, prth, 0);
        if(belakang(n, 0, prth,0) == 0){
          strcpy(namajel,kueri); //----------------------------------------------Menyalin kata ke variabel tampungan untuk di bandingkan di dalam tabel
          d = 0;
          pail(pin,-121,-121,prth,kueri,tcita,tjalan,tmanusia); //---------------Memanggil prosedur untuk read file

          // Kondisi jika terdapat primary key yang sama untuk diubah
          if (strcmp(namajel,tmanusia[d].nama) == 0){
            printf("\aFailed to update data. There is the same primary key.\n");
          }else{ // Kondisi jika tidak ada primary key yang sama
            strcpy(tmanusia[e].nama,namajel);
            quickmns(d,tmanusia,0,d-1); //---------------------------------------Melakukan sorting data

            // Melakukan input data ke dalam file tmanusia
            FILE *in = fopen("tmanusia.dat","w");
            for (c = 0 ; c < d ; c++){
              fprintf(in, "%s %d %d\n", tmanusia[c].nama, tmanusia[c].kd_cita, tmanusia[c].kd_jalan);
            }
            fprintf(in, "#d@7# -127465 -132840"); //-----------------------------Membuat data dummy
            fclose(in);

            // Kondisi setelah proses berhasil
            printf("Ciee Berhasil :D\n");
            berhasil(); //-------------------------------------------------------Sound effect berhasil
            milih(pin,prth,kueri); //--------------------------------------------Mencetak tabel di terminal
          }
        }else{ // Kondisi error jika terdapat lebih dari 1 nama yang diinputkan
          printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
        }
      }else{ // Kondisi error jika tidak ada nama yang akan diinputkan
        printf("\aYou have an error in your Gabut syntax. Mau diganti jadi apa catatan nya -_- ??\n");
      }
    }else // Kondisi error jika kodecitacita atau kodeperjalanan akan diubah
    if (strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
      printf("\aYou have an error in your Gabut syntax. Cannot add or update a child row.\n");
    }
  }else{ // Kondisi error jika terdapat penggunaan kueri yang salah
    printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
  }
}

// Prosedur untuk delete file pada tmanusia
void apawelah(int pin, int e, char prth[],char kueri[]){
  d = 0;
  int c; //----------------------------------------------------------------------Iterasi Looping

  // Deklarasi typedef struct
  cita tcita[250];
  jalan tjalan[250];
  jelema tmanusia[250];

  strcpy(namajel,"#d@7#"); //----------------------------------------------------Menyalin dummy text agar read file dibaca hingga selesai
  pail(pin,-121,-212,prth,kueri,tcita,tjalan,tmanusia); //-----------------------Read file untuk selanjutnya dapat menghapus data

  // Melakukan proses delete dan memasukkan data ke dalam file
  FILE *in = fopen("tmanusia.dat","w");
  for (c = 0 ; c < d ; c++){
    if (c != e){ // Kondisi agar data yang dipilih tidak diinputkan ke dalam file (seolah2 dihapus)
      fprintf(in, "%s %d %d\n", tmanusia[c].nama, tmanusia[c].kd_cita, tmanusia[c].kd_jalan);
    }
  }
  fprintf(in, "#d@7# -127465 -132840"); //---------------------------------------Membuat data dummy
  fclose(in);

  // Kondisi setelah proses berhasil
  printf("Ciee Berhasil :D\n");
  berhasil(); //-----------------------------------------------------------------Sound effect berhasil
  milih(pin,prth,kueri); //------------------------------------------------------Menampilkan tabel setelah diubah
}
//-------------------------------------------------------------------------------

//-----------------------Prosedur untuk melakukan query--------------------------

// Query Select
void milih(int n, char prth[], char kueri[]){
  // Untuk menampung banyak digit integer
  int wow[250];
  int un[250];
  int wew[250];

  // Sebagai boolean
  int bil;
  int bol = 0;

  int uji[3] = {0,0,0}; //-------------------------------------------------------Untuk menampung banyak data masing-masing tabel
  int c,e; //--------------------------------------------------------------------Iterasi looping
  char tmp[3][20]; //------------------------------------------------------------Temporary file
  char kweri[50]; //-------------------------------------------------------------Temporary kueri
  int cek[7] = {0,0,0,0,0,0,0}; //-----------------------------------------------Menampung panjang string terpanjang setiap data

  // Deklarasi Typedef Struct
  cita tcita[250];
  jalan tjalan[250];
  jelema tmanusia[250];

  e = n; //----------------------------------------------------------------------Untuk Increament kata sementara
  maju(0, 0, kueri, prth,0); //--------------------------------------------------Increament kata tanpa Increament
  e = maju(e, 0, kweri, prth,0); //----------------------------------------------Increament kata untuk cek

  // Kondisi jika menampilkan tabel tanpa join
  if (strcmp(kueri,"insert") == 0 || strcmp(kueri,"update") == 0  || strcmp(kueri,"delete") == 0 || (strcmp(kueri,"select") == 0) && belakang(e,0,prth,0) == 0){
    d = 0;
    strcpy(namajel,"#d@7#");
    pail(n,-127465,-132840,prth,kueri,tcita,tjalan,tmanusia);

    // Kondisi jika tidak ada data di dalam tabel
    if(d == 0){
      printf("\aThe table is empty\n");
    }else // Kondisi jika membuka tabel tcitacita
    if(strcmp(kueri,"tcitacita") == 0){
      maju(0,0,kueri,prth,0); //-------------------------------------------------Increament kata

      // Kondisi jika menampilkan tabel dari kueri select itu sendiri
      if (strcmp(kueri,"select") == 0){
        tampil(); //-------------------------------------------------------------Sound effect select
      }

      // Penjang kata sementara untuk pola tabel
      cek[0] = 4; //-------------------------------------------------------------Panjang data kode
      cek[1] = 12; //------------------------------------------------------------Panjang data namacitacita

      float iseng = 0; //--------------------------------------------------------Untuk menampilkan estimasi waktu (Biar keren aja)

      // Looping untuk mencari panjang kata terpanjang dari masing-masing kolom
      for (c = 0 ; c < d ; c++){
        wow[c] = 0;
        bil = 1;

        // Menghitung digit kode
        while(tcita[c].kode / bil != 0){
          wow[c]++;
          bil *= 10;
        }

        // Membandingkan panjang kode
        if (cek[0] < wow[c]){
          cek[0] = wow[c];
        }

        // Membandingkan panjang namacitacita
        if (cek[1] < strlen(tcita[c].nama)){
          cek[1] = strlen(tcita[c].nama);
        }
        iseng++; //--------------------------------------------------------------Counter estimasi waktu
      }
      //=======================Membuat pola tabel================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //====================Judul-judul pada tabel===============================
      printf("| Kode");
      for (c = 0 ; c < cek[0]-3 ; c++){
        printf(" ");
      }
      printf("| NamaCitaCita");
      for (c = 0 ; c < cek[1]-11 ; c++){
        printf(" ");
      }
      printf("|\n");
      //=========================================================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=====================Menampilkan isi tabel===============================
      for (c = 0 ; c < d ; c++){
        printf("| %d", tcita[c].kode);
        for (e = 0 ; e < (cek[0]-wow[c])+1 ; e++){
          printf(" ");
        }
        printf("| %s", tcita[c].nama);
        for (e = 0 ; e < (cek[1]-strlen(tcita[c].nama))+1 ; e++){
          printf(" ");
        }
        printf("|\n");
      }
      //=========================================================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=========================================================================

      printf("%d row in set (%0.3f sec)\n", d, iseng/5000); //-------------------Mencetak estimasi waktu
    }else
    if(strcmp(kueri,"tperjalanan") == 0){
      maju(0,0,kueri,prth,0); //-------------------------------------------------Increament kata

      // Kondisi jika kueri dari select itu sendiri
      if (strcmp(kueri,"select") == 0){
        tampil(); //-------------------------------------------------------------Sound effect select
      }

      // Panjang sementara pada tabel
      cek[0] = 4; //-------------------------------------------------------------Untuk kolom kode
      cek[1] = 7; //-------------------------------------------------------------Untuk kolom Catatan
      cek[2] = 5; //-------------------------------------------------------------Untuk kolom tahun


      float iseng = 0; //--------------------------------------------------------Untuk estimasi waktu (iseng aja)

      // Looping untuk mencari panjang kata terpanjang dari masing-masing kolom
      for (c = 0 ; c < d ; c++){
        wow[c] = 0;
        un[c] = 0;
        bil = 1;

        // Menghitung banyak digit kode
        while(tjalan[c].kode / bil != 0){
          wow[c]++;
          bil *= 10;
        }

        // Membandingkan panjang kode
        if (cek[0] < wow[c]){
          cek[0] = wow[c];
        }

        // Membandingkan panjang catatan
        if (cek[1] < strlen(tjalan[c].catat)){
          cek[1] = strlen(tjalan[c].catat);
        }
        bil = 1;

        // Menghitung banyak digit tahun
        while(tjalan[c].taun / bil != 0){
          un[c]++;
          bil *= 10;
        }

        // Membandingkan panjang tahun
        if (cek[2] < un[c]){
          cek[2] = un[c];
        }
        iseng++; //--------------------------------------------------------------Ceritanya untuk estimasi waktu
      }
      //=====================Membuat pola untuk tabel============================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[2]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=====================Menampilkan judul tabel=============================
      printf("| Kode");
      for (c = 0 ; c < cek[0]-3 ; c++){
        printf(" ");
      }
      printf("| Catatan");
      for (c = 0 ; c < cek[1]-6 ; c++){
        printf(" ");
      }
      printf("| Tahun");
      for (c = 0 ; c < cek[2]-4 ; c++){
        printf(" ");
      }
      printf("|\n");
      //=========================================================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[2]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //====================Menampilkan isi data tabel===========================
      for (c = 0 ; c < d ; c++){
        printf("| %d", tjalan[c].kode);
        for (e = 0 ; e < (cek[0]-wow[c])+1 ; e++){
          printf(" ");
        }
        printf("| %s", tjalan[c].catat);
        for (e = 0 ; e < (cek[1]-strlen(tjalan[c].catat))+1 ; e++){
          printf(" ");
        }
        printf("| %d", tjalan[c].taun);
        for (e = 0 ; e < (cek[2]-un[c])+1 ; e++){
          printf(" ");
        }
        printf("|\n");
      }
      //=========================================================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[2]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=========================================================================

      printf("%d row in set (%0.3f sec)\n", d, iseng/3000); //-------------------Menampilkan estimasi waktu (iseng aja)
    }else
    if(strcmp(kueri,"tmanusia") == 0){
      maju(0,0,kueri,prth,0); //-------------------------------------------------Increament kata

      // Kondisi jika kueri nya adalah select
      if (strcmp(kueri,"select") == 0){
        tampil(); //-------------------------------------------------------------Sound effect select
      }

      // Panjang kata terpanjang sementara masing-masing kolom
      cek[0] = 4; //-------------------------------------------------------------Untuk kolom nama
      cek[1] = 12; //------------------------------------------------------------Untuk kolom kodecitacita
      cek[2] = 14; //------------------------------------------------------------Untuk kolom KodePerjalanan

      float iseng = 0; //--------------------------------------------------------Untuk perkiraan estimasi waktu

      // Looping untuk mencari isi data terpanjang
      for (c = 0 ; c < d ; c++){

        // Panjang Nama
        if (cek[0] < strlen(tmanusia[c].nama)){
          cek[0] = strlen(tmanusia[c].nama);
        }

        // Panjang KodeCitaCita
        wow[c] = 0;
        bil = 1;
        while(tmanusia[c].kd_cita / bil != 0){
          wow[c]++;
          bil *= 10;
        }
        if (cek[1] < wow[c]){
          cek[1] = wow[c];
        }

        // Panjang KodePerjalanan
        un[c] = 0;
        bil = 1;
        while(tmanusia[c].kd_jalan / bil != 0){
          un[c]++;
          bil *= 10;
        }
        if (cek[2] < un[c]){
          cek[2] = un[c];
        }
        iseng++; //--------------------------------------------------------------Menghitung estimasi waktu
      }
      //====================Membuat pola untuk tabel=============================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[2]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=====================Membuat judul-judul kolom===========================
      printf("| Nama");
      for (c = 0 ; c < cek[0]-3 ; c++){
        printf(" ");
      }
      printf("| KodeCitaCita");
      for (c = 0 ; c < cek[1]-11 ; c++){
        printf(" ");
      }
      printf("| KodePerjalanan");
      for (c = 0 ; c < cek[2]-13 ; c++){
        printf(" ");
      }
      printf("|\n");
      //=========================================================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[2]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=======================Mencetak isi data=================================
      for (c = 0 ; c < d ; c++){
        printf("| %s", tmanusia[c].nama);
        for (e = 0 ; e < (cek[0]-strlen(tmanusia[c].nama))+1 ; e++){
          printf(" ");
        }
        printf("| %d", tmanusia[c].kd_cita);
        for (e = 0 ; e < (cek[1]-wow[c])+1 ; e++){
          printf(" ");
        }
        printf("| %d", tmanusia[c].kd_jalan);
        for (e = 0 ; e < (cek[2]-un[c])+1 ; e++){
          printf(" ");
        }
        printf("|\n");
      }
      //=========================================================================
      printf("+");
      for (c = 0 ; c < cek[0]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[1]+2 ; c++){
        printf("-");
      }
      printf("+");
      for (c = 0 ; c < cek[2]+2 ; c++){
        printf("-");
      }
      printf("+\n");
      //=========================================================================

      printf("%d row in set (%0.3f sec)\n", d, iseng/1000); //-------------------Menampilkan estimasi waktu
    }else{ // Kondisi jika file tidak ditemukan
      printf("\aFile '%s' doesn't exist.\n",kueri);
    }
  }else{ // Kondisi jika melakukan join tabel
    c = 0; //--------------------------------------------------------------------Iterasi looping

    // Looping untuk mengecek tabel apa saja yang akan di join kan
    while(belakang(n,0,prth,0) == 1 && bol == 0){
      n = maju(n, 0, tmp[c], prth,0); //-----------------------------------------Melakukan Increament kata
      if (strcmp(tmp[c],"tcitacita") == 0){
        uji[0]++;
      }else
      if (strcmp(tmp[c],"tperjalanan") == 0){
        uji[1]++;
      }else
      if (strcmp(tmp[c],"tmanusia") == 0){
        uji[2]++;
      }else{ // Kondisi jika terdapat nama file yang salah
        bol++;
        printf("\aFile '%s' doesn't exist.\n",tmp[c]); //------------------------Mengeluarkan error
      }

      // Kondisi jika nama file yang sama lebih dari satu
      if ((uji[0] == 2 || uji[1] == 2 || uji[2] == 2) && bol == 0){
        bol++;
        printf("\aYou have an error in your Gabut syntax. Can not do double '%s' command.\n", tmp[c]); // Mengeluarkan error
      }
      c++; // Iterasi looping
    }

    // Kondisi jika terdapat lebih dari 4 tabel yang dituliskan
    if (c > 3){
      printf("\aKu tak sanggup memproses sebanyak itu :((\n");
    }else

    // Kondisi jika input user sesuai dengan kemampuan coding saya :))
    if (bol == 0){
      // Melakukan read file tcitacita
      d = 0;
      strcpy(namajel,"#d@7#");
      pail(0,-127465,-132840,"tcitacita",kueri,tcita,tjalan,tmanusia);
      uji[0] = d; // Banyak data dalam file

      // Melakukan read file tperjalanan
      d = 0;
      strcpy(namajel,"#d@7#");
      pail(0,-127465,-132840,"tperjalanan",kueri,tcita,tjalan,tmanusia);
      uji[1] = d; // Banyak data dalam file

      // Melakukan read file tmanusia
      d = 0;
      strcpy(namajel,"#d@7#");
      pail(0,-127465,-132840,"tmanusia",kueri,tcita,tjalan,tmanusia);
      uji[2] = d; // Banyak data dalam tabel

      // Kondisi jika tidak isi tabel
      if(d == 0){
        printf("\aThe table is empty\n");
      }else{

        // Panjang kata terpanjang masing-masing kolom
        cek[0] = 4; //-----------------------------------------------------------Untuk kolom nama
        cek[1] = 12; //----------------------------------------------------------Untuk kolom kodecitacita
        cek[2] = 12; //----------------------------------------------------------Untuk kolom namacitacita
        cek[3] = 14; //----------------------------------------------------------Untuk kolom kodeperjalanan
        cek[4] = 7; //-----------------------------------------------------------Untuk kolom catatan
        cek[5] = 5; //-----------------------------------------------------------Untuk kolom tahun

        float iseng = 0; //------------------------------------------------------Perkiraan estimasi waktu

        // Looping untuk mencari baris data terpanjang masing-masing kolom dan melakukan join
        for (e = 0 ; e < uji[2] ; e++){

          // Melakukan join tabel
          strcpy(tmanusia[e].wasta, tcita[teangancita(uji[0],tcita,tmanusia[e].kd_cita,0)].nama);
          strcpy(tmanusia[e].catat, tjalan[teanganjalan(uji[1],tjalan,tmanusia[e].kd_jalan,0)].catat);
          tmanusia[e].taun = tjalan[teanganjalan(uji[1],tjalan,tmanusia[e].kd_jalan,0)].taun;

          iseng+=3; //-----------------------------------------------------------Menghitung perkiraan estimasi waktu

          // Inisialisasi awal untuk panjang kata
          wow[e] = 0;
          wew[e] = 0;
          un[e] = 0;

          // Panjang nama
          if (cek[0] < strlen(tmanusia[e].nama)){
            cek[0] = strlen(tmanusia[e].nama);
          }
          iseng++;

          // Panjang kodecitacita
          bil = 1;
          while(tmanusia[e].kd_cita / bil != 0){
            wow[e]++;
            bil *= 10;
          }
          if (cek[1] < wow[e]){
            cek[1] = wow[e];
          }
          iseng++;

          // Panjang NamaCitaCita
          if (cek[2] < strlen(tmanusia[e].wasta)){
            cek[2] = strlen(tmanusia[e].wasta);
          }
          iseng++;

          // Panjang kodeperjalanan
          bil = 1;
          while(tmanusia[e].kd_jalan / bil != 0){
            wew[e]++;
            bil *= 10;
          }
          if (cek[3] < wew[e]){
            cek[3] = wew[e];
          }
          iseng++;

          // Panjang catatan
          if (cek[4] < strlen(tmanusia[e].catat)){
            cek[4] = strlen(tmanusia[e].catat);
          }
          iseng++;

          // Panjang digit tahun
          bil = 1;
          while(tmanusia[e].taun / bil != 0){
            un[e]++;
            bil *= 10;
          }
          if (cek[5] < un[e]){
            cek[5] = un[e];
          }

          iseng++; // Menghitung estimasi waktu
        }
        if (c == 3){ // Jika melakukan join 3 file
          tampil(); //-----------------------------------------------------------Sound effect select
          //=====================Membuat pola untuk tabel========================
          printf("+");
          for (c = 0 ; c < cek[0]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[1]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[2]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[3]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[4]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[5]+2 ; c++){
            printf("-");
          }
          printf("+\n");
          //=====================Judul masing-masing kolom=======================
          printf("| Nama");
          for (c = 0 ; c < cek[0]-3 ; c++){
            printf(" ");
          }
          printf("| KodeCitaCita");
          for (c = 0 ; c < cek[1]-11 ; c++){
            printf(" ");
          }
          printf("| NamaCitaCita");
          for (c = 0 ; c < cek[2]-11 ; c++){
            printf(" ");
          }
          printf("| KodePerjalanan");
          for (c = 0 ; c < cek[3]-13 ; c++){
            printf(" ");
          }
          printf("| Catatan");
          for (c = 0 ; c < cek[4]-6 ; c++){
            printf(" ");
          }
          printf("| Tahun");
          for (c = 0 ; c < cek[5]-4 ; c++){
            printf(" ");
          }
          printf("|\n");
          //=====================================================================
          printf("+");
          for (c = 0 ; c < cek[0]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[1]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[2]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[3]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[4]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[5]+2 ; c++){
            printf("-");
          }
          printf("+\n");
          //=====================Menampilkan isi data============================
          for (c = 0 ; c < d ; c++){
            printf("| %s", tmanusia[c].nama);
            for (e = 0 ; e < (cek[0]-strlen(tmanusia[c].nama))+1 ; e++){
              printf(" ");
            }
            printf("| %d", tmanusia[c].kd_cita);
            for (e = 0 ; e < (cek[1]-wow[c])+1 ; e++){
              printf(" ");
            }
            printf("| %s", tmanusia[c].wasta);
            for (e = 0 ; e < (cek[2]-strlen(tmanusia[c].wasta))+1 ; e++){
              printf(" ");
            }
            printf("| %d", tmanusia[c].kd_jalan);
            for (e = 0 ; e < (cek[3]-wew[c])+1 ; e++){
              printf(" ");
            }
            printf("| %s", tmanusia[c].catat);
            for (e = 0 ; e < (cek[4]-strlen(tmanusia[c].catat))+1 ; e++){
              printf(" ");
            }
            printf("| %d", tmanusia[c].taun);
            for (e = 0 ; e < (cek[5]-un[c])+1 ; e++){
              printf(" ");
            }
            printf("|\n");
          }
          //=====================================================================
          printf("+");
          for (c = 0 ; c < cek[0]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[1]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[2]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[3]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[4]+2 ; c++){
            printf("-");
          }
          printf("+");
          for (c = 0 ; c < cek[5]+2 ; c++){
            printf("-");
          }
          printf("+\n");
          //=====================================================================

          printf("%d row in set (%0.3f sec)\n", uji[2], iseng/1000); //----------Menampilkan estimasi waktu
        }else{ // Kondisi jika melakukan join 2 tabel

          // Join file tmanusia dengan tcitacita
          if ((strcmp(tmp[0],"tcitacita") == 0 && strcmp(tmp[1],"tmanusia") == 0) || (strcmp(tmp[1],"tcitacita") == 0 && strcmp(tmp[0],"tmanusia") == 0)){
            tampil(); //---------------------------------------------------------Sound effect select
            //=====================Membuat pola untuk tabel======================
            printf("+");
            for (c = 0 ; c < cek[0]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[1]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[2]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[3]+2 ; c++){
              printf("-");
            }
            printf("+\n");
            //====================Membuat judul setiap kolom=====================
            printf("| Nama");
            for (c = 0 ; c < cek[0]-3 ; c++){
              printf(" ");
            }
            printf("| KodeCitaCita");
            for (c = 0 ; c < cek[1]-11 ; c++){
              printf(" ");
            }
            printf("| NamaCitaCita");
            for (c = 0 ; c < cek[2]-11 ; c++){
              printf(" ");
            }
            printf("| KodePerjalanan");
            for (c = 0 ; c < cek[3]-13 ; c++){
              printf(" ");
            }
            printf("|\n");
            //===================================================================
            printf("+");
            for (c = 0 ; c < cek[0]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[1]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[2]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[3]+2 ; c++){
              printf("-");
            }
            printf("+\n");
            //=====================Menampilkan isi data==========================
            for (c = 0 ; c < d ; c++){
              printf("| %s", tmanusia[c].nama);
              for (e = 0 ; e < (cek[0]-strlen(tmanusia[c].nama))+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %d", tmanusia[c].kd_cita);
              for (e = 0 ; e < (cek[1]-wow[c])+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %s", tmanusia[c].wasta);
              for (e = 0 ; e < (cek[2]-strlen(tmanusia[c].wasta))+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %d", tmanusia[c].kd_jalan);
              for (e = 0 ; e < (cek[3]-wew[c])+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("|\n");
            }
            //===================================================================
            printf("+");
            for (c = 0 ; c < cek[0]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[1]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[2]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[3]+2 ; c++){
              printf("-");
            }
            printf("+\n");
            //===================================================================

            printf("%d row in set (%0.3f sec)\n", uji[2], iseng/1000); //--------Menampilkan estmasi waktu
          }else

          // Melakukan join tabel tmanusia dengan tperjalanan
          if ((strcmp(tmp[0],"tperjalanan") == 0 && strcmp(tmp[1],"tmanusia") == 0) || (strcmp(tmp[1],"tperjalanan") == 0 && strcmp(tmp[0],"tmanusia") == 0)){
            tampil(); //---------------------------------------------------------Sound effect select
            //=====================Membuat pola untuk tabel======================
            printf("+");
            for (c = 0 ; c < cek[0]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[1]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[3]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[4]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[5]+2 ; c++){
              printf("-");
            }
            printf("+\n");
            //====================Membuat judul setiap kolom=====================
            printf("| Nama");
            for (c = 0 ; c < cek[0]-3 ; c++){
              printf(" ");
            }
            printf("| KodeCitaCita");
            for (c = 0 ; c < cek[1]-11 ; c++){
              printf(" ");
            }
            printf("| KodePerjalanan");
            for (c = 0 ; c < cek[3]-13 ; c++){
              printf(" ");
            }
            printf("| Catatan");
            for (c = 0 ; c < cek[4]-6 ; c++){
              printf(" ");
            }
            printf("| Tahun");
            for (c = 0 ; c < cek[5]-4 ; c++){
              printf(" ");
            }
            printf("|\n");
            //===================================================================
            printf("+");
            for (c = 0 ; c < cek[0]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[1]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[3]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[4]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[5]+2 ; c++){
              printf("-");
            }
            printf("+\n");
            //=====================Menampilkan isi data==========================
            for (c = 0 ; c < d ; c++){
              printf("| %s", tmanusia[c].nama);
              for (e = 0 ; e < (cek[0]-strlen(tmanusia[c].nama))+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %d", tmanusia[c].kd_cita);
              for (e = 0 ; e < (cek[1]-wow[c])+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %d", tmanusia[c].kd_jalan);
              for (e = 0 ; e < (cek[3]-wew[c])+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %s", tmanusia[c].catat);
              for (e = 0 ; e < (cek[4]-strlen(tmanusia[c].catat))+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("| %d", tmanusia[c].taun);
              for (e = 0 ; e < (cek[5]-un[c])+1 ; e++){
                printf(" ");
              }
              iseng++;
              printf("|\n");
            }
            //===================================================================
            printf("+");
            for (c = 0 ; c < cek[0]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[1]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[3]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[4]+2 ; c++){
              printf("-");
            }
            printf("+");
            for (c = 0 ; c < cek[5]+2 ; c++){
              printf("-");
            }
            printf("+\n");
            //===================================================================

            printf("%d row in set (%0.3f sec)\n", uji[2], iseng/1000); //--------Menampilkan estimasi waktu
          }else{ // Kondisi jika melakukan join tperjalanan dan tcitacita
            printf("\aKu bingung harus nampilin apa :((\n");
          }
        }
      }
    }
  }
}

// Query Insert
void masukin(int n, char prth[], char kueri[]){
  int c = 0; //------------------------------------------------------------------Iterasi looping
  d = 0; //----------------------------------------------------------------------Sebagai banyaknya data
  int e; //----------------------------------------------------------------------Iterasi looping
  int pin = n; //----------------------------------------------------------------Sebagai pin (tanda) indeks
  n = maju(n, 0, kueri, prth,0); //----------------------------------------------Melakukan Increament kata
  char tmp[3][50]; //------------------------------------------------------------Sebagai variabel tampungan sementara

  // Deklarasi typedef struct
  cita tcita[250];
  jalan tjalan[250];
  jelema tmanusia[250];

  // Kondisi jika melakukan insert data file tcitacita
  if (strcmp(kueri,"tcitacita") == 0){
    n = maju(n, 0, kueri, prth,0);
    if (strcmp(kueri,"values") == 0){
      lean = 1; //---------------------------------------------------------------Agar menjadi case sensitive

      // Melakukan looping menyimpan data sementara
      while (belakang(n, 0, prth,0) == 1){
        n = maju(n, 0, tmp[c], prth,0);
        c++;
      }
      // Kondisi jika jumlah values tidak sesuai
      if (c > 2 || c < 2){
        printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
      }else{ // Kondisi jika jumlah values benar
        int sim = 0; //----------------------------------------------------------Menampung hasil konversi string-integer

        // Melakukan konversi string-integer
        while (tmp[0][d] >= 48 && tmp[0][d] <= 57 && d < strlen(tmp[0])){
          sim *= 10;
          sim += ((int)tmp[0][d])-48;
          d++;
        }

        // Kondisi jika nilai data bukan integer
        if (d != strlen(tmp[0])){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{ // Kondisi jika benar
          d = 0;
          pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia); //-----------------Melakukan read file

          // Kondisi jika tidak terdapat primary key yang sama
          if (tcita[d].kode != sim){
            // Melakukan sequential file
            FILE *in = fopen("tcitacita.dat","w");
            // Insert data
            tcita[d].kode = sim;
            strcpy(tcita[d].nama,tmp[1]);
            quickcita(d+1,tcita,0,d); //-----------------------------------------Melakukan sorting data

            // Looping untuk insert data ke dalam file
            for (c = 0 ; c < d+1 ; c++){
              fprintf(in, "%d %s\n", tcita[c].kode, tcita[c].nama);
            }
            fprintf(in, "-127465 #d@7#\n"); //-----------------------------------Data dummy
            fclose(in);

            // Kondisi setelah berhasil melakukan proses insert data
            printf("Ciee Berhasil :D\n");
            berhasil(); //-------------------------------------------------------Sound effect berhasil
            milih(pin,prth,kueri); //--------------------------------------------Menampilkan tabel setelah insert
          }else{ // Kondisi jika terdapat primary key yang sama
            printf("\aFailed to input data. There is the same primary key.\n");
          }
        }
      }
    }else{ // Kondisi jika salah memasukkan perintah
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else

  // Kondisi jika melakukan insert data file tperjalanan
  if (strcmp(kueri,"tperjalanan") == 0){
    n = maju(n, 0, kueri, prth,0);
    if (strcmp(kueri,"values") == 0){
      lean = 1; //---------------------------------------------------------------Agar case sensitive

      // Looping untuk menampung data yang akan diinputkan
      while (belakang(n, 0, prth,0) == 1){
        n = maju(n, 0, tmp[c], prth,0);
        c++;
      }

      // Kondisi jika jumlah values tidak sesuai
      if (c > 3 || c < 3){
        printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
      }else{ // Kondisi jika jumlah values sesuai
        int sim = 0; // Untuk menampung angka hasil konversi string-integer (kode)
        int tn = 0; // Untuk menampung angka hasil konversi string-integer (tahun)
        c = 0;

        // Konversi string kode
        while (tmp[0][d] >= 48 && tmp[0][d] <= 57 && d < strlen(tmp[0])){
          sim *= 10;
          sim += ((int)tmp[0][d])-48;
          d++;
        }

        // Konversi string tahun
        while (tmp[2][c] >= 48 && tmp[2][c] <= 57 && c < strlen(tmp[2])){
          tn *= 10;
          tn += ((int)tmp[2][c])-48;
          c++;
        }

        // Kondisi jika nilai kode bukan integr
        if (d != strlen(tmp[0])){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else

        // Kondisi jika nilai tahun bukan integer
        if (c != strlen(tmp[2])){
          printf("\aYou have an error in your Gabut syntax. Error in input data `tahun`.\nData input `%s` does not match variable.\n", tmp[2]);
        }else{ // Kondisi jika sesuai variabel
          d = 0;
          pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia); //-----------------Melakukan proses read file

          // Kondisi jika tidak ada primary key yang sama
          if (tjalan[d].kode != sim){

            // Melakukan sequential file
            FILE *in = fopen("tperjalanan.dat","w");

            // Input data
            tjalan[d].kode = sim;
            strcpy(tjalan[d].catat,tmp[1]);
            tjalan[d].taun = tn;
            quickjalan(d+1,tjalan,0,d); //---------------------------------------Melakukan proses sorting data

            // Looping untuk insert data ke dalam file
            for (c = 0 ; c < d+1 ; c++){
              fprintf(in, "%d %s %d\n", tjalan[c].kode, tjalan[c].catat, tjalan[c].taun);
            }
            fprintf(in, "-127465 #d@7# -132840\n"); //---------------------------Membuat data dummy
            fclose(in);

            // Kondisi jika proses telah berhasil
            printf("Ciee Berhasil :D\n");
            berhasil(); //-------------------------------------------------------Sound effect berhasil
            milih(pin,prth,kueri); //--------------------------------------------Menampilkan tabel
          }else{ // Kondisi jika terdapat primary key yang sama
            printf("\aFailed to input data. There is the same primary key.\n");
          }
        }
      }
    }else{ // Kondisi jika terdapat kesalahan perintah query
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else

  // Kondisi jika melakukan insert data file tmanusia
  if (strcmp(kueri,"tmanusia") == 0){
    n = maju(n, 0, kueri, prth,0);
    if (strcmp(kueri,"values") == 0){

      // Mendeteksi banyaknya values
      while (belakang(n, 0, prth,0) == 1){
        n = maju(n, 0, tmp[c], prth,0);
        c++;
      }

      // Jika values tidak sesuai
      if (c > 3 || c < 3){
        printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
      }else{ // Jika values sesuai
        int sim = 0; //----------------------------------------------------------Menampung nilai integer hasil konversi KodeCitaCita
        int sim2 = 0; //---------------------------------------------------------Menampung nilai integer hasil konversi kodeperjalanan
        c = 0;

        // Konversi string-integer kodecitacita
        while (tmp[1][d] >= 48 && tmp[1][d] <= 57 && d < strlen(tmp[1])){
          sim *= 10;
          sim += ((int)tmp[1][d])-48;
          d++;
        }
        // Konversi string-integer kodeperjalanan
        while (tmp[2][c] >= 48 && tmp[2][c] <= 57 && c < strlen(tmp[2])){
          sim2 *= 10;
          sim2 += ((int)tmp[2][c])-48;
          c++;
        }

        // Kondisi jika bukan merupakan integer
        if (d != strlen(tmp[1])){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else
        if (c != strlen(tmp[2])){
          printf("\aYou have an error in your Gabut syntax. Error in input data `tahun`.\nData input `%s` does not match variable.\n", tmp[2]);
        }else{ // Kondisi jika sesuai variabel
          d = 0;
          strcpy(namajel,tmp[0]); //---------------------------------------------Tampung nama sementara

          // Melakukan proses sequential file
          pail(0,sim,sim,"tcitacita",kueri,tcita,tjalan,tmanusia);
          if(tcita[d].kode == sim){ // Kondisi jika KodeCitaCita ada di dalam file tcitacita
            d = 0;
            pail(0,sim2,sim2,"tperjalanan",kueri,tcita,tjalan,tmanusia);
            if (tjalan[d].kode == sim2){ // Kondisi jika kodeperjalanan ada di dalam file tperjalanan
              d = 0;
              pail(pin,sim,sim2,prth,kueri,tcita,tjalan,tmanusia);

              // Kondisi jika tidak ada primary key yang sama
              if (strcmp(tmanusia[d].nama,tmp[0]) != 0 && tmanusia[d].kd_cita != sim && tmanusia[d].kd_jalan != sim2){

                // Melakukan sequential file
                FILE *in = fopen("tmanusia.dat","w");

                // Input data
                tmanusia[d].kd_cita = sim;
                strcpy(tmanusia[d].nama,tmp[0]);
                tmanusia[d].kd_jalan = sim2;
                quickmns(d+1,tmanusia,0,d); //-----------------------------------Melakukan proses sorting

                // Melakukan insert data ke dalam file
                for (c = 0 ; c < d+1 ; c++){
                  fprintf(in, "%s %d %d\n", tmanusia[c].nama, tmanusia[c].kd_cita, tmanusia[c].kd_jalan);
                }
                fprintf(in, "#d@7# -127465 -132840"); //-------------------------Membuat data dummy
                fclose(in);

                // Kondisi jika proses telah berhasil
                printf("Ciee Berhasil :D\n");
                berhasil(); //---------------------------------------------------Sound effect berhasil
                milih(pin,prth,kueri); //----------------------------------------Menampilkan tabel
              }else{ // Kondisi jika terdapat primary key yang sama
                printf("\aFailed to input data. There is the same primary key.\n");
              }
            }else{ // Kondisi jika tidak ditemukan KodePerjalanan yang sama
              printf("\aFailed to input data. Values %d not found.\n",sim2);
            }
          }else{ // Kondisi jika tidak ditemukan kodecitacita yang sama
            printf("\aFailed to input data. Values %d not found.\n",sim);
          }
        }
      }
    }else{ // Kondisi jika terdapat perintah yang salah
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else{ // Kondisi jika file tidak sesuai
    printf("\aFile '%s' doesn't exist\n", kueri);
  }
}

// Query Update
void ubah(int n, char prth[], char kueri[]){
  int c = 0; //------------------------------------------------------------------Untuk melakukan iterasi looping
  d = 0;
  int e; //----------------------------------------------------------------------Untuk iterasi looping
  int pin = n; //----------------------------------------------------------------Untuk tanda indeks pita
  n = maju(n, 0, kueri, prth,0);
  char tmp[3][50]; //------------------------------------------------------------Variabel tampungan

  // Deklarasi typedef struct
  cita tcita[250];
  jalan tjalan[250];
  jelema tmanusia[250];

  // Kondisi jika memanggil tcitacita
  if (strcmp(kueri,"tcitacita") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"where") == 0){
      n = maju(n, 0, kueri, prth, 0);
      if (strcmp(kueri,"kode") == 0){
        int sim = 0; //----------------------------------------------------------Sebagai nilai tampungan konversi kode
        lean = 1; //-------------------------------------------------------------Agar case sensitive
        n = maju(n, 0, kueri, prth, 0);

        // Melakukan konversi string ke integer
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        lean = 0; //-------------------------------------------------------------Agar case tidak sensitive

        // Kondisi jika variable bukan integer
        if (d != strlen(kueri)){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{ // KOndisi jika variable sesuai
          d = 0;
          pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia);

          // Kondisi jika tidak ditemukan primary key yang sama
          if (sim != tcita[d].kode){
            printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{ // Kondisi jika ditemukan primary key yang sama
            e = d; //------------------------------------------------------------Pin indeks isi data file
            n = maju(n, 0, kueri, prth, 0);

            // Melakukan proses update
            if (strcmp(kueri,"set") == 0){
              n = maju(n, 0, kueri, prth, 0);
              lean = 1; //-------------------------------------------------------Agar case sensitive
              if (strcmp(kueri,"nama") == 0){ // Kondisi jika akan mengupdate nama
                if (belakang(n, 0, prth,0) == 1){ // Jika terdapat nilai yang akan di set
                  n = maju(n, 0, kueri, prth, 0);
                  if(belakang(n, 0, prth,0) == 0){ // Jika tidak ada kata lain setelah current kata
                    strcpy(tmp[0],kueri); //-------------------------------------Menyimpan data sementara nama
                    d = 0;
                    pail(pin,-121,-212,prth,kueri,tcita,tjalan,tmanusia); //-----Read file
                    strcpy(tcita[e].nama,tmp[0]); //-----------------------------Update data pada primary key yang telah ditentukan

                    // Melakukan sequential file
                    FILE *in = fopen("tcitacita.dat","w");

                    // Update data ke dalam file
                    for (c = 0 ; c < d ; c++){
                      fprintf(in, "%d %s\n", tcita[c].kode, tcita[c].nama);
                    }
                    fprintf(in, "-127465 #d@7#\n"); //---------------------------Membuat data dummy
                    fclose(in);

                    // Kondisi jika proses berhasil
                    printf("Ciee Berhasil :D\n");
                    berhasil(); //-----------------------------------------------Sound effect berhasi
                    milih(pin,prth,kueri); //------------------------------------Menampilkan tabel setelah update
                  }else{ // Kondisi jika jumlah values tidak sesuai
                    printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
                  }
                }else{ // Kondisi jika user tidak memasukkan data pengganti
                  printf("\aYou have an error in your Gabut syntax. Mau diganti jadi apa nama nya -_- ??\n");
                }
              }else // Kondisi jika akan mengupdate kode
              if(strcmp(kueri,"kode") == 0){
                if (belakang(n, 0, prth,0) == 1){ // Kondisi jika ada nilai ganti
                  n = maju(n, 0, kueri, prth, 0);
                  strcpy(tmp[2],kueri); //---------------------------------------Menampung nilai kode berupa string
                  if(belakang(n, 0, prth,0) == 0){ // Kondisi jika ada tidak ada kata lain setelah current kata
                    d = 0;
                    strcpy(namajel,"\0"); //-------------------------------------Agar prosedur read sequential file tidak error
                    strcpy(tmp[1],"tmanusia");
                    pail(0,sim,-131,tmp[1],kueri,tcita,tjalan,tmanusia);

                    // Jika terdapat foreign key pada file tmanusia
                    if (tmanusia[d].kd_cita == sim){
                      printf("\aYou have an error in your Gabut syntax. Cannot delete or update a parent row.\n");
                    }else{ // Jika belum dijadikan sebagai foreign key
                      c = 0;
                      sim = 0; //------------------------------------------------Untuk menyimpan hasil konversi kode
                      while (tmp[2][c] >= 48 && tmp[2][c] <= 57 && c < strlen(tmp[2])){
                        sim *= 10;
                        sim += ((int)tmp[2][c])-48;
                        c++;
                      }

                      // Jika kode bukan integer
                      if (c != strlen(tmp[2])){
                        printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", kueri);
                      }else{ // Kondisi jika variabel sesuai
                        d = 0;
                        pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia); // Melakukan read sequential file

                        // Kondisi jika tidak ditemukan primary key yang sama
                        if (tcita[d].kode != sim){
                          tcita[e].kode = sim; //--------------------------------Mengupdate kode
                          quickcita(d,tcita,0,d-1); //---------------------------Melakukan proses sorting

                          // Melakukan sequential file
                          FILE *in = fopen("tcitacita.dat","w");

                          // Looping untuk memasukkan data yang sudah di update ke dalam file
                          for (c = 0 ; c < d ; c++){
                            fprintf(in, "%d %s\n", tcita[c].kode, tcita[c].nama);
                          }
                          fprintf(in, "-127465 #d@7#\n"); //---------------------membuat data dummy
                          fclose(in);

                          // Kondisi jika proses berhasil
                          printf("Ciee Berhasil :D\n");
                          berhasil(); //-----------------------------------------Sound effect berhasil
                          milih(pin,prth,kueri); //------------------------------Menampilkan isi tabel
                        }else{ // Kondisi jika terdapat primary key yang sama
                          printf("\aFailed to update data. There is the same primary key.\n");
                        }
                      }
                    }
                  }else{ // Kondisi jika inputan tidak sesuai
                    printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
                  }
                }else{ // kondisi jika tidak ada pengganti
                  printf("\aYou have an error in your Gabut syntax. Mau diganti jadi apa kode nya -_- ??\n");
                }
              }else{ // Kondisi jika terdapat nama kolom yang salah
                printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
              }
            }else{ // Kondisi jika terdapat perintah yang salah
              printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
            }
          }
        }
      }else{ // Kondisi jika tidak ditemukan primary key
        printf("\aYou have an error in your Gabut syntax. '%s' in not primary key.\n",kueri);
      }
    }else{ // Kondisi jika terdapat kesalah perintah
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else

  // Kodnsi jika memanggil tperjalanan
  if(strcmp(kueri,"tperjalanan") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"where") == 0){
      n = maju(n, 0, kueri, prth, 0);
      if (strcmp(kueri,"kode") == 0){
        int sim = 0;
        lean = 1;
        n = maju(n, 0, kueri, prth, 0);

        // Konversi string menjadi integer
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        lean = 0;

        // Kondisi jika hasil konversi bukan integer
        if (d != strlen(kueri)){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tjalan[d].kode){ // Kondisi jika tidak ditemukan primary key yang sama
            printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{
            e = d;
            n = maju(n, 0, kueri, prth, 0);

            // Proses update data
            if (strcmp(kueri,"set") == 0){
              n = maju(n, 0, kueri, prth, 0);
              lean = 1;

              // Kondisi jika catatan akan di update
              if (strcmp(kueri,"catatan") == 0){
                if (belakang(n, 0, prth,0) == 1){
                  n = maju(n, 0, kueri, prth, 0);
                  if(belakang(n, 0, prth,0) == 0){
                    strcpy(tmp[0],kueri);
                    d = 0;
                    pail(pin,0,0,prth,kueri,tcita,tjalan,tmanusia);
                    strcpy(tjalan[e].catat,tmp[0]); //---------------------------Update catatan pada primary key yang sama

                    // Melakukan proses write
                    FILE *in = fopen("tperjalanan.dat","w");

                    // Update data ke dalam file
                    for (c = 0 ; c < d ; c++){
                      fprintf(in, "%d %s %d\n", tjalan[c].kode, tjalan[c].catat, tjalan[c].taun);
                    }
                    fprintf(in, "-127465 #d@7# -132840\n"); //-------------------Membuat dummy file
                    fclose(in);

                    printf("Ciee Berhasil :D\n");
                    berhasil();
                    milih(pin,prth,kueri);
                  }else{ // Kondisi jika jumlah values lebih dari 1
                    printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
                  }
                }else{ // Kondisi jika user tidak menuliskan data akan diupdate menjadi apa
                  printf("\aYou have an error in your Gabut syntax. Mau diganti jadi apa catatan nya -_- ??\n");
                }
              }else

              // Kondisi jika akan mengupdate kode
              if(strcmp(kueri,"kode") == 0){
                if (belakang(n, 0, prth,0) == 1){
                  n = maju(n, 0, kueri, prth, 0);
                  strcpy(tmp[2],kueri);
                  if(belakang(n, 0, prth,0) == 0){
                    d = 0;
                    strcpy(namajel,"\0");
                    pail(0,-6927,sim,"tmanusia",kueri,tcita,tjalan,tmanusia);
                    if (tmanusia[d].kd_jalan == sim){ // Kondisi jika kode sudah merupakan foreign key
                      printf("\aYou have an error in your Gabut syntax. Cannot delete or update a parent row.\n");
                    }else{ // Kondisi jika kode belum dijadikan foreign key
                      c = 0;
                      sim = 0;

                      // Proses konversi string ke integer
                      while (tmp[2][c] >= 48 && tmp[2][c] <= 57 && c < strlen(tmp[2])){
                        sim *= 10;
                        sim += ((int)tmp[2][c])-48;
                        c++;
                      }

                      // Kondisi jika hasil konversi bukan integer
                      if (c != strlen(tmp[2])){
                        printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", kueri);
                      }else{ // Kondisi jika variabel sesuai
                        d = 0;
                        pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia);

                        // Kondisi jika tidak terdapat primary key yang sama
                        if (tjalan[d].kode != sim){
                          tjalan[e].kode = sim; //-------------------------------Update kode
                          quickjalan(d,tjalan,0,d-1); //-------------------------Sorting data

                          // Melakukan write file
                          FILE *in = fopen("tperjalanan.dat","w");
                          // Update data ke dalam file
                          for (c = 0 ; c < d ; c++){
                            fprintf(in, "%d %s %d\n", tjalan[c].kode, tjalan[c].catat, tjalan[c].taun);
                          }
                          fprintf(in, "-127465 #d@7# -132840\n"); //-------------Membuat data dummy
                          fclose(in);

                          printf("Ciee Berhasil :D\n");
                          berhasil();
                          milih(pin,prth,kueri);
                        }else{ // Kondisi jika terdapat primary key yang sama
                          printf("\aFailed to update data. There is the same primary key.\n");
                        }
                      }
                    }
                  }else{ // Kondisi jika user berlebihan memasukkan input
                    printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
                  }
                }else{ // Kondisi jika user tidak melakukan update apa-apa
                  printf("\aYou have an error in your Gabut syntax. Mau diganti jadi apa kode nya -_- ??\n");
                }
              }else

              // Kondisi jika akan mengupdate tahun
              if(strcmp(kueri,"tahun") == 0){
                if (belakang(n, 0, prth,0) == 1){
                  n = maju(n, 0, kueri, prth, 0);
                  if(belakang(n, 0, prth,0) == 0){
                    c = 0;
                    sim = 0;

                    // Melakukan konversi string ke integer
                    while (kueri[c] >= 48 &&kueri[c] <= 57 && c < strlen(kueri)){
                      sim *= 10;
                      sim += ((int)kueri[c])-48;
                      c++;
                    }

                    // Kondisi jika hasil konversi bukan integer
                    if (c != strlen(kueri)){
                      printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", kueri);
                    }else{
                      d = 0;
                      pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia);
                      tjalan[e].taun = sim; //-----------------------------------mengupdate tahun
                      quickjalan(d,tjalan,0,d-1); //-----------------------------Sorting data

                      // Proses write file
                      FILE *in = fopen("tperjalanan.dat","w");

                      // Proses update data ke dalam file
                      for (c = 0 ; c < d ; c++){
                        fprintf(in, "%d %s %d\n", tjalan[c].kode, tjalan[c].catat, tjalan[c].taun);
                      }
                      fprintf(in, "-127465 #d@7# -132840\n"); //-----------------membuat data dummy
                      fclose(in);

                      printf("Ciee Berhasil :D\n");
                      berhasil();
                      milih(pin,prth,kueri);
                    }
                  }else{ // Kondisi jika kelebihan input
                    printf("\aYou have an error in your Gabut syntax. The number of inputs is not appropriate.\n");
                  }
                }else{ // Kondisi jika tidak ada yang di set
                  printf("\aYou have an error in your Gabut syntax. Mau diganti jadi apa kode nya -_- ??\n");
                }
              }else{ // Kondisi jika kolom tidak terdapat dalam tabel
                printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
              }
            }else{ // Kondisi jika perintah tidak sesuai
              printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
            }
          }
        }
      }else{ // Kondisi jika bukan merupakan primary key
        printf("\aYou have an error in your Gabut syntax. '%s' in not primary key.\n",kueri);
      }
    }else{ // Kondisi jika perintah tidak sesuai
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else

  // Kondisi jika memanggil tmanusia
  if(strcmp(kueri,"tmanusia") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"where") == 0){
      n = maju(n, 0, kueri, prth, 0);

      // Kondisi-kondisi where dengan 6 kemungkinan namun maksudnya sama aja sih
      if (strcmp(kueri,"kodecitacita") == 0){
        int sim = 0;
        n = maju(n, 0, kueri, prth, 0);

        // Konversi string ke integer
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        lean = 0; // agar case tidak sensitive

        // Kondisi jika hasil konversi bukan merupakan integer
        if (d != strlen(kueri)){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,sim,-212,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tmanusia[d].kd_cita){ // Kondisi jika primary key tidak ditemukan
             printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{ // Kondisi jika primary key ditemukan
            e = d; //------------------------------------------------------------Pin indeks data
            n = maju(n, 0, kueri, prth, 0);
            if (strcmp(kueri,"nama") == 0){
              n = maju(n, 0, kueri, prth, 0);
              if (strcmp(kueri,tmanusia[e].nama) != 0){ // Kondisi jika terdapat primary key yang sama
                printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
              }else{
                n = maju(n, 0, kueri, prth, 0);
                if (strcmp(kueri,"kodeperjalanan") == 0){
                  n = maju(n, 0, kueri, prth, 0);
                  int sim2 = 0;
                  d = 0;

                  // Konversi string ke integer
                  while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                    sim2 *= 10;
                    sim2 += ((int)kueri[d])-48;
                    d++;
                  }

                  // Kondisi jika hasil konversi bukan integer
                  if(d != strlen(kueri)){
                    printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
                  }else{ // Kondisi jika variabel sesuai
                    if(tmanusia[e].kd_jalan != sim2){
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      khsuson(n,prth,kueri,pin,e); //----------------------------Memanggil prosedur untuk write file
                    }
                  }
                }else // Kondisi jika terdapat 2 atau lebih nama file yang sama
                if(strcmp(kueri,"nama") == 0 || strcmp(kueri,"kodecitacita") == 0){
                  printf("\aFailed to process data. There is more than one name of the same column.\n");
                }else{ // Kondisi jika terdapat kesalahan nama kolom
                  printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                }
              }
            }else
            if (strcmp(kueri,"kodeperjalanan") == 0){
              n = maju(n, 0, kueri, prth, 0);
              int sim2 = 0;
              d = 0;
              while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                sim2 *= 10;
                sim2 += ((int)kueri[d])-48;
                d++;
              }

              // Jika variabel kode bukan integer
              if(d != strlen(kueri)){
                printf("You have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
              }else{ // Jika primary key tidak sesuai
                if(tmanusia[e].kd_jalan != sim2){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  n = maju(n, 0, kueri, prth, 0);
                  if (strcmp(kueri,"nama") == 0){
                    n = maju(n, 0, kueri, prth, 0);
                    if (strcmp(kueri,tmanusia[e].nama) != 0){ // Jika primary key tidak sesuai
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      khsuson(n,prth,kueri,pin,e);
                    }
                  }else // Kondisi jika user memanggil 2 kolom yang sama
                  if(strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
                    printf("\aFailed to process data. There is more than one name of the same column.\n");
                  }else{ // Jika nama kolom tidak sesuai
                    printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                  }
                }
              }
            }else // Kondisi jika user memanggil 2 kolom yang sama
            if(strcmp(kueri,"kodecitacita") == 0){
              printf("\aFailed to process data. There is more than one name of the same column.\n");
            }else{ // Kondisi jika salah memasukkan nama kolom
              printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
            }
          }
        }
      }else

      //====================================================
      if (strcmp(kueri,"kodeperjalanan") == 0){
        int sim = 0;
        n = maju(n, 0, kueri, prth, 0);
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        if (d != strlen(kueri)){ // Kondisi jika input kode bukan integer
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,-212,sim,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tmanusia[d].kd_jalan){ // Kondisi jika tidak ditemukan primary key
             printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{
            e = d;
            n = maju(n, 0, kueri, prth, 0);
            if (strcmp(kueri,"nama") == 0){
              n = maju(n, 0, kueri, prth, 0);

              // Kondisi jika primary key tidak sesuai
              if (strcmp(kueri,tmanusia[e].nama) != 0){
                printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
              }else{
                n = maju(n, 0, kueri, prth, 0);
                if (strcmp(kueri,"kodecitacita") == 0){
                  n = maju(n, 0, kueri, prth, 0);
                  int sim2 = 0;
                  d = 0;
                  while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                    sim2 *= 10;
                    sim2 += ((int)kueri[d])-48;
                    d++;
                  }

                  // Kondisi jika inout kode bukan integer
                  if(d != strlen(kueri)){
                    printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
                  }else{

                    // Kondisi jika primary key tidak sesuai
                    if(tmanusia[e].kd_cita != sim2){
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      khsuson(n,prth,kueri,pin,e); //----------------------------Memanggil prosedur untuk melakukan write file
                    }
                  }
                }else // Kondisi jika terdapat lebih dari 1 nama kolom yang sama
                if(strcmp(kueri,"nama") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
                  printf("\aFailed to process data. There is more than one name of the same column.\n");
                }else{ // Kondisi jika kesalahan nama kolom
                  printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                }
              }
            }else
            if (strcmp(kueri,"kodecitacita") == 0){
              n = maju(n, 0, kueri, prth, 0);
              int sim2 = 0;
              d = 0;
              while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                sim2 *= 10;
                sim2 += ((int)kueri[d])-48;
                d++;
              }

              // Kondisi jika inputan kode bukan integer
              if(d != strlen(kueri)){
                printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
              }else{ // Kondisi jika primary key tidak sesuai
                if(tmanusia[e].kd_cita != sim2){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  n = maju(n, 0, kueri, prth, 0);
                  if (strcmp(kueri,"nama") == 0){
                    n = maju(n, 0, kueri, prth, 0);
                    if (strcmp(kueri,tmanusia[e].nama) != 0){ // Kondisi jika primary key tidak sesuai
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      khsuson(n,prth,kueri,pin,e); //----------------------------Melakukan prosedur write file
                    }
                  }else

                  // Kondisi jika terdapat lebih dari 1 kolom yang sama
                  if(strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
                    printf("\aFailed to process data. There is more than one name of the same column.\n");
                  }else{ // Kondisi jika kesalahan dalam nama kolom
                    printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                  }
                }
              }
            }else

            // Kondisi jika terdapat lebih dari 1 kolom yang sama
            if(strcmp(kueri,"kodeperjalanan") == 0){
              printf("\aFailed to process data. There is more than one name of the same column.\n");
            }else{ // Kondisi jika kesalahan dalam nama kolom
              printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
            }
          }
        }
      }else
      //====================================================

      if (strcmp(kueri,"nama") == 0){
        n = maju(n, 0, kueri, prth, 0);
        d = 0;
        strcpy(namajel,kueri);
        pail(pin,-121,-121,prth,kueri,tcita,tjalan,tmanusia);
        if (strcmp(namajel,tmanusia[d].nama) != 0){ // Kondsii jika tidak ditemukan primary key yang sama
          printf("\aFailed to process data. Values %s not found.\n", namajel);
        }else{
          n = maju(n, 0, kueri, prth, 0);
          e = d;
          if(strcmp(kueri,"nama") == 0){ // Kondisi jika terdapat lebih dari 1 kolom yang sama
            printf("\aFailed to process data. There is more than one name of the same column.\n");
          }else // Kondisi jika terdapat kesalahan nama kolom
          if(strcmp(kueri,"kodecitacita") != 0 && strcmp(kueri,"kodeperjalanan") != 0){
            printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n", kueri);
          }else
          if(strcmp(kueri,"kodecitacita") == 0){
            n = maju(n, 0, kueri, prth, 0);
            int sim = 0;
            d = 0;
            while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
              sim *= 10;
              sim += ((int)kueri[d])-48;
              d++;
            }

            // Kondisi jika jenis variabel tidak sesuai
            if (d != strlen(kueri)){
              printf("\aYou have an error in your Gabut syntax. Error in input data `Kodecitacita`.\nData input `%s` does not match variable.\n", tmp[0]);
            }else // Kondisi jika primary key tidak sesuai
            if (sim != tmanusia[e].kd_cita){
              printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
            }else{
              n = maju(n, 0, kueri, prth, 0);

              // Kondisi jika terdapat lebih dari 1 nama kolom yang sama
              if(strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"nama") == 0){
                printf("\aFailed to process data. There is more than one name of the same column.\n");
              }else // Kondisi jika terdapat kesalahan nama kolom
              if(strcmp(kueri,"kodeperjalanan") != 0){
                printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n", kueri);
              }else
              if(strcmp(kueri,"kodeperjalanan") == 0){
                n = maju(n, 0, kueri, prth, 0);
                int sim2 = 0;
                d = 0;
                while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                  sim2 *= 10;
                  sim2 += ((int)kueri[d])-48;
                  d++;
                }

                // Kondisi jika terdapat lebih dari 1 nama kolom yang sama
                if (d != strlen(kueri)){
                  printf("\aYou have an error in your Gabut syntax. Error in input data `Kodeperjalanan`.\nData input `%s` does not match variable.\n", tmp[0]);
                }else // Kondisi jika primary key tidak sesuai
                if (sim2 != tmanusia[e].kd_jalan){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  khsuson(n,prth,kueri,pin,e); //--------------------------------Melakukan prosedur write file
                }
              }
            }
          }else
          if(strcmp(kueri,"kodeperjalanan") == 0){
            n = maju(n, 0, kueri, prth, 0);
            int sim2 = 0;
            d = 0;
            while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
              sim2 *= 10;
              sim2 += ((int)kueri[d])-48;
              d++;
            }
            if (d != strlen(kueri)){ // Kondisi jika terdapat kesalahan jenis variabel
              printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
            }else
            if (sim2 != tmanusia[e].kd_jalan){ // Kondisi jika primary key tidak sesuai
              printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
            }else{
              n = maju(n, 0, kueri, prth, 0);

              // Kondisi jika terdapat lebih dari 1 nama kolom yang sama
              if(strcmp(kueri,"kodeperjalanan") == 0 || strcmp(kueri,"nama") == 0){
                printf("\aFailed to process data. There is more than one name of the same column.\n");
              }else // Kondisi jika kesalahan nama kolom
              if(strcmp(kueri,"kodecitacita") != 0){
                printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n", kueri);
              }else
              if(strcmp(kueri,"kodecitacita") == 0){
                n = maju(n, 0, kueri, prth, 0);
                int sim = 0;
                d = 0;
                while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                  sim *= 10;
                  sim += ((int)kueri[d])-48;
                  d++;
                }

                // Kondisi jika kesalahan jenis variabel yang diinputkan
                if (d != strlen(kueri)){
                  printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
                }else // Kondisi jika primary key tidak sesuai
                if (sim != tmanusia[e].kd_cita){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  khsuson(n,prth,kueri,pin,e); //--------------------------------Memanggil prosedur write file
                }
              }
            }
          }
        }
      }

      //====================================================
      else{ // Kondisi jika bukan primary key
        printf("\aYou have an error in your Gabut syntax. '%s' is not primary key.\n",kueri);
      }
    }else{ // Kondisi jika kesalahan dalam melakukan perintah
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else{ // Kondisi jika kesalahan dalam memanggil nama file
    printf("\aFile '%s' doesn't exist\n", kueri);
  }
}

// Query Delete
void hapus(int n, char prth[], char kueri[]){
  int c = 0;
  d = 0;
  int e;
  int pin = n;
  n = maju(n, 0, kueri, prth,0);
  char tmp[3][50];
  cita tcita[250];
  jalan tjalan[250];
  jelema tmanusia[250];
  if (strcmp(kueri,"tcitacita") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"where") == 0){
      n = maju(n, 0, kueri, prth, 0);
      if (strcmp(kueri,"kode") == 0){
        int sim = 0;
        n = maju(n, 0, kueri, prth, 0);
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        if (d != strlen(kueri)){ // Kondisi jika input kode bukan integer
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tcita[d].kode){ // Kondisi jika tidak ditemukan primary key yang sama
            printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{
            e = d;
            d = 0;
            strcpy(namajel,"#d@7#");
            pail(0,sim,-212,"tmanusia",kueri,tcita,tjalan,tmanusia);

            // Kondisi jika kode merupakan parent row
            if (tmanusia[d].kd_cita == sim){
              printf("\aYou have an error in your Gabut syntax. Cannot delete or update a parent row.\n");
            }else{
              d = 0;
              pail(pin,-121,-212,prth,kueri,tcita,tjalan,tmanusia);
              FILE *in = fopen("tcitacita.dat","w");
              for (c = 0 ; c < d ; c++){
                if (c != e){
                  fprintf(in, "%d %s\n", tcita[c].kode, tcita[c].nama);
                }
              }
              fprintf(in, "-127465 #d@7#\n");
              fclose(in);
              printf("Ciee Berhasil :D\n");
              berhasil();
              milih(pin,prth,kueri);
            }
          }
        }
      }else{ // Kondisi jika tidak bukan primary key
        printf("You have an error in your Gabut syntax. '%s' in not primary key.\n",kueri);
      }
    }else{ // Kondisi jika terdapat kesalahan printah
      printf("You have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else
  if(strcmp(kueri,"tperjalanan") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"where") == 0){
      n = maju(n, 0, kueri, prth, 0);
      if (strcmp(kueri,"kode") == 0){
        int sim = 0;
        n = maju(n, 0, kueri, prth, 0);
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        if (d != strlen(kueri)){ // Kondisi jika kode bukan merupakan integer
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,sim,sim,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tjalan[d].kode){ // Kondisi jika primary key tidak ditemukan
            printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{
            e = d;
            d = 0;
            strcpy(namajel,"#d@7#");
            pail(0,-212,sim,"tmanusia",kueri,tcita,tjalan,tmanusia);
            if (tmanusia[d].kd_jalan == sim){ // Kondisi jika kode merupakan parent row
              printf("\aYou have an error in your Gabut syntax. Cannot delete or update a parent row.\n");
            }else{
              d = 0;
              pail(pin,-121,-212,prth,kueri,tcita,tjalan,tmanusia);
              FILE *in = fopen("tperjalanan.dat","w");
              for (c = 0 ; c < d ; c++){
                if (c != e){
                  fprintf(in, "%d %s %d\n", tjalan[c].kode, tjalan[c].catat, tjalan[c].taun);
                }
              }
              fprintf(in, "-127465 #d@7#\n");
              fclose(in);
              printf("Ciee Berhasil :D\n");
              berhasil();
              milih(pin,prth,kueri);
            }
          }
        }
      }else{ // Kondisi jika bukan primary key
        printf("You have an error in your Gabut syntax. '%s' in not primary key.\n",kueri);
      }
    }else{ // Kondisi jika kesalahan dalam melakukan perintah
      printf("You have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else
  if(strcmp(kueri,"tmanusia") == 0){
    n = maju(n, 0, kueri, prth, 0);
    if (strcmp(kueri,"where") == 0){
      n = maju(n, 0, kueri, prth, 0);
      if (strcmp(kueri,"kodecitacita") == 0){
        int sim = 0;
        n = maju(n, 0, kueri, prth, 0);
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        if (d != strlen(kueri)){ // Kondisi jika input kode bukan integer
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,sim,-212,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tmanusia[d].kd_cita){ // Kondisi jika primary key tidak ditemukan
             printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{
            e = d;
            n = maju(n, 0, kueri, prth, 0);
            if (strcmp(kueri,"nama") == 0){
              n = maju(n, 0, kueri, prth, 0);
              if (strcmp(kueri,tmanusia[e].nama) != 0){ // kondisi jika primary key tidak sesuai
                printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
              }else{
                lean = 0;
                n = maju(n, 0, kueri, prth, 0);
                if (strcmp(kueri,"kodeperjalanan") == 0){
                  n = maju(n, 0, kueri, prth, 0);
                  int sim2 = 0;
                  d = 0;
                  while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                    sim2 *= 10;
                    sim2 += ((int)kueri[d])-48;
                    d++;
                  }
                  if(d != strlen(kueri)){ // Kondisi jika input kode bukan integer
                    printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
                  }else{
                    if(tmanusia[e].kd_jalan != sim2){ // Kondisi jika primary key tidak sesuai
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      apawelah(pin,e,prth,kueri); //-----------------------------Memanggil prosedur untuk melakukan write file
                    }
                  }
                }else

                // Kondisi jika terdapat lebih dari 1 nama kolom yang sama
                if(strcmp(kueri,"nama") == 0 || strcmp(kueri,"kodecitacita") == 0){
                  printf("\aFailed to process data. There is more than one name of the same column.\n");
                }else{ // Kondisi jika nama kolom tidak sesuai
                  printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                }
              }
            }else
            if (strcmp(kueri,"kodeperjalanan") == 0){
              n = maju(n, 0, kueri, prth, 0);
              int sim2 = 0;
              d = 0;
              while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                sim2 *= 10;
                sim2 += ((int)kueri[d])-48;
                d++;
              }
              if(d != strlen(kueri)){ // Kondisi jika input kode bukan integer
                printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
              }else{
                if(tmanusia[e].kd_jalan != sim2){ // Kondisi jika primary key tidak sesuai
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  n = maju(n, 0, kueri, prth, 0);
                  if (strcmp(kueri,"nama") == 0){
                    n = maju(n, 0, kueri, prth, 0);
                    if (strcmp(kueri,tmanusia[e].nama) != 0){ // Kondisi jika primary key tidak sesuai
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      apawelah(pin,e,prth,kueri); //-----------------------------Memanggil prosedur write file
                    }
                  }else

                  // Kondisi jika terdapat lebih dari 1 kolom yang sama
                  if(strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
                    printf("\aFailed to process data. There is more than one name of the same column.\n");
                  }else{ // Kondisi jika nama kolom tidak sesuai
                    printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                  }
                }
              }
            }else

            // Kondisi jika terdapat lebih dari 1 nama kolom yang sama
            if(strcmp(kueri,"kodecitacita") == 0){
              printf("\aFailed to process data. There is more than one name of the same column.\n");
            }else{ // Kondisi jika nama kolom tidak sesuai
              printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
            }
          }
        }
      }else

      //====================================================
      if (strcmp(kueri,"kodeperjalanan") == 0){
        int sim = 0;
        n = maju(n, 0, kueri, prth, 0);
        while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
          sim *= 10;
          sim += ((int)kueri[d])-48;
          d++;
        }
        if (d != strlen(kueri)){
          printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
        }else{
          d = 0;
          pail(pin,-212,sim,prth,kueri,tcita,tjalan,tmanusia);
          if (sim != tmanusia[d].kd_jalan){
             printf("\aFailed to process data. Values %d not found.\n", sim);
          }else{
            e = d;
            n = maju(n, 0, kueri, prth, 0);
            if (strcmp(kueri,"nama") == 0){
              n = maju(n, 0, kueri, prth, 0);
              if (strcmp(kueri,tmanusia[e].nama) != 0){
                printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
              }else{
                lean = 0;
                n = maju(n, 0, kueri, prth, 0);
                if (strcmp(kueri,"kodecitacita") == 0){
                  n = maju(n, 0, kueri, prth, 0);
                  int sim2 = 0;
                  d = 0;
                  while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                    sim2 *= 10;
                    sim2 += ((int)kueri[d])-48;
                    d++;
                  }
                  if(d != strlen(kueri)){
                    printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
                  }else{
                    if(tmanusia[e].kd_cita != sim2){
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      apawelah(pin,e,prth,kueri);
                    }
                  }
                }else
                if(strcmp(kueri,"nama") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
                  printf("\aFailed to process data. There is more than one name of the same column.\n");
                }else{
                  printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                }
              }
            }else
            if (strcmp(kueri,"kodecitacita") == 0){
              n = maju(n, 0, kueri, prth, 0);
              int sim2 = 0;
              d = 0;
              while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                sim2 *= 10;
                sim2 += ((int)kueri[d])-48;
                d++;
              }
              if(d != strlen(kueri)){
                printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
              }else{
                if(tmanusia[e].kd_cita != sim2){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  n = maju(n, 0, kueri, prth, 0);
                  if (strcmp(kueri,"nama") == 0){
                    n = maju(n, 0, kueri, prth, 0);
                    if (strcmp(kueri,tmanusia[e].nama) != 0){
                      printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                    }else{
                      apawelah(pin,e,prth,kueri);
                    }
                  }else
                  if(strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"kodeperjalanan") == 0){
                    printf("\aFailed to process data. There is more than one name of the same column.\n");
                  }else{
                    printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
                  }
                }
              }
            }else
            if(strcmp(kueri,"kodeperjalanan") == 0){
              printf("\aFailed to process data. There is more than one name of the same column.\n");
            }else{
              printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n",kueri);
            }
          }
        }
      }else
      //====================================================

      if (strcmp(kueri,"nama") == 0){
        n = maju(n, 0, kueri, prth, 0);
        d = 0;
        strcpy(namajel,kueri);
        pail(pin,-121,-121,prth,kueri,tcita,tjalan,tmanusia);
        if (strcmp(namajel,tmanusia[d].nama) != 0){
          printf("\aFailed to process data. Values %s not found.\n", namajel);
        }else{
          lean = 0;
          n = maju(n, 0, kueri, prth, 0);
          e = d;
          if(strcmp(kueri,"nama") == 0){
            printf("\aFailed to process data. There is more than one name of the same column.\n");
          }else
          if(strcmp(kueri,"kodecitacita") != 0 && strcmp(kueri,"kodeperjalanan") != 0){
            printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n", kueri);
          }else
          if(strcmp(kueri,"kodecitacita") == 0){
            n = maju(n, 0, kueri, prth, 0);
            int sim = 0;
            d = 0;
            while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
              sim *= 10;
              sim += ((int)kueri[d])-48;
              d++;
            }
            if (d != strlen(kueri)){
              printf("\aYou have an error in your Gabut syntax. Error in input data `Kodecitacita`.\nData input `%s` does not match variable.\n", tmp[0]);
            }else
            if (sim != tmanusia[e].kd_cita){
              printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
            }else{
              n = maju(n, 0, kueri, prth, 0);
              if(strcmp(kueri,"kodecitacita") == 0 || strcmp(kueri,"nama") == 0){
                printf("\aFailed to process data. There is more than one name of the same column.\n");
              }else
              if(strcmp(kueri,"kodeperjalanan") != 0){
                printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n", kueri);
              }else
              if(strcmp(kueri,"kodeperjalanan") == 0){
                n = maju(n, 0, kueri, prth, 0);
                int sim2 = 0;
                d = 0;
                while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                  sim2 *= 10;
                  sim2 += ((int)kueri[d])-48;
                  d++;
                }
                if (d != strlen(kueri)){
                  printf("\aYou have an error in your Gabut syntax. Error in input data `Kodeperjalanan`.\nData input `%s` does not match variable.\n", tmp[0]);
                }else
                if (sim2 != tmanusia[e].kd_jalan){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  apawelah(pin,e,prth,kueri);
                }
              }
            }
          }else
          if(strcmp(kueri,"kodeperjalanan") == 0){
            n = maju(n, 0, kueri, prth, 0);
            int sim2 = 0;
            d = 0;
            while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
              sim2 *= 10;
              sim2 += ((int)kueri[d])-48;
              d++;
            }
            if (d != strlen(kueri)){
              printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
            }else
            if (sim2 != tmanusia[e].kd_jalan){
              printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
            }else{
              n = maju(n, 0, kueri, prth, 0);
              if(strcmp(kueri,"kodeperjalanan") == 0 || strcmp(kueri,"nama") == 0){
                printf("\aFailed to process data. There is more than one name of the same column.\n");
              }else
              if(strcmp(kueri,"kodecitacita") != 0){
                printf("\aYou have an error in your Gabut syntax. There is no `%s` in the table.\n", kueri);
              }else
              if(strcmp(kueri,"kodecitacita") == 0){
                n = maju(n, 0, kueri, prth, 0);
                int sim = 0;
                d = 0;
                while (kueri[d] >= 48 && kueri[d] <= 57 && d < strlen(kueri)){
                  sim *= 10;
                  sim += ((int)kueri[d])-48;
                  d++;
                }
                if (d != strlen(kueri)){
                  printf("\aYou have an error in your Gabut syntax. Error in input data `Kode`.\nData input `%s` does not match variable.\n", tmp[0]);
                }else
                if (sim != tmanusia[e].kd_cita){
                  printf("\aFailed to process data. The value of '%s' does not match with another primary key.\n", kueri);
                }else{
                  apawelah(pin,e,prth,kueri);
                }
              }
            }
          }
        }
      }

      //====================================================
      else{ // Kondisi jika bukan primary key
        printf("\aYou have an error in your Gabut syntax. '%s' is not primary key.\n",kueri);
      }
    }else{ // Kondisi jika kesalahan perintah
      printf("\aYou have an error in your Gabut syntax. There is no `%s` command in the query.\n",kueri);
    }
  }else{ // Kondisi jika kesalahan nama file
    printf("\aFile '%s' doesn't exist\n",kueri);
  }
}
