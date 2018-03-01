#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct treeNode{
    struct treeNode *leftPtr; /*pointer to left subtree*/
    int data;
    struct treeNode *rightPtr; /*pointer to right subtree*/
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode(TreeNodePtr *treePtr,int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);


int main(void)
{
    int i;
    int item;
    TreeNodePtr rootPtr = NULL;

    srand(time(NULL));
    printf("The numbers being placed in the tree are:\n");

    /*insert random values between 0 and 14 in the tree*/
        for(i=1; i<=10; i++)
        {
            item = rand() % 15;
            printf("%3d ",item);
            insertNode(&rootPtr,item);
        }

        /*traverse the tree preOrder*/
        printf("\n\nThe preOrder traversal is:\n");
        preOrder(rootPtr);

        /*traverse the tree inOrder*/
        printf("\n\nThe inOrder traversal is:\n");
        inOrder(rootPtr);

        /*traverse the tree postOrder*/
        printf("\n\nThe postOrder traversal is:\n");
        postOrder(rootPtr);
        return 0;

}

void insertNode(TreeNodePtr *treePtr,int value)
{
    if(*treePtr == NULL)
    {
        *treePtr = malloc(sizeof(TreeNode));

            if(*treePtr != NULL)
            {
                (*treePtr)->data = value;
                (*treePtr)->leftPtr = NULL;
                (*treePtr)->rightPtr = NULL;
            }
            else
            {
        printf("%d not inserted. No memory avaible.\n",value);
            }
    }else
    {
        if(value < (*treePtr)->data)//data to insert is less than data in current node.
        {
            insertNode(&((*treePtr)->leftPtr),value);
        }
        else if(value > (*treePtr)->data) //data to insert is greater than data in current node.
        {
             insertNode(&((*treePtr)->rightPtr),value);
        }
        else //duplicate data ignored
        {
            printf("dup");
        }
    }
}

void inOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL)
    {
        inOrder(treePtr->leftPtr);
        printf("%3d",treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

void preOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL)
    {
        printf("%3d",treePtr->data);
        inOrder(treePtr->leftPtr);
        inOrder(treePtr->rightPtr);
    }
}

void postOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL)
    {
        inOrder(treePtr->leftPtr);
        inOrder(treePtr->rightPtr);
        printf("%3d",treePtr->data);
    }
}
