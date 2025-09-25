#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    int n = mat.size(); // matrix Size
    int sum = 0;

    // if Only 1 Element
    if (mat.size() == 1 && mat[0].size() == 1)
    {
        return mat[0][0]; // sum
    }

    // Sum in [Primary Diagonal]
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }

    // Sum in [Secondary Diagonal]
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][(n - 1) - i];
    }

    // "Odd" rows & cols
    if (n % 2 != 0)
    {
        int minus_element_index = (n / 2);
        int minus_element = mat[minus_element_index][minus_element_index];
        sum -= minus_element;
    }

    return sum;
}

int main()
{

    vector<int> arr(10, 5);
    vector<vector<int>> vec_2D(10, vector<int>(20, 5));

    for (int i = 0; i < vec_2D.size(); i++)
    {
        for (int k = 0; k < 20; k++)
        {
            cout << vec_2D[i][k] << " ";
        }
        cout << "\n";
    }

    return 0;
}