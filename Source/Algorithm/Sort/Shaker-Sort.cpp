/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Code/C-Extend/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void ShakerSort(int* arr, int n)
{
    int Left = 0;
    int Right = n - 1;
    int k = 0;
    while (Left < Right)
    {
        for (int i = Left; i < Right; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                k = i;
            }
        }
        Right = k;
        for (int i = Right; i > Left; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
                k = i;
            }
        }
        Left = k;
    }
}

void enterArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    cout << "Nhap so phan tu cua mang n = ";
    int n;
    cin >> n;
    int *arr = new int[n];
    enterArray(arr, n);
    cout << endl
         << "Before Sort" << endl;
    printArray(arr, n);
    ShakerSort(arr, n);
    cout << endl
         << "After Sort" << endl;
    printArray(arr, n);

    fclose(stdin);
    fclose(stdout);
    return 0;
}