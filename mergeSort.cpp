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

        for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// membuat fungsi mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) //step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; //step 2    

}

