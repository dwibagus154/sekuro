#include "iostream"

using namespace std;

float jumlah(float a, float b)
{
    return a + b; // penjumlahan
}

float kurang(float a, float b)
{
    return a - b; // pengurangan
}

float kali(float a, float b)
{
    return a * b; // perkalian
}

float bagi(float a, float b)
{
    return a / b; // pembagian
}
float pangkat(float a, float b)
{
    int c = 1;
    for (int i = 0; i < b; i++)
    {
        c *= a; // pangkat = pengulangan perkalian
    }
    return c;
}
float integral(float a, float b)
{
    float partisi;          // nilai N
    float nilaiPartisi;     // nilai delta x
    float pangkatTertinggi; // derajat soal
    float koefesien;        // koefesien setiap pangkat
    float nilai = 0;        // nilai yang akan di return
    cout << "Tuliskan pangkat tertinggi dari soal yang ingin di integralkan = ";
    cin >> pangkatTertinggi;

    cout << "mau dibagi berapa partisi ? ";
    cin >> partisi;
    nilaiPartisi = (a - b) / partisi;

    for (int i = pangkatTertinggi; i > -1; i--)
    {
        float x = b;
        cout << "masukkan koefesien untuk pangkat " << i;
        cin >> koefesien;

        while (x <= a)
        {
            // cout << pangkat(x, i) << endl;
            // cout << koefesien << endl;
            if (x == a || x == b) // jika x ada di ujung" trapesium, tidak di kali 2
            {
                nilai += (pangkat(x, i) * koefesien);
            }
            else
            {
                nilai += (pangkat(x, i) * koefesien * 2);
            }
            // cout << nilai << endl;
            x += nilaiPartisi;
        }
    }
    return nilai * nilaiPartisi / 2;
}

int main()
{
    float a, b, hasil;
    int c;
    char operasi;
    cout << "selamat datang di program kalkulator" << endl;
    cout << "Gunakan tanda + untuk operasi tambah" << endl;
    cout << "Gunakan tanda - untuk operasi kurang" << endl;
    cout << "Gunakan tanda * untuk operasi perkalian" << endl;
    cout << "Gunakan tanda / untuk operasi pembagian" << endl;
    cout << "Gunakan tanda p untuk operasi pangkat" << endl;
    cout << "Gunakan tanda i untuk operasi integral" << endl;
    cout << "masukkan angka pertama = ";
    cin >> a;
    cout << "masukkan angka kedua = ";
    cin >> b;
    cout << "masukkan operasi =";
    cin >> operasi;
    if (operasi == '+')
    {
        hasil = jumlah(a, b);
    }
    else if (operasi == '-')
    {
        hasil = kurang(a, b);
    }
    else if (operasi == '*')
    {
        hasil = kali(a, b);
    }
    else if (operasi == '/')
    {
        hasil = bagi(a, b);
    }
    else if (operasi == 'p')
    {
        hasil = pangkat(a, b);
    }
    else if (operasi == 'i')
    {
        hasil = integral(a, b);
    }
    cout << hasil;
    return 0;
}