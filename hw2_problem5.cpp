#include<iostream> 
using namespace std;

int *findmax(int arr[],int size){
    int *max;
    max=&arr[0];
    for (int i = 0; i < size; i++)
    {
        if (*max < arr[i])
            max = &arr[i];
    }
    return max;
}

int main(){    
  int *max, n;    
  cout<<"Enter number of data values";    
  cin>>n;    
  int arr[n]; 
  cout<<"Enter the values";             
  for(int i=0;i<n;i++)     
   cin>>arr[i];                    
  max=findmax(arr,n);    
  cout<<"The max value is:"<<*max<<"";    
  return 0;
}  
 
