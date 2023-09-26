#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int value;
    struct node* left;
    struct node* right;

}Node;

Node* newNode(int value){
    Node* n = (Node *) malloc(sizeof(Node));
    n->value = value;
    n->right = n->left = NULL;

    return n;    
}

Node* insert(Node* root, int value){
    /*
     Se arvore estiver vazia, retorne um novo Nó
     If the Tree is empty, return new Node
    */
    if(root == NULL){
        return newNode(value);
    }
    /*
        Caso contrário, percorra a arvore
        In contrast, to prep scoll the Tree
    */
    if(value < root->value){
        root->left = insert(root->left, value);
        
    } else if(value > root->value){
        root->right = insert(root->right, value);

    }

    return root;
}

void printTree(Node* root){
    if(root != NULL){
        printTree(root->left);
        printf("%d \n", root->value);
        printTree(root->right);
    }
}




int main(){

    Node * root = NULL;

    root = insert(root, 800);
    root = insert(root, 25);
    root = insert(root, 10);
    root = insert(root, 80);
    root = insert(root, 888);
    root = insert(root, 8);
    

    printTree(root);

    return 0;   
}