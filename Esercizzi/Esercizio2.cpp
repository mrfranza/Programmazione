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

    //controllo
    int j = 0, uno = 0, due = 0, tre = 0, quattro = 0, cinque = 0;
    while (j < 20)
    {
        switch (A[j])
        {
        case 1:
            uno = uno + 1;
            break;
        case 2:
            due = due + 1;
            break;
        case 3:
            tre = tre + 1;
            break;
        case 4:
            quattro = quattro + 1;
            break;
        case 5:
            cinque = cinque + 1;
            break;
        }
        j = j + 1;
    }

    cout << "Valori 1 contati: " << uno << endl;
    cout << "Valori 2 contati: " << due << endl;
    cout << "Valori 3 contati: " << tre << endl;
    cout << "Valori 4 contati: " << quattro << endl;
    cout << "Valori 5 contati: " << cinque << endl;
}