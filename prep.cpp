#include <iostream>
using namespace std;

void push(int arr[],int top,int max, int v)
    {
        if(top==max-1){
            cout<<"overflow";
            return;
        }
        else
        {
            top++;
            arr[top]=v;

        }

    }

void pop(int arr[],int top){
    if (top==-1){
        cout<<"underflow_error";
    }
    else{
        cout<<arr[top]<<endl;
        top--;
    }
}

void print(int arr[],int top){
    for(int i=0 ; i < top ;i++){
        cout<<arr[i];
    }
}

struct node{
    int data;
    node* left;
    node* right;

    node(int n){
        data = n;
        left = nullptr;
        right = nullptr;
    }

};

void inorder(node* rt){
    if(rt){
        inorder(rt->left);
        cout<<rt->data;
        inorder(rt->right);
    }

}


int main(){
    /*int arr[6]={1,2,3,4,5};
    push(arr,4,6,6);
    pop(arr,5);
    
   
    print (arr,4);
    pop(arr,5);
    print(arr,4);
*/

    node* root = new node(5);
    root->left = new node(2);
    root->right = new node(7);
    inorder(root);

    cout<<endl;


}


