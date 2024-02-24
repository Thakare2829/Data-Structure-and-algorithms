#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
    struct TreeNode *left;
    int data;
    struct TreeNode *right;
};
struct TreeNode *insert(struct TreeNode *root, int x){
    if(root==NULL)
    {
        root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        root->data=x;
        root->left=root->right=NULL;
        return(root);
    }
    else if(x<root->data)
    {
        root->left=insert(root->left,x);
    }
    else if(x>root->data)
    {
        root->right=insert(root->right,x);
        return root;
    }
}
void inorder(struct TreeNode *root)
   {
        if(root!=NULL)
        {
           inorder(root->left);
           printf("%d",root->data);
           inorder(root->right);
        }
    }
