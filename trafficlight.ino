// ================== SET PIN ==================
int utara[] = {2, 3, 4};     // merah, kuning, hijau
int timur[] = {5, 6, 7};
int selatan[] = {8, 9, 10};
int barat[] = {11, 12, 13};

// ================== SETUP ==================
void setup() {
  // Set semua pin sebagai OUTPUT
  for(int i=2; i<=13; i++){
    pinMode(i, OUTPUT);
  }

  semuaMerah();
  
}

// ================== LOOP ==================
void loop() {
  aktifkanSimpang(utara);   // Utara
  aktifkanSimpang(timur);   // Timur
  aktifkanSimpang(selatan); // Selatan
  aktifkanSimpang(barat);   // Barat
}

// ================== FUNGSI ==================

// Semua lampu merah
void semuaMerah(){
  // Utara
  digitalWrite(utara[0], HIGH);
  digitalWrite(utara[1], LOW);
  digitalWrite(utara[2], LOW);

  // Timur
  digitalWrite(timur[0], HIGH);
  digitalWrite(timur[1], LOW);
  digitalWrite(timur[2], LOW);

  // Selatan
  digitalWrite(selatan[0], HIGH);
  digitalWrite(selatan[1], LOW);
  digitalWrite(selatan[2], LOW);

  // Barat
  digitalWrite(barat[0], HIGH);
  digitalWrite(barat[1], LOW);
  digitalWrite(barat[2], LOW);
}

// Aktifkan 1 simpang
void aktifkanSimpang(int lampu[]){
  semuaMerah(); // pastikan semua merah dulu

  // HIJAU ON
  digitalWrite(lampu[0], LOW);   // merah OFF
  digitalWrite(lampu[2], HIGH);  // hijau ON
  delay(5000);

  // HIJAU OFF
  digitalWrite(lampu[2], LOW);

  // KUNING KEDIP 3x
  for(int i=0; i<3; i++){
    digitalWrite(lampu[1], HIGH);
    delay(300);
    digitalWrite(lampu[1], LOW);
    delay(300);
  }

  // KUNING NYALA 2 DETIK
  digitalWrite(lampu[1], HIGH);
  delay(2000);
  digitalWrite(lampu[1], LOW);

  // BALIK KE MERAH
  digitalWrite(lampu[0], HIGH);
}
