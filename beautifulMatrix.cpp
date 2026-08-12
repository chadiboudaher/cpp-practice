#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rows = 5, cols = 5;
    vector<vector<int>> matrix(rows + 1, vector<int>(cols + 1));
    int idxR = 0, idxC = 0;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                idxR = i;
                idxC = j;
            }
        }
    }
    if (idxC == 3 && idxR == 3) {
        cout << 0;
    }
    if (idxR < 3)
    {
        if (idxC < 3)
        {
            cout << (3 - idxC) + (3 - idxR);
        } else if (idxC > 3)
        {
            cout << (idxC - 3) + (3 - idxR);
        } else
        {
            cout << 3 - idxR;
        }
    } else if (idxR > 3)
    {
        if (idxC < 3)
        {
            cout << (3 - idxC) + (idxR - 3);
        } else if (idxC > 2)
        {
            cout << (idxC - 3) + (idxR - 3);
        } else
        {
            cout << idxR - 3;
        }
    } else
    {
        if (idxC < 3)
        {
            cout << 3 - idxC;
        } else if (idxC > 3)
        {
            cout << idxC - 3;
        }
    }
    return 0;
}
