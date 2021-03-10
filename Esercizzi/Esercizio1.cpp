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
            mag_z = mag_z + A[j];
        }
        else
        {
            min_z = min_z + A[j];
        }
        j = j + 1;
    }

    cout << "La somma dei valori minori di 0 è: " << min_z << endl;
    cout << "La somma dei valori maggiori o uguali a 0 è: " << mag_z << endl;
    cout << "I due valori sommati  producono: " << min_z + mag_z << endl;
}
