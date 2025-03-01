#include <iostream>
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

