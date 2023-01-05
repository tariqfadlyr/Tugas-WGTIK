#include "Tree.h"

int main()
{
    int X[9] = {5,3,9,10,4,7,1,8,6};
    cout<<"================================================================================"<<endl;
    for(int i = 0; i < 9; i++) {
        cout<<X[i]<<" ";
    }

    adrNode root = NULL;
    for (int i = 0; i < 9; i++) {
        adrNode P = newNode_1301210303(X[i]);
        insertNode_1301210303(root, P);
    }

    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder_1301210303(root);

    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301210303(root, 9);

    printf("\n");
    printf("\nSum of BST Info\t\t: ");
    cout<<sumNode_1301210303(root);

    printf("\nNumber of Leaves\t: ");
    cout<<countLeaves_1301210303(root);

    printf("\nHeight of Tree\t\t: ");
    cout<<heightTree_1301210303(root);
    cout<<endl;
    cout<<"================================================================================";

    return 0;
}
