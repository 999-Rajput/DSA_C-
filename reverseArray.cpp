#include<iostream>
using namespace std;

//u=Function of reverse the array
void reverseArray(int arr[], int size){
int i;
 for(i=size;i>=1;i--){
        cout<<arr[i]<<" "; 
 }
   
}
//main function
int main(){
    int size;
    cout<<"Enter the size of array = " ;
    cin>>size;

    int arr[size];
    cout<<"Enter the element = ";
    for(int i=1;i<=size;i++){
        cin>>arr[i];
    }
     
    cout<<"The reverse array is = ";
    reverseArray(arr, size);
     
    cout<<endl;
    
    return 0;
}