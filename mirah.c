#include <stdio.h>
#define PHI 3.14

int main()
{
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
	printf("\n\t||      MENGHITUNG KELILING DAN LUAS        ||");
    printf("\n\t||     BANGUN DATAR DAN LUAS PERMUKAAN      ||");
    printf("\n\t||       DAN  VOLUME BANGUN RUANG  			||");
	printf("\n\t**********************************************");
	printf("\n\t||      NI PUTU MIRAH KARTIKA CAHYANI 		||");
	printf("\n\t||			2205551048, kelas C             ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Bangun Datar :                    ||");
    printf("\n\t|| 1. lingkaran                             ||");
    printf("\n\t|| 2. Segitiga sama kaki                    ||");
    printf("\n\t|| 3. Persegi                               ||");
    printf("\n\t|| 4. Persegi panjang 						||");
	printf("\n\t|| 5. segitiga sama sisi                    ||");
    printf("\n\t||Pilihan Bangun Ruang :                    ||");
    printf("\n\t|| 6. Balok                                 ||");
    printf("\n\t|| 7. Tabung                                ||");
    printf("\n\t|| 8. Prisma segitiga                       ||");
    printf("\n\t|| 9. Limas segiempat                       ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan menu:");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 9){
		printf("\t----------------------------------------------");
        printf("\n\tpilihan yang Anda inputkan salah!");
        printf("\n\tMohon masukkan pilihan yang benar.\n");
        printf("\t----------------------------------------------");
        printf("\n\tImasukkan pilihan menu:");
		int c;
        while((c=getchar())!='\n' && c!=EOF);
	}

     if(menu==1){
        lingkaran();
    }else if(menu==2){
        segitiga_sama_kaki();
    }else if(menu==3){
        persegi();
    }else if(menu==4){
        persegi_panjang();
    }else if(menu==5){
    	segitiga_sama_sisi();
	}else if(menu==6){
        balok();
    }else if(menu==7){
        tabung();
    }else if(menu==8){
        prisma();
    }else if(menu==9){
        limas();
	}
}

float kll_lingkaran( int r){
	float keliling;
	keliling = 2*3.14*r;
	return keliling;
}

float l_lingkaran( int r){
	float luas;
	luas =  3.14 * r * r;
	return luas;
}

int lingkaran() {
	float radius;
	printf("\t-------------------------------------------\n");
	printf("\tMenghitung Keliling dan Luas Lingkaran     \n");
	printf("\t-------------------------------------------\n");

	printf("\n\tMasukkan radius lingkaran : ");
	while (scanf("%f", &radius)==0 || radius < 1){
		printf("\t----------------------------------------------");
        printf("\n\tpilihan yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan radius dari lingkaran : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}

  	printf("\t-------------------------------------------\n");
  	printf("\tKeliling lingkaran  adalah %.2f", kll_lingkaran( radius));
  	printf("\n\tLuas lingkaran adalah %.2f\n", l_lingkaran( radius));
  	printf("\t-------------------------------------------\n");
  	return 0;
}
float kll_segitiga_sama_kaki(int a, int b){
	float keliling;
	keliling = a + (2 * b);
	return keliling;
}

float l_segitiga_sama_kaki(int a, int t){
	float luas;
	luas =  0.5 * a * t;
	return luas;
}
int segitiga_sama_kaki() {
	float alas, kaki_kaki, tinggi;
	printf("\t-------------------------------------------\n");
	printf("\tMenghitung Keliling dan Luas Segitiga Sama Kaki\n");
	printf("\t-------------------------------------------\n");

	printf("\n\tMasukkan alas dari segitiga : ");
	while (scanf("%f", &alas)==0 || alas < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan alas dari segitiga : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
    printf("\n\tMasukkan kaki-kaki dari segitiga : ");
	while (scanf("%f", &kaki_kaki)==0 || kaki_kaki < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan kaki-kaki dari segitiga : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\n\tMasukkan tinggi dari segitiga : ");
  	while (scanf("%f", &tinggi)==0 || tinggi < 1){
	printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan tinggi dari segitiga : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

  	printf("\t-------------------------------------------\n");
  	printf("\tKeliling segitiga sama kaki adalah %.2f", kll_segitiga_sama_kaki(alas, kaki_kaki));
  	printf("\n\tLuas segitiga sama kaki adalah %.2f\n", l_segitiga_sama_kaki(alas, tinggi));
  	printf("\t-------------------------------------------\n");
  	return 0;
}
float kll_persegi(int s){
	float keliling;
	keliling = 4 * s;
	return keliling;
}
float l_persegi(int s){
	float luas;
	luas =  s * s;
	return luas;
}
int persegi() {
	float sisi;
	printf("\t-------------------------------------------\n");
	printf("\tMenghitung Keliling dan Luas Persegi\n");
	printf("\t-------------------------------------------\n");

	printf("\n\tMasukkan sisi dari persegi : ");
	while (scanf("%f", &sisi)==0 || sisi < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan sisi dari persegi : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}

  	printf("\t-------------------------------------------\n");
  	printf("\tKeliling persegi adalah %.2f", kll_persegi(sisi));
  	printf("\n\tLuas persegi adalah %.2f\n", l_persegi(sisi));
  	printf("\t-------------------------------------------\n");
  	return 0;
}
float kll_persegi_panjang(int p, int l){
	float keliling;
	keliling = 2 * (p + l);
	return keliling;
}
float l_persegi_panjang(int p, int l){
	float luas;
	luas =  p * l;
	return luas;
}
int persegi_panjang() {
	float panjang, lebar;
	printf("\t-------------------------------------------\n");
	printf("\tMenghitung Keliling dan Luas Persegi Panjang\n");
	printf("\t-------------------------------------------\n");

	printf("\n\tMasukkan panjang dari persegi panjang : ");
	while (scanf("%f", &panjang)==0 || panjang < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan panjang dari persegi panjang : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
    printf("\n\tMasukkan lebar dari persegi panjang : ");
	while (scanf("%f", &lebar)==0 || lebar < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan lebar dari persegi : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\t-------------------------------------------\n");
  	printf("\tKeliling persegi panjang adalah %.2f", kll_persegi_panjang(panjang, lebar));
  	printf("\n\tLuas persegi panjang adalah %.2f\n", l_persegi_panjang(panjang, lebar));
  	printf("\t-------------------------------------------\n");
  	return 0;
}
float kll_segitiga_sama_sisi(int s){
	float keliling;
	keliling = 3*s;
	return keliling;
}

float l_segitiga_sama_sisi(int s, int t){
	float luas;
	luas =  0.5 * s * t;
	return luas;
}

int segitiga_sama_sisi() {
	float sisi, tinggi;
	printf("\t-------------------------------------------\n");
	printf("\tMenghitung Keliling dan Luas Segitiga Sama Sisi\n");
	printf("\t-------------------------------------------\n");

	printf("\n\tMasukkan sisi dari segitiga : ");
	while (scanf("%f", &sisi)==0 || sisi < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan sisi dari segitiga : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\n\tMasukkan tinggi dari segitiga : ");
  	while (scanf("%f", &tinggi)==0 || tinggi < 1){
	printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan tinggi dari segitiga : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

  	printf("\t-------------------------------------------\n");
  	printf("\tKeliling segitiga sama sisi adalah %.2f", kll_segitiga_sama_sisi(sisi));
  	printf("\n\tLuas segitiga sama sisi adalah %.2f\n", l_segitiga_sama_sisi(sisi, tinggi));
  	printf("\t-------------------------------------------\n");
  	return 0;
}

float volume_balok(int p, int l, int t){
	float volume;
	volume = p * l * t;
	return volume;
}
float lp_balok(int p, int l, int t){
	float luas_permukaan;
	luas_permukaan = 2 * (p*l + p*t + l*t);
	return luas_permukaan;
}
int balok() {
	float panjang, lebar, tinggi;
	printf("\t-----------------------------------------------------\n");
	printf("\tMenghitung Volume dan Luas Permukaan Balok\n");
	printf("\t-----------------------------------------------------\n");

	printf("\n\tMasukkan panjang balok : ");
	while (scanf("%f", &panjang)==0 || panjang < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan panjang balok : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
	printf("\n\tMasukkan lebar balok : ");
	while (scanf("%f", &lebar)==0 || lebar < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan lebar balok : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\n\tMasukkan tinggi balok : ");
	while (scanf("%f", &tinggi)==0 || tinggi < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan tinggi balok : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\t-----------------------------------------------------\n");
  	printf("\tVolume balok adalah %.2f", volume_balok(panjang, lebar, tinggi));
  	printf("\n\tLuas balok adalah %.2f", lp_balok(panjang, lebar, tinggi));
  	printf("\n\t-----------------------------------------------------\n");
  	return 0;
}

float volume_tabung(int r, int t){
	float volume;
	volume = PHI*r*r*t;
	return volume;
}

float lp_tabung(int r, int t){
	float luas_permukaan;
	luas_permukaan =  2*PHI*r*(r+t);
	return luas_permukaan;
}

int tabung() {
	float jari_jari, tinggi;
	printf("\t-------------------------------------------\n");
	printf("\tMenghitung Volume dan Luas Permukaan Tabung\n");
	printf("\t-------------------------------------------\n");

	printf("\n\tMasukkan jari-jari dari tabung : ");
	while (scanf("%f", &jari_jari)==0 || jari_jari < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan jari-jari dari tabung : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\n\tMasukkan tinggi dari tabung : ");
  	while (scanf("%f", &tinggi)==0 || tinggi < 1){
	printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan tinggi dari tabung : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

  	printf("\t-------------------------------------------\n");
  	printf("\tVolume tabung adalah %.2f", volume_tabung(jari_jari, tinggi));
  	printf("\n\tLuas permukaan tabung adalah %.2f\n", lp_tabung(jari_jari, tinggi));
  	printf("\t-------------------------------------------\n");
  	return 0;
}

float volume_prisma(int s, int t_alas, int t_prisma){

	float volume;
	volume =  (0.5 * s * t_alas) * t_prisma;
	return volume;
}

float lp_prisma(int s, int t_alas, int t_prisma){

	float luas_permukaan;
	luas_permukaan =  (2 * (0.5 * s * t_alas)) + ((s + s + s) * t_prisma);
	return luas_permukaan;
}

int prisma() {
	float sisi_alas, tinggi_alas, tinggi_prisma;

	printf("\t----------------------------------------------------\n");
	printf("\tMenghitung Volume dan Luas Permukaan Prisma Segitiga\n");
  	printf("\t----------------------------------------------------\n");

	printf("\n\tMasukkan sisi alas prisma	: ");
	while (scanf("%f", &sisi_alas)==0 || sisi_alas < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan sisi alas prisma	: ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\n\tMasukkan tinggi alas  prisma	: ");
	while (scanf("%f", &tinggi_alas)==0 || tinggi_alas < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan tinggi alas  prisma	: ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
    printf("\n\tMasukkan tinggi prisma         : ");
	while (scanf("%f", &tinggi_prisma)==0 || tinggi_prisma < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan tinggi prisma         : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}

    printf("\n\t----------------------------------------------------\n");
  	printf("\n\tVolume prisma adalah %.2f\n", volume_prisma(sisi_alas, tinggi_alas, tinggi_prisma));
  	printf("\n\tLuas permukaan prisma adalah %.2f\n", lp_prisma(sisi_alas, tinggi_alas, tinggi_prisma));
    printf("\n\t----------------------------------------------------");
  	return 0;
}
float volume_limas(int s1, int t1){
	float volume;
	volume = (1*s1*s1*t1)/3;
	return volume;
}

float lp_limas(int s1, int t2){
	float luas_permukaan;
	luas_permukaan = (s1*s1)+(4*s1*t2)/2;
	return luas_permukaan;
}

int limas() {
	float sisi_alas, tinggi_limas, tinggi_stegak;
	printf("\t-----------------------------------------------------\n");
	printf("\tMenghitung Volume dan Luas Permukaan Limas Segi Empat\n");
	printf("\t-----------------------------------------------------\n");

	printf("\n\tMasukkan panjang sisi alas : ");
	while (scanf("%f", &sisi_alas)==0 || sisi_alas < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan panjang sisi alas : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
	printf("\n\tMasukkan tinggi limas : ");
	while (scanf("%f", &tinggi_limas)==0 || tinggi_limas < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan tinggi limas : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\n\tMasukkan tinggi sisi tegak : ");
	while (scanf("%f", &tinggi_stegak)==0 || tinggi_stegak < 1){
		printf("\t----------------------------------------------");
        printf("\n\tKarakter yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar.\n");
        printf("\t----------------------------------------------");
		printf("\n\tMasukkan tinggi sisi tegak : ");
		int c;
		while((c=getchar())!='\n' && c!=EOF);

	}
  	printf("\t-----------------------------------------------------\n");
  	printf("\tVolume limas segi empat adalah %.2f", volume_limas(sisi_alas, tinggi_limas));
  	printf("\n\tLuas permukaan limas segi empat adalah %.2f", lp_limas(sisi_alas, tinggi_stegak));
  	printf("\n\t-----------------------------------------------------\n");
  	return 0;
}
