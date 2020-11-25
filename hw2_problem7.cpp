# include <iostream>
using namespace std;

int *sort_func(int *arr, int size){
    int temp;
    for(int i=0;i<size;i++)
        {		
            for(int j=i+1;j<size;j++)
            {
                if(*(arr+i)>*(arr+j))
                {
                    temp  =*(arr+i);
                    *(arr+i)=*(arr+j);
                    *(arr+j)=temp;
                }
            }
        }
    return arr;
}
int main()
{   int arr[]={20,32,1,11,51,12,2,5,7,99};
    int *ptr=arr; 
    int *sorted_arr=sort_func(ptr,10);
    for (int i = 0; i < 10; i++)
        cout << *(sorted_arr+i)<< " ";
    
    return 0;
}