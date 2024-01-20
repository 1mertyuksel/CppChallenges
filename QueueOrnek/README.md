# Pideci Uygulaması

Bu C++ programı, bir pideci ve müşterilerin pide almak istediği durumu simüle eden basit bir örnektir.

## Kullanılan Sınıflar

- **Pideci**: Pide satışı ve müşterilerin kuyruğa girişi işlemlerini yönetir.
  
- **Musteri**: Pide almak isteyen müşteri bilgilerini içerir.

## Kullanım

Program, `main` fonksiyonu içinde bir pideci ve müşteri örnekleri oluşturularak çalıştırılmaktadır. Müşterilerin pide almak için kuyruğa girişi ve pide satışı simüle edilmiştir.

```cpp
// ... (main fonksiyonu içinde diğer kodlar)

pideci.pideSat();
pideci.pideSat();
pideci.pideSat();
cout << pideci;

// ... (diğer kodlar)


## Çalıştırma
Programı derlemek ve çalıştırmak için aşağıdaki adımları izleyebilirsiniz:

Derleme:
g++ QueueOrnek.cpp  -o QueueOrnek


Çalıştırma:
./QueueOrnek


## Örnek Çıktı
Programın örnek bir çıktısı şu şekildedir:
Kuyrukta bekleyen musteriler:
1 -> Mert 2 adet pide almak istiyor.
2 -> İlayda 3 adet pide almak istiyor.
3 -> Hasan 3 adet pide almak istiyor.
4 -> Hüseyin 2 adet pide almak istiyor.
5 -> Tuana 1 adet pide almak istiyor.
6 -> Emir 4 adet pide almak istiyor.
Mert 2 adet pidesi verildi.
İlayda 3 adet pidesi verildi.
Hasan 3 adet pidesi verildi.
Kuyrukta bekleyen musteriler:
1 -> Hüseyin 2 adet pide almak istiyor.
2 -> Tuana 1 adet pide almak istiyor.
3 -> Emir 4 adet pide almak istiyor.

