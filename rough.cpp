#include <iostream>
using namespace std;

void Linearsearch(int arr[],int key,int n){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
        cout<<"found at i = "<<i<<endl;
        return;
      }
  }
  cout << "not found" << endl;
}

void binarysearch(int arr[],int low,int high,int key,int n){
  int mid=low + (high - low )/2;
  if(arr[mid]==key){
    cout<<"found at mid "<<mid<<endl;
    return;
  if(arr[mid]<key){
    mid = low + 1; 
  }
  if (arr[mid]>key){
    mid = high - 1;
  }
  }
}


int main (){
  int arr[]={10,20,30,45,55,60};
  int key=45;
  int n=6;
  Linearsearch(arr,key,n);
  binarysearch(arr,0,5,30,6);
}