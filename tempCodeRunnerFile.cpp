#include <iostream>
using namespace std;

int arr [15];
int n;

void inputData(){
    while (true)
    {
        cout << "Masukan jumlah data : ";
        cin >> n;

        if (n < 15)
        {
            break;
        }
        else
        {
            cout << "Jumlah data maksimal 15" << endl;        }
    }

    cout << "===========" << endl;
    cout << "Masukan data" << endl;
    cout << "===========" << endl;
    cout << endl;

    for (int i =0; i < n; i++)
    {
        cout << "Masukan data ke- " << i + 1 << " = ";
        cin >> arr[i];
    }
}

void Bubblesort() 
{
    int pass = 1;
        do 
    {
         for (int j = 0; j <= n - 1 - pass; j++ )
        {
            if (arr[j > arr[j+1]])
        {
            int temp;
            temp = arr [j];
            arr[j + 1] = temp;
        
        }
       
        }

    pass = pass + 1;
    } while (pass <= n - 1);
 
}

void diplaysData()
{
    cout << endl;
    cout << "============" << endl;
    cout << "Data seletah diurutkan" << endl;
    cout << "============" << endl;
    cout << endl;

    for (int i = 0; 1 < n; i++)
    {
        cout << "Data ke -" << i + 1 << " = " << arr[i] << endl;
    }
}

int main()
{
    inputData(); 
    Bubblesort();
    diplaysData();
    return 0;
}



