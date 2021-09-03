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
        while (index < 1 or index > 8)
        {
            cout << "Enter the number again : ";
            cin >> index;
        }

        int row = index / 3;
        int col = ((index + 1) % 3) - 1;
        cout << "Row : " << row << endl;
        cout << "Col : " << col << endl;
    }
    return 0;
}