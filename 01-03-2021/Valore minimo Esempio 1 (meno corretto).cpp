//Lezione svolta 01/03/2021
//
//Input di tre variabili intere
//Controllo successivo del valore minore
//

//ESEMPIO 1 (meno corretto, usa troppi controlli e sbaglia(in certi casi)/non-stampa nel caso in cui
//           2 o 3 valori sono uguali)

#include <iostream>

using namespace std;

main()
{
    int x, pippo, pluto;
    cin >> x >> pippo >> pluto;

    if (x < pippo && x < pluto)
        cout << x;
    else if (pippo < x && pippo < pluto)
        cout << pippo;
    else if (pluto < x && pluto < pippo)
        cout << pluto;
}