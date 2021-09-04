#include <iostream>
using namespace std;
class Arina

{
private:
    char **array;
    int size;

public:
    Arina()
    {
        size = 3;
        array = new char *[size];
        for (int i = 0; i < size; i++)
        {
            array[i] = new char[size];
        }
        reset();
    }
    void display()
    {
        cout << "_____________" << endl;
        cout << "| " << array[2][0] << " | " << array[2][1] << " | " << array[2][2] << " |" << endl;
        cout << "-------------" << endl;
        cout << "| " << array[1][0] << " | " << array[1][1] << " | " << array[1][2] << " |" << endl;
        cout << "-------------" << endl;
        cout << "| " << array[0][0] << " | " << array[0][1] << " | " << array[0][2] << " |" << endl;
        cout << "-------------" << endl;
    }
    void writeArina(int row, int col, char deli)
    {
        array[row][col] = deli;
    }
    void reset()
    {
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
            {
                array[i][j] = ' ';
            }
    }
    bool checkWin()
    {
        int hor_check_count = 0;
        int ver_check_count = 0;
        int dig_check_count = 0;
        // Horizendtal Checking
        for (int i = 0; i < 3; i++)
        {
            hor_check_count = 0;
            for (int j = 1; j < 3; j++)
            {
                array[i][j - 1] = array[i][j];
                if (hor_check_count == 2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
