#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define left(P) (P)->left
#define right(P) (P)->right
#define info(P) (P)->info

typedef struct elmTree *adrNode;
typedef int infotype;

struct elmTree {
    infotype info;
    adrNode left, right;
};

adrNode newNode_1301210303(infotype X);
adrNode findNode_1301210303(adrNode root, infotype X);
void insertNode_1301210303(adrNode &root, adrNode P);
void printPreOrder_1301210303(adrNode root);
void printDescendant_1301210303(adrNode root, infotype X);
int sumNode_1301210303(adrNode root);
int countLeaves_1301210303(adrNode root);
int heightTree_1301210303(adrNode root);

#endif // TREE_H_INCLUDED
