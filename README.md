# UTS_Algoritma


##Soal 1

**Alur algoritma**
1. Deklarasikan variabel `int a, b, x, y`
2. Masukan input `cin >> a >> b`
3. Deklarasi nilai `x = a; y = b`
4. Bandingkan apakah `x ! = y`
5. Bila langkah ke-4 bersifat **True** bandingkan apakah `x < y`
6. Bila nilai `x` lebih kecil dari `y` maka jalankan perintah `x = x+a`, bila tidak maka dijalankan perintah `y = y+b`
7. Cetak `cout >> x`

**Berikut code lengkapnya**
```
#include<iostream>
using namespace std;

int main(){

    int a,b,x,y;

    cout << "masukan bilangan x: ";
    cin >> a;
    cout << "masukan bilangan y: ";
    cin >> b;

    x=a;
    y=b;
    if ( x != y) {
        if ( x < y )
            { x = x + a; }
        else
            { y = y + b; }


        }

        cout << x;
    }
```


##Soal 2

**Alur algoritma**
1. Deklarasikan variabel `int n, x, t, batas
2. Masukan input `cin >> n`
3. Deklarasikan nilai `batas = n + 100 ; x = 20 ; t = n
4. Selama kondisi `t <= batas` masih bersifat **True** maka akan dikerjakan t = t + x ; x = x + 10
5. cetak `cout << t`

**Berikut code lengkapnya**
```
#include<iostream>
using namespace std;

int main (){

    int n,x,t,batas;

    cout << "masukan nilai n: ";
    cin >> n;

    batas = n + 100;
    x = 20;
    t = n;

    while ( t <= batas )
        { t = t + x;
            x = x + 10;
    }

    cout << t;
}
```