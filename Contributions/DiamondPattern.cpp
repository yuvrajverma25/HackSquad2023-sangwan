#include <iostream>
using namespace std; 
int main()
{
    int i, j, n;
    cout<<"Enter an integar to make an pattern";
    cin >> n;
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  // bottom left triangle
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
