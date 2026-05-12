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


int main (){
  int arr[]={10,20,30,45,55,60};
  int key=45;
  int n=6;
  Linearsearch(arr,key,n);
}