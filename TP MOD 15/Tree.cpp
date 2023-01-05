#include "Tree.h"

adrNode newNode_1301210303(infotype X) {
    adrNode P = new elmTree;
    info(P) = X;
    left(P) = NULL;
    right(P) = NULL;

    return P;
}

adrNode findNode_1301210303(adrNode root, infotype X) {
    if(root != NULL){
        if(info(root) == X){
            return root;
        }else{
            if(X > info(root)){
                findNode_1301210303(right(root), X);
            }else{
                findNode_1301210303(left(root), X);
            }
        }
    }else{
        return NULL;
    }
}

void insertNode_1301210303(adrNode &root, adrNode P) {
    if(root == NULL){
        root = P;
    }else{
        if(info(P) > info(root)){
            insertNode_1301210303(right(root), P);
        }else{
            insertNode_1301210303(left(root), P);
        }
    }
}

void printPreOrder_1301210303(adrNode root) {
    if(root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301210303(left(root));
        printPreOrder_1301210303(right(root));
    }
}

void printDescendant_1301210303(adrNode root, infotype X) {
    adrNode P = findNode_1301210303(root, X);
    if(P != NULL){
        if(info(P) != X){
            cout << info(P) << " ";
            printPreOrder_1301210303(left(P));
            printPreOrder_1301210303(right(P));
        }else{
            printPreOrder_1301210303(left(P));
            printPreOrder_1301210303(right(P));
        }
    }
}

int sumNode_1301210303(adrNode root) {
    if(root != NULL){
        return info(root) + sumNode_1301210303(left(root)) + sumNode_1301210303(right(root));
    }
}

int countLeaves_1301210303(adrNode root) {
    if (root == NULL) {
        return 0;
    }
    if (left(root) == NULL && right(root) == NULL) {
        return 1;
    }
    return countLeaves_1301210303(left(root)) + countLeaves_1301210303(right(root));
}

int heightTree_1301210303(adrNode root) {
    if (root == NULL) {
        return -1;
    }
    int left_height = heightTree_1301210303(left(root));
    int right_height = heightTree_1301210303(right(root));

    if (left_height > right_height) {
        return left_height + 1;
    }else{
        return right_height + 1;
    }
}
