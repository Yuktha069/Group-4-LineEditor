////this the header file created by the developer

#include "header.h"


/*****************************************************************************************
 * function for adding of text in the form of linked list in a file
 * parameters : pointer to *head and to *rear and the string that we have entered
 * return type : node * that is pointer to the struct node
 * ***************************************************************************************/
node* add(node **head,node **rear,char *str)
{
        node *newnode,*temp;
        newnode=(node*)malloc(sizeof(node));
        newnode->prev=NULL;
        newnode->next=NULL;
        strcpy(newnode->data,str);
        if (*head==NULL)
                *head = *rear = newnode;
        else
        {
                (*rear)->next=newnode;
                *rear=newnode;
        }
}