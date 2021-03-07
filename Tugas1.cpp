// Kadek Dwi Bagus Ananta Udayana
// 13519057
// Teknik Informatika 19

#include "iostream"

using namespace std;

int main()
{
    int N; //banyak nya inputan
    cin >> N;
    int tahun[N];
    for (int i = 0; i < N; i++)
    {
        cin >> tahun[i]; // memanggil inputan
    }
    for (int i = 0; i < N; i++)
    {
        // jika tahun kelipatan 100 dan tidak kelipatan 400
        if (tahun[i] % 100 == 0 && tahun[i] % 400 != 0)
        {
            cout << "Not a Leap Year" << endl;
        }
        // jika tahun kelipatan 4
        else if (tahun[i] % 4 == 0)
        {
            cout << "Leap Year" << endl;
        }
        // jika tidak kabisat
        else
        {
            cout << "Not a Leap Year" << endl;
        }
    }
}