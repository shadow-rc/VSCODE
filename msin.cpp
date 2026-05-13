#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionsort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
         }
        swap(arr[i],arr[minidx]);
        }
   
}



void insertionsort(int arr[],int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
    
    while(j>=0 && key<arr[j]){
        arr[j+1]=arr[j];
        j--;
        }
    arr[j+1]=key;
    }

    
}



int main(){
    int arr[]={20,10,15,76,67,90};
    //bubblesort(arr,6);
    //selectionsort(arr,6);
    insertionsort(arr,6);
    for (int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    


}