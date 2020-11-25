# include <iostream>
using namespace std;

void sort_func(int arr[10]){
    int temp;
    for(int i=0;i<10;i++)
        {		
            for(int j=i+1;j<10;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp  =arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
}
int main()
{
    int arr[10];
    cout << "Enter the 10 integers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    sort_func(arr);
    for (int i = 0; i < 10; i++)
        cout << arr[i]<< " ";
    
    return 0;
}
