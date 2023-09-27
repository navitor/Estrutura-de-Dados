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

Node* search(Node* root, int value){
    //se o valor for encontrado ou a arvore estiver vazia, retorna o ponteiro do nó ou NULL
   if(root == NULL || root->value == value){
        return root;
   }
   //busca a direita se o valor for maior
   if(root->value < value){
        return search(root->right, value);
   }/*else{
   }*/
    //busca a esquerda se o valor for maior
    return(search(root->left, value));
}

Node* minValueNode(Node* node){
    //percorre a árvore para encontrar o filho mais à esquerda
    Node* current = node;
    while(current && current->left != NULL){
        current = current->left;
    }
    //retorna o nó com o menor valor
    return current;
}
//Remove um dado
Node* delete(Node* root, int value){
    //se a arvore estiver vazia retorna NULL
    if(root == NULL){
        return root;
    }
    //procura o nó a ser deletado nas sub-arvores, esquerda ou direitas
    if(value < root->value){
        root->left = delete(root->left, value);
    }else if(value > root->value){
        root->right = delete(root->right, value);
    }else{
        //o nó a ser deletado foi encontrado
        if(root->left == NULL){
            //no com apenas filhos à direita ou sem filhos 
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            //nó com apenas o filho na esquedra
            Node* temp= root->left;
            free(root);
            return temp;
        }
        //nó com dois filhos
        Node* temp = minValueNode(root->right);
        //copia o valor do sucessor para o nó
        root->value= temp->value;
        //deleta o sucessor;
        root->right = delete(root->right, temp-> value);
    }
    //retorna a raiz atualizada
    return root;

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

    Node* searchNode = search(root,80);
    if(searchNode != NULL){
        printf("o valor %d esta na arvore \n", searchNode->value);
    }else{
        printf("elemento não encontrado\n");
    }

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
    
    int remValue = 80;
    root = delete(root, remValue);

    printf("Arvore após remover o valor %d\n", remValue);
    printTree(root);


    return 0;   
}