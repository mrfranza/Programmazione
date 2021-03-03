//Lezione svolta 01/03/2021
//
//Input di tre variabili intere
//Controllo successivo del valore minore
//

//ESEMPIO 2 (più veloce in quanto esegue massimo 2 controlli e risolve il problema delle uguaglianze)

#include <iostream>

using namespace std;

main()
{
    int x, pippo, pluto;
    cin >> x >> pippo >> pluto;

    if (x < pippo)
        if (x < pluto)
            cout << x;
        else
            cout << pluto;
    else if (pippo < pluto)
        cout << pippo;
    else
        cout << pluto;
}