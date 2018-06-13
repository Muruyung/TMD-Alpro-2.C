/*Saya Robi Naufal Kaosar mengerjakan evaluasi TMD dalam mata kuliah Alpro 2 untuk keberkahanNya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.*/

#include <stdio.h>
#include <string.h>
#include <windows.h> //--Library tambahan untuk menggunakan perintah "exit()" dan membuat sound effect

int d; //----------------Sebagai nilai temporary banyaknya data dalam tabel dan sebagai pin index dalam tabel
int lean; //-------------Sebagai boolean untuk proses Increament Kata
char namajel[50]; //-----Sebagai temporary variabel untuk primary key "nama" pada tmanusia

// Tipe data terstruktur untuk menampung database
typedef struct{
  int kode;
  char nama[50];
}cita;

typedef struct{
  int kode;
  char catat[50];
  int taun;
}jalan;

typedef struct{
  char nama[50]; //----Menampung nama manusia
  char wasta[50]; //---Menampung nama citacita
  int kd_cita;
  int kd_jalan;
  char catat[50]; //---Menampung catatan perjalanan
  int taun; //---------Menampung tahun perjalanan
}jelema;

// Just for fun
void opening();
void berhasil();
void tampil();

// Prosedur Sorting
void quickcita(int n, cita a[], int depan,int pengker);
void quickjalan(int n, jalan a[], int depan,int pengker);
void quickmns(int n, jelema a[], int depan,int pengker);

// Fungsi untuk searching
int teangancita(int n,cita tcita[],int m1,int temu);
int teanganjalan(int n,jalan tjalan[],int m1,int temu);

// Mesin kata
int EOP(int n, char prth[]);
int belakang(int n, int m, char prth[], int bol);
int maju(int n, int m, char kueri[], char prth[], int bol);
int mulai(int n, char kueri[], char prth[]);

// Custom prosedur untuk mempermudah proses tertentu
void pail(int n, int sim, int sim2, char prth[], char kueri[], cita tcita[], jalan tjalan[], jelema tmanusia[]);
void khsuson(int n, char prth[], char kueri[], int pin, int e);
void apawelah(int pin, int e, char prth[],char kueri[]);

// Prosedur untuk melakukan query
void milih(int n, char prth[], char kueri[]);
void masukin(int n, char prth[], char kueri[]);
void ubah(int n, char prth[], char kueri[]);
void hapus(int n, char prth[], char kueri[]);
