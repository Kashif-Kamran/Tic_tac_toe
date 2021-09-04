#include "./arina.h"
int main()
{
    int index = 0;
    Arina arina;
    arina.display();
    /// select the place
    while (1)
    {
        cout << "Enter number from 1 to 8 : ";
        cin >> index;
        while (index < 1 or index > 9)
        {
            cout << "Enter the number again : ";
            cin >> index;
        }

        int row = (index - 1) / 3;
        int col = -2;
        if (index % 3 == 0)
        {
            col = 2;
        }
        else
        {
            col = ((index) % 3) - 1;
        }
        cout << "Row : " << row << endl;
        cout << "Col : " << col << endl;
        arina.writeArina(row, col, '0');
        arina.display();
    }
    return 0;
}