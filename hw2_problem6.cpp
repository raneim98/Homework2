# include <iostream>
using namespace std;


int main()
{
    int *arr;
    cout << "Enter the 5 integers: ";
    for (int i = 0; i < 5; i++)
        cin >> *(arr+i);
    
    for (int i = 0; i < 5; i++)
        cout << *(arr+i)<< " ";
    
    return 0;
}