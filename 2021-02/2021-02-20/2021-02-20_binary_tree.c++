#include<iostream>

using namespace std;
int number = 15;

//하나의 노드 정보 선언
typedef struct node *treePointer;
typedef struct node
{
    int data;
    treePointer leftChild, rightChild;
} node;

//전위 순회 구현
void preorder(treePointer ptr){
    if(ptr){
        cout << ptr->data << " ";
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }
}
// 중위 순회 구현
void inorder(treePointer ptr){
    if(ptr){
        inorder(ptr->leftChild);
        cout << ptr->data << " ";
        inorder(ptr->rightChild);
    }
}
// 후위 순회 구현
void postorder(treePointer ptr){
    if(ptr){
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        cout << ptr->data << " ";
    }
}

int main(){
    node nodes[number + 1];
    // 노드 값 삽입.
    for(int i=1; i<=number; i++){
        nodes[i].data = i;
        nodes[i].leftChild = NULL;
        nodes[i].rightChild = NULL;
    }

    for(int i=1; i<number; i++){
        if(i%2 == 0) nodes[i/2].leftChild = &nodes[i];
        else nodes[i/2].rightChild = &nodes[i];
    }
    printf("[*] Preorder Traversal \n");
    preorder(&nodes[1]);
    printf("\n");

    printf("[*] Inorder Traversal \n");
    inorder(&nodes[1]);
    printf("\n");

    printf("[*] Postorder Traversal \n");
    postorder(&nodes[1]);
    printf("\n");

    return 0;
}