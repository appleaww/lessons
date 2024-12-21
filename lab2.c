#include <stdio.h>
#include <stdlib.h>
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};
struct Node* create_node(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* insert(struct Node* root, int data){
    if (root == NULL){
        return create_node(data);
    } 
    if (data < root->key){
        root->left = insert(root->left, data);
    } else if (data > root->key){
        root->right = insert(root->right, data);
    }
    return root; 
}
void preorder_traversal(struct Node* root){
    if (root != NULL){
        printf("%d ", root->key);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

struct Node* search(struct Node* root, int key){
    if (root == NULL || root->key == key){
        return root;
    }
    if (root->key < key){
        return search(root->right, key);
    }
    return search(root->left, key);
}
struct Node* min(struct Node* root){
    while (root->left != NULL){
        root = root->left;
    }
    return root;
}
struct Node* delete_node(struct Node* root, int data) {
    if (root == NULL){
        return NULL;
    }
    if (data < root->key){
        root->left = delete_node(root->left, data);
    } else if (data > root->key){
        root->right = delete_node(root->right, data);
    } else {
        if (root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        } 
        else if (root->left == NULL){
            struct Node* temp = root->right;
            free(root);
            return temp;
        } 
        else if (root->right == NULL){
            struct Node* temp = root->left;
            free(root);
            return temp;
        } 
        else{
            struct Node* temp = min(root->right);
            root->key = temp->key;
            root->right = delete_node(root->right, temp->key);
        }
    }
    return root;
}
int main(){
    struct Node* root = NULL; 
    root = insert(root, 123);
    root = insert(root, 192);
    root = insert(root, 900);
    root = insert(root, 112);
    root = insert(root, 78);
    root = insert(root, 228);
    root = insert(root, 152);
    root = insert(root, 899);
    root = insert(root, 34);
    root = insert(root, 1);
    root = insert(root, 2);
    printf("Префиксный обход дерева: ");
    preorder_traversal(root);
    printf("\n");
    printf("Поиск 900: %s\n", search(root, 900) ? "найдено" : "не найдено");
    printf("Поиск 555: %s\n", search(root, 555) ? "найдено" : "не найдено");
    root = delete_node(root, 112); 
    printf("Дерево после удаления 112: ");
    preorder_traversal(root);
    printf("\n");
    return 0;
}