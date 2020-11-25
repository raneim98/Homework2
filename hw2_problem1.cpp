# include <iostream>
using namespace std;

int main()
{
    char no;
    int num1, num2;

    cout << "Enter your choice: ";
    cin >> no;

    cout << "Enter your two numbers: ";
    cin >> num1 >> num2;

    switch(no)
    {
        case '1':
            cout <<"Result: "<< num1+num2;
            break;

        case '2':
            cout <<"Result: "<< num1-num2;
            break;

        case '3':
            cout <<"Result: "<<  num1*num2;
            break;

        case '4':
            cout <<"Result: "<<  num1/num2;
            break;

        case '5':
            cout <<"Result: "<< num1 % num2;
            break;
    }
    

    return 0;
}
