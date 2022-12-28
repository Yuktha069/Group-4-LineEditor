//this the header file created by the developer

#include "header.h"

/*function is for displaying contents of the file
 * parameters : head node
 * return type : void
 * */

void display(node* head)
{
        node *temp=head;
        if(head==NULL)
                printf("\nfile is empty");
        else
        {
                while(temp!=NULL)
                {
                        printf("%s",temp->data);
                        temp=temp->next;
                }
        }
}
