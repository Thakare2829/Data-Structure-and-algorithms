/*Program For Dynamic (linked list) representation of tree*/
#include<stdio.h>
#include<malloc.h>
struct node{
    struct node *left, *right;
    char data;
};
struct node *constructTree(int);
void inorder(struct node *);
char array[] = {'A','B','C','D','E','F','\0','G','\0','\0','\0','\0','\0','\0','\0'};
int leftcount[] ={1,3,5,-1,9,-1,-1,-1,-1,-1};
int rightcount[] = {2,4,6,-1,-1,-1,-1};
int main()
{
    struct node *root;
    root = constructTree(0);
    printf("In-Order Traversal : \n");
    inorder(root);
    return 0;
}
struct node * constructTree(int index){
    struct node *temp =NULL;
    if(index!= -1)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp ->left =constructTree(leftcount[index]);
        temp->data = array[index];
        temp->right = constructTree(rightcount[index]);
    }
    return temp;
}
void inorder(struct node *root)
{
    if (root!= NULL)
    {
        inorder(root->left);
        printf("%c\t",root->data);
        inorder(root->right);
    }
}