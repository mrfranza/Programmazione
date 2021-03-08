//Ricerca del valore minimo in un vettore di 100 elementi int
#include <iostream>

using namespace std;

int main()
{
    int A[] = {2, 3, 0, -4, 0, 45, -12, 8, 3, 99, -10, -12, -13, 76, -100};
    int i = 0, min = A[0];
    while (i < 15)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        i++;
    }
    cout << "Il valore minimo è " << min << endl;
    return 1;
}