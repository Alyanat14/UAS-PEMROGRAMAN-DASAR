#include <stdio.h>
#include <stdlib.h>
//NAMA: ALYA RIZKY NATASYA
//NIM : 202102011013

int kalkulator_bmi(){

   float berat_badan,tinggi_badan_cm,tinggi_badan_m,usia,hasil;
   char jenis_kelamin[2];
   printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
   printf("\t\t\t\t       Kalkulator BMI \n");
   printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
   printf("Jenis Kelamin         : ");
   getchar();
   gets(jenis_kelamin);
   printf("Masukkan Usia Anda    : ");
   scanf("%f",&usia);
   printf("Masukkan Tinggi Badan : ");
   scanf("%f",&tinggi_badan_cm);
   printf("Masukkan Berat Badan  : ");
   scanf("%f",&berat_badan);

   tinggi_badan_m=tinggi_badan_cm/100;
   tinggi_badan_m=tinggi_badan_m*2;

   hasil=berat_badan/tinggi_badan_m;

   printf("Hasil BMI Anda        : %.1f \n",hasil);
   printf("Keterangan            : ");


   if (hasil<18.5){
    printf("Kurang Berat \n\n");
    puts("  Anda juga memiliki risiko penyakit tertentu akibat kekurangan nutrisi dan sistem    ");
    puts("  kekebalan tubuh yang lemah. Hal ini membuka peluang pada risiko kesehatan berikut:  ");
    puts("  Malnutrisi,Anemia,Osteoporosis karena kekurangan kalsium dan vitamin D,Masalah ke-  ");
    puts("  suburan dari siklus menstruasi tidak teratur,Risiko komplikasi operasi yang lebih   ");
    puts("  Pertumbuhan dan masalah perkembangan yang terhambat pada anak dan remaja.           ");
    puts("");
   }
   else if (hasil>=18.5 && hasil<22.9){
    printf("Normal \n\n");
    puts(" Orang dengan nilai indeks massa tubuh normal tetap mungkin berisiko mengalami penyakit    ");
    puts(" tertentu. Namun risikonya lebih rendah ketimbang orang dengan nilai IMT yang tidak normal ");
    puts("");
   }
   else if (hasil>=23 && hasil<=24.9){
    printf("Kelebihan Berat Badan \n\n");
    puts(" Kelebihan berat badan dapat meningkatkan risiko diabetes tipe 2, hipertensi, gangguan jantung ");
    puts(" stroke, osteoartritis, perlemakan hati (fatty liver), penyakit ginjal, hingga beberapa jenis  ");
    puts(" kanker tertentu.");
    puts("");
   }
   else if (hasil>=25 && hasil<=29.9){
    printf("Obesitas Tingkat 1 \n\n");
    puts(" Obesitas membawa efek bagi tubuh, meningkatkan risiko kematian, serta mengembangkan kondisi  ");
    puts(" kesehatan tertentu, seperti:Diabetes tipe 2, Stroke, Penyakit kantung empedu, Osteoartritis, ");
    puts(" Kanker,Kolesterol LDL tinggi, kolesterol HDL rendah, atau kadar lipid darah yang tidak sehat ");
    puts(" Penyakit jantung koroner, Sleep apnea dan masalah pernapasan,Peradangan kronis dan peningkat-");
    puts(" an stres oksidatif, Depresi klinis, kecemasan, dan kondisi kesehatan mental lainnya   ");
    puts("");
   }
   else if(hasil>30){
    printf("Obesitas Tingkat 2 \n\n");
    puts(" Obesitas meningkatkan risiko seseorang terkena diabetes tipe 2, hipertensi, penyakit jantung,");
    puts(" stroke, osteoartritis, perlemakan hati, penyakit ginjal, dan jenis kanker tertentu.          ");
    puts("");
   }
   else{
    printf("BMI Tidak Tidak Dapat Di Ukur \n");

}
}
int info_bmi(){
    int bmi;

    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t      Informasi BMI\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("1. Apa Itu BMI(IMT)?  \n");
    printf("2. Cara Mengukur BMI(IMT) \n");
    printf("3. Mengapa harus mengukur IMT\n");

    printf("\n Pilih Informasi Yang Ingin Anda Cari : \n");
    scanf("%d",&bmi);

    switch(bmi){
    case 1:
        puts(" Body Mass Index (BMI) atau yang sering dikenal dengan Indeks Massa Tubuh (IMT) adalah nilai ");
        puts(" ukur untuk mengetahui status gizi seseorang berdasarkan berat dan tinggi badannya.          ");
        puts(" Nilai BMI (IMT) juga dapat menjadi alat skrining awal untuk mengetahui risiko seseorang ter ");
        puts(" hadap suatu penyakit.                                                                       ");
        puts("");
        break;
    case 2:
        puts(" BMI atau IMT diukur dengan cara membandingkan berat badan dengan tinggi badan.Cara ini dapat  ");
        puts(" digunakan untuk orang yang berusia di atas 18 tahun. Sedangkan, menghitung indeks massa tubuh ");
        puts(" dengan cara ini tidak berlaku untuk anak dan remaja (usia di bawah 18 tahun).Status gizi anak ");
        puts(" diukur dengan indikator berat badan menurut usia, tinggi badan menurut usia, dan berat badan  ");
        puts(" menurut tinggi badan.                                                                         ");
        puts("");
        break;
    case 3:
        puts(" Mengetahui IMT membantu Anda untuk menjaga rasio lemak tubuh yang terkait dengan tinggi badan Anda.");
        puts(" IMT juga memberi peringatan peluang risiko penyakit yang mungkin mengintai kesehatan Anda.         ");
        puts("");
        break;

}
}
int kalkulator_bmr(){
    int jenis_kelamin;
    float berat_badan,tinggi_badan,usia,hasil;
    float hitung_berat,hitung_tinggi,hitung_umur;
    ulang:
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t       Kalkulator BMR\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Masukkan Tinggi Badan Anda  : ");
    scanf("%f",&tinggi_badan);
    printf("Masukkan Berat Badan Anda   : ");
    scanf("%f",&berat_badan);
    printf("Masukkan Usia Anda          : ");
    scanf("%f",&usia);
    printf("Pilihan Jenis Kelamin       : [1]Pria [2]Wanita");
    printf("\nMasukkan Jenis Kelamin Anda : ");
    scanf ("%d",&jenis_kelamin);


    if (jenis_kelamin == 1){

    hitung_berat=berat_badan*13.7;
    hitung_tinggi=tinggi_badan*5;
    hitung_umur=usia*6.8;
    hasil= 66 + hitung_berat + hitung_tinggi - hitung_umur;
    }

    else if (jenis_kelamin == 2 ){

    hitung_berat=berat_badan*9.6;
    hitung_tinggi=tinggi_badan*1.8;
    hitung_umur=usia*4.7;
    hasil= 655 + hitung_berat + hitung_tinggi - hitung_umur;
    }

      printf("Hasil BMR Anda : %.1f \n",hasil);
}

int info_bmr(){
    int bmr;

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t       Informasi BMR\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("1. Apa Itu BMR?  \n");
    printf("2. Apakah BMR dapat membantu menurunkan berat badan? \n");

    printf("\n Pilih Informasi Yang Ingin Anda Cari : \n");
    scanf("%d",&bmr);

    switch(bmr){
    case 1:
        puts(" Tubuh memerlukan bahan bakar agar semua organ dapat melakukan fungsi dasarnya dengan baik, seperti      ");
        puts(" bernapas, mencerna makanan, hingga memompa darah ke seluruh tubuh.BMR adalah kebutuhan kalori minimal   ");
        puts(" yang dipakai organ-organ tubuh untuk melakukan tugas dasarnya. Ini meliputi pernapasan, sirkulasi,dan   ");
        puts(" produksi sel.Prosesnya dikenal sebagai metabolisme.Dengan memenuhi BMR, tubuh dapat tumbuh dan ber-     ");
        puts(" fungsi dengan baik\n");
        puts("");
        break;
    case 2:
        puts(" Mengetahui tingkat metabolik basal (BMR) merupakan langkah awal dalam menentukan target berat badan ideal    ");
        puts(" dan nutrisi yang dibutuhkan.Jika Anda sedang menjaga asupan kalori,maka BMR dibutuhkan untuk menghitung TDEE ");
        puts(" agar dapat memperkirakan seberapa banyak kalori yang perlu dikonsumsi demi menurunkan berat badan.           ");
        puts("");
        break;
}
}
int main(){
    int pilihan;
    char menu [4][20]={"1. Menghitung BMI \n","2. Informasi BMI\n","3. Menghitung BMR\n","4. Informasi BMR\n"};
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t\t\t    Program Cek Kesehatan\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    for(int i = 0;i<4;i++){
    printf("%s",menu[i]);
}
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Apa Ingin Anda Cek : ");
    scanf("%d",&pilihan);

switch(pilihan){

    case 1 :
    kalkulator_bmi();
    break;

    case 2 :
    info_bmi();
    break;

    case 3 :
    kalkulator_bmr();
    break;

    case 4 :
    info_bmr();
    break;



default:

    printf("Maaf Menu Tidak tersedia \n");

}
}
