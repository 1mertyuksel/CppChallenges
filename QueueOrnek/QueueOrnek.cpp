#include <iostream>
#include <queue>

using namespace std;

class Musteri;

class Pideci {
    queue<Musteri*> kuyruk;

public:
    void pideSat();
    void kuyrugaGir(Musteri* m);

    friend ostream& operator<<(ostream& o, Pideci& p);
};

class Musteri {
    string ad;
    int adet;

public:
    Musteri(string ad, int adet) : ad(ad), adet(adet) {}

    friend ostream& operator<<(ostream& o, Musteri& m);
};

ostream& operator<<(ostream& o, Musteri& m);

ostream& operator<<(ostream& o, Pideci& p) {
    if (p.kuyruk.empty()) {
        o << "Kuyrukta bekleyen müşteri yok" << endl;
    } else {
        o << "Kuyrukta bekleyen musteriler:" << endl;
        int i = 1;
        queue<Musteri*> kuyrukCopy = p.kuyruk;  // Kuyruğun kopyasını oluştur
        while (!kuyrukCopy.empty()) {
            Musteri m = *kuyrukCopy.front();
            o << i << " -> " << m << endl;
            kuyrukCopy.pop();
            i++;
        }
    }
    return o;
}

void Pideci::pideSat() {
    if (kuyruk.empty()) {
        cout << "Pide almak isteyen müşteri yok!" << endl;
    } else {
        Musteri m = *kuyruk.front();
        cout << m << " pidesi verildi." << endl;
        kuyruk.pop();
    }
}

void Pideci::kuyrugaGir(Musteri* m) {
    if (m) {
        kuyruk.push(m);
    }
}

ostream& operator<<(ostream& o, Musteri& m) {
    o << m.ad << " " << m.adet << " adet pide almak istiyor.";
    return o;
}

int main() {
    Pideci pideci;

    Musteri m("Mert", 2);
    Musteri m1("İlayda", 3);
    Musteri m2("Tuana", 1);
    Musteri m3("Emir", 4);
    Musteri m4("Hasan", 3);
    Musteri m5("Hüseyin", 2);

    pideci.kuyrugaGir(&m);
    pideci.kuyrugaGir(&m1);
    pideci.kuyrugaGir(&m4);
    pideci.kuyrugaGir(&m5);
    pideci.kuyrugaGir(&m2);
    pideci.kuyrugaGir(&m3);


    pideci.pideSat();
    pideci.pideSat();
    pideci.pideSat();
    cout << pideci;

    return 0;
}
