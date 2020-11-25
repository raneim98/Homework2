 # include <iostream>
using namespace std;

  
 

int main()
{
 
    int arr[10], n, i, max, min;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

// finding the most occuring element 
    int count = 0;
    for (int i=0; i<10; i++)
    {
        int tempcount=1;
        for (int j=i+1;j<10;j++)
            if (arr[i]==arr[j])
                tempcount++;
        if (tempcount>count)
            count = tempcount;
    }
    cout << "\nMost occurred number: "<< arr[count] << endl; 
    
    // finding the max element 

    max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    // finding the min element 
    min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    
    cout << "Largest element : " << max <<"\n";
    cout << "Smallest element : " << min<<"\n";

    return 0;
}