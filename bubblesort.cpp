//Library
#include <iostream>
#include <string>
using namespace std;

//Deklarasi 
int arr[20];
int n;

void input()
{ //prosedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
}
cout << endl;