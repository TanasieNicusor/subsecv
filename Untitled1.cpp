/*Cerința
Se dau n numere naturale. Să se găsească o subsecvență astfel încât suma elementelor din această subsecvență să fie divizibilă cu n.

Date de intrare
Fișierul de intrare subsecv.in conține pe prima linie numărul n, iar pe a doua linie n numere naturale separate prin spații.

Date de ieșire
Fișierul de ieșire subsecv.out va conține pe prima linie indicele stânga al subsecvenței, respectiv indicele dreapta al subsecvenței.

Restricții și precizări
1 ≤ n ≤ 10.000
numerele de pe a doua linie a fișierului de intrare vor fi mai mici decât 2.000.000.000
în caz că există mai multe soluții se va afișa cea cu indicele stânga minim, iar dacă există mai multe soluții cu indicele stânga minim se va afișa cea cu indicele dreapta minim
Exemplu:
subsecv.in

7
65 26877 13488 43 256888 53 428
subsecv.out

3 4
Explicație
Suma numerelor aflate în intervalul [3, 4] este 13531, care este divizibil cu 7. */
#include <iostream>
#include <list>
#include <fstream>
using namespace std;
int main()
{
    long long n, i = 0, temp, sum = 0, j;

    ofstream fileout ("subsecv.out");
    ifstream fileint ("subsecv.in");
    fileint >> n;
    long long a[n];
    while (fileint >> temp)
        {
            a[i] = temp;
            i++;
        }
    for(i = 0; i < n - 1; i++)
    {
        sum = sum + a[i];
        if(sum % n == 0)
            {
                fileout << i + 1 << " " << i + 1;
                return 0;
            }
            else
            for(j = i + 1; j < n; j++)
            {
                sum = sum + a[j];
                    if(sum % n == 0)
                        {
                            fileout << i + 1 << " " << j + 1;
                            return 0;
                        }
            }
        sum = 0;
    }
    fileint.close();
    return 0;
}

