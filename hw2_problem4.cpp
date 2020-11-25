
# include <iostream>
using namespace std;
int main()
{
    int rows, no = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                no = 1;
            else
                no = no*(i-j+1)/j;

            cout << no << "   ";
        }
        cout << endl;
    }

    return 0;
}