//Ricerca del valore minimo in un vettore di 100 elementi int
#include <iostream>

using namespace std;

main()
{
    //Definisco il vettore A da 100 variabili
    int A[100];

    //INPUT VARIABILI
    int i = 0;
    while (i < 100) //Condizione di permanenza
    {
        /* corpo */
        cin >> A[i];
        i = i + 1; //i++
    }

    //RICERCA DEL VALORE MINIMO -> CONFRONTO OGNI ELEMENTO CON IL SUCCESSIVO
    //E SALVO IL VALORE MINIMO IN UNA VARIABILE MIN OGNI VOLTA (SE E' MINORE)

    //inizializzo min alla prima posizione del vettore A e il contatore i a
    //1 (seconda posizione del vettore, dato che la prima è già caricata nel controllo);
    int min = A[0], j = 1;
    while (j < 100)
    {
        //se il valore del vettore in questione è più piccolo a quello caricato o controllato
        //in precedenza viene aggiornato il nuovo numero minimo
        if (A[j] < min)
        {
            min = A[j];
        }
        j = j + 1; //j++
    }

    //Stampo il risultato (post)
    cout << min;
}