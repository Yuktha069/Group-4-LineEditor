//this the header file created by the developer

#include "header.h"

/*function is for appending contents to the file
 * parameters : head node and buffer
 * return type : void
 * */



void append_file(char *buffer,node **head)
{
        FILE* fptr=fopen("filename","r");
        //Allocate memory for a new node
        node *newnode;
        node *curr=head;
        newnode=(node*)malloc(sizeof(node));

        if(newnode==NULL)
        {
                printf("Error allocating memory to new node");
                return;
        }

        strcpy(newnode->data,buffer);
        newnode->next = NULL;

        //Add the node to the linked list
        if(head==NULL)     //Linked list is empty
        {
          *head=newnode;
        }
        else
        {

                while(curr->next != NULL)    //curr is current node
                {
                        curr=curr->next;  //curr points to next node
                }
                 curr->next=newnode;  //curr is pointing to last node so connect it with new node
        }

}