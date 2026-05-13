#include <iostream>
using namespace std;
/*int main(){
    int n=10;
    int arr[10];
    float sum=0;
    for (int i =0 ; i<n;i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    cout<<"avg = "<<sum/n;
    return 0;
//}*/


struct node{
    int data;
    node* next;
};




void insertatbeg(node*& head,int n){
    node* newnode= new node();
    newnode->data = n;

    newnode->next = head;

    head = newnode;


}
void printlist(node*& head){
    node* i = head;
    while (i != nullptr){
    cout<<i->data<<"->";
    i = i->next;
}
cout<<"null"<<endl;
}
int main(){
    node* head = nullptr;

    insertatbeg(head, 42);
    printlist(head);
    insertatbeg(head, 35);
    printlist(head);

/*

int arrA[5];int arrB[5];
int n=5;
for (int i = 0 ;i <n;i++){
    cin >>arrA[i];
}
for (int i=0 ;i<n ;i++){
    arrB[i]=arrA[i];
}
for(int i =0 ;i <n ;i++){
        cout<<"copied array "<<arrB[i];
        }
 
*/
/*
node* head = new node();
node* second =new node();
node* last =new node();


head->data = 10;
second->data = 20;
last->data = 30;

head->next = second;
second->next = last;
last->next = NULL;


node* i = head;
while (i != nullptr){
    cout<<i->data<<"->";
    i = i->next;
}
cout<<"null"<<endl;

*/
return 0;


}




