#include<iostream>
using namespace std;

//find the minimum and maximum number in array in manual method.
int  minMax(int arr[] , int size){
    
    int min ,max;
    for(int i=1;i<=size;i++){
        for(int j=i;j<=size;j++){
            if(arr[i]>arr[j+ 1]){
                int temprarry = arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temprarry; 
            }
        }
    }
    min=arr[1];
    max=arr[size];
    cout<<"The min value is = "<< min<<endl;
    cout<<"The max value is = "<<max<<endl;
    return min,max;
   
}

//main function.
int main(){
int arraySize;
cout<<"Enter the size of array = ";
cin>>arraySize;

int arr[arraySize];
for(int i=1;i<=arraySize;i++){
    cin>>arr[i];
}
minMax(arr, arraySize);

return 0;
}
