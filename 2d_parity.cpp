#include <iostream>
using namespace std;
int main()
{
    int x, i, j, n;
    cout << "Enter frame size" << endl;
    cin >> x;
    int arr[20][20];
    cout << "Enter the number" << endl;
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = 0; j < x - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Choice of parity\n 1.)Even Parity 2.) Odd Parity\n";
    cin >> n;

    for (i = 0; i < x; i++)
    {
        int count = 0;
        int count2 = 0;
        for (j = 0; j < x - 1; j++)
        {
            if (arr[i][j] == 1)
                count++;
            if (arr[j][i] == 1)
                count2++;
        }
        if (n == 1)
        {
            if (count % 2 == 0)
                arr[i][j] = 0;

            else
                arr[i][j] = 1;
        }

        else
        {

            if (count % 2 == 0)
                arr[i][j] = 1;

            else
                arr[i][j] = 0;
        }

        if (n == 1)
        {
            if (count2 % 2 == 0)
                arr[j][i] = 0;

            else
                arr[j][i] = 1;
        }

        else
        {

            if (count2 % 2 == 0)
                arr[j][i] = 1;

            else
                arr[j][i] = 0;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << " " << endl;
    }
    return 0;
}