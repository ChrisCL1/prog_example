#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;                                     // Pide el tamaño de la matriz.

    int arr[n][n],
        r[n][n];                                  // Resultado.

    for(int f = 0; f < n; f++)                    // Pide el contenido de la matriz.
        for(int c = 0; c < n; c++)
            cin >> arr[f][c];

    for(int f = 0; f < n; f++)                    // Rota la matriz original arr[][] sobre
        for(int c = 0; c < n; c++)                // la matriz resultado r[][]
            r[f][c] = arr[n - c - 1][f];

    for(int f = 0; f < n; f++)                    // Muestra el resultado.
    {
        cout << endl;
        for(int c = 0; c < n; c++)
            cout << r[f][c] << " ";
    }

    return 0;
}
