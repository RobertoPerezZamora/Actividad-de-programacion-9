#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Elm = Elemento
// U_Res = Union Resultado
// Int_Res = Intersección Resultado
// Dif_Res = Diferencia Resultado

// Función para imprimir un conjunto de caracteres
void imprimirConjunto(const vector<char>& conjunto)
{
    cout << "Conjunto:{ ";
    for (char Elm : conjunto)
    {
        cout << Elm << " ";
    }
    cout << "}" << endl;
}

//=======================================================================================

// Función para realizar la unión de dos conjuntos de caracteres
vector<char> unionConjuntos(const vector<char>& conjunto1, const vector<char>& conjunto2)
{
    vector<char> U_Res = conjunto1;
    for (char Elm : conjunto2)
    {
        if (find(U_Res.begin(), U_Res.end(), Elm) == U_Res.end())
        {
            U_Res.push_back(Elm);
        }
    }
    return U_Res;
}

//=======================================================================================

// Función para realizar la intersección de dos conjuntos de caracteres
vector<char> interseccionConjuntos(const vector<char>& conjunto1, const vector<char>& conjunto2)
{
    vector<char> Int_Res;
    for (char Elm : conjunto1)
    {
        if (find(conjunto2.begin(), conjunto2.end(), Elm) != conjunto2.end())
        {
            Int_Res.push_back(Elm);
        }
    }
    return Int_Res;
}

//=======================================================================================

// Función para realizar la diferencia entre dos conjuntos de caracteres
vector<char> diferenciaConjuntos(const vector<char>& conjunto1, const vector<char>& conjunto2)
{
    vector<char> Dif_Res;
    for (char Elm : conjunto1)
    {
        if (find(conjunto2.begin(), conjunto2.end(), Elm) == conjunto2.end())
        {
            Dif_Res.push_back(Elm);
        }
    }
    return Dif_Res;
}