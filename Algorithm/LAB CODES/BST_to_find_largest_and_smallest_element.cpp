/*create a BST for a given n number of elements (max element = 50) print the Smallest and Largest elements of BST*/

// You are using GCC
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left,*right;
};

struct node*newNode(int item){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}

struct node*insert(struct node*node, int key){
    if(node==NULL){
        return newNode(key);
    }
    else if(key<node->data)
        node->left=insert(node->left,key);
    else
        node->right=insert(node->right,key);
    return node;
}

void smallest(struct node*node){
    struct node*temp=node;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    cout<<"Smallest: "<<temp->data<<endl;
}

void largest(struct node*node){
    struct node*temp=node;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    cout<<"Largest: "<<temp->data;
}
int main(){
    struct node*root=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
    smallest(root);
    largest(root);
    return 0;
}