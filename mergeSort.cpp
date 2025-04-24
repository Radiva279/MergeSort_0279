#include <iostream>
using namespace std;

// cerate main array & temporary array
int arr[20], B[20];
//n is array input size
int n;

void input(){
        while (true)
        {
            cout << "Masukkan Panjang element array : ";
            cin >> n;
    
            if (n <= 20)
            {
                break;
            }
            else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
        cout << "\n--------------------------" << endl;
        cout << "\nInputkan Isi element array" << endl;
        cout << "\n--------------------------" << endl;
