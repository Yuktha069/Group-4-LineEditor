//this the header file created by the developer

#include "header.h"


/*function for writing data to a file
 * parameters : node temp which will store head node
 * return type : void
 * */
void save(node *head,char *fn)
{
        node *temp=head;
        FILE *fptr=fopen(fn,"w");
        if(fptr==NULL)
        {
         printf("File already exist");
        }
        else
        {
           while(temp!=NULL)
           {
                fprintf(fptr,"%s\n",temp->data);
                temp=temp->next;
                free(temp);
           }//end of while
        }
        fclose(fptr);
        printf("\nfile is saved\n");
}
