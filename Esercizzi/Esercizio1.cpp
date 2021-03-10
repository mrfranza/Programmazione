#include <iostream>
using namespace std;
main()
{
    //LETTURA DEI 20 INTERI
    int A[19], i = 0;
    while (i < 20)
    {
        cout << "Inserire il valore n." << i << " dell'array :";
        cin >> A[i];
        cout << "\n";
        i = i + 1;
    }

    //Split dei minori o maggiori
    int min_z = 0, mag_z = 0, j = 0;
    while (j < 20)
    {
        if (A[j] >= 0)
        {
            mag_z = mag_z + 1;
        }
        else
        {
            min_z = min_z + 1;
        }
        j = j + 1;
    }

    cout << "i valori minori di 0 sono: " << min_z << endl;
    cout << "i valori maggiori o uguali a 0 sono: " << mag_z << endl;
}
