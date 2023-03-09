#include <iostream>

using namespace std;

class macierz 
{
public: 
    int n;
    int** tab;
    
    macierz(int size)
    {
        n = size;
        tab = new int* [n];
        for (int i = 0; i < size; i++)
        {
            tab[i] = new int[size];
        }
        
           
    }
    macierz(const macierz& macierz)
    {
        n = macierz.n;
        tab = macierz.tab;
    }
    ~macierz()
    {
     
    }
};
void zwraca(macierz a, macierz b)
{
    if (a.n < b.n)
    {
        cout << "macierz a: " << endl;
        int** tab = new int* [a.n];
        for (int i = 0; i < a.n; i++)
        {
            tab[i] = new int[a.n];
        }
        for (int i = 0; i < a.n; i++)
        {
            for (int j = 0; j < a.n; j++)
            {
                tab[i][j] = i;
                cout << tab[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (a.n == b.n)
    {
        cout << "macierz a: " << endl;
        int** tab = new int* [a.n];
        for (int i = 0; i < a.n; i++)
        {
            tab[i] = new int[a.n];
        }
        for (int i = 0; i < a.n; i++)
        {
            for (int j = 0; j < a.n; j++)
            {
                tab[i][j] = i;
                cout << tab[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "macierz b: " << endl;
        int** tab = new int* [b.n];
        for (int i = 0; i < b.n; i++)
        {
            tab[i] = new int[b.n];
        }
        for (int i = 0; i < b.n; i++)
        {
            for (int j = 0; j < b.n; j++)
            {
                tab[i][j] = i;
                cout << tab[i][j] << " ";
            }
            cout << endl;
        }
    }
   

}
int main()
{
    macierz a(10);
    macierz b(6);
    zwraca(a, b);
}
