// Depth First Search 
#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node* left;
    Node* right;

    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

void printInrorder(struct Node* node)
{
    if(node == NULL)
        return;
    
    printInrorder(node -> left);

    cout<< node -> data << " ";

    printInrorder(node -> right);
}

void printPostorder(struct Node* node)
{
    if(node == NULL)
        return;
    
    printPostorder(node -> left);
    printPostorder(node -> right);

    cout << node -> data << " ";
}

void printPreorder(struct Node* node)
{
    if(node == NULL)
        return;
    
    cout << node -> data << " ";

    printPreorder(node -> left);
    printPreorder(node -> right);
}


int main()
{
    Node* root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);

    printPreorder(root);
    cout<<endl;
    printInrorder(root);
    cout<<endl;
    printPostorder(root);

    return 0;
}
