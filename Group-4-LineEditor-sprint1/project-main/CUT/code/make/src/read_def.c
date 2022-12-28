//this the header file created by the developer

#include "header.h"

/*****************************************************************************************
 * function for reading file with given filename in the form of linked list
 * PARAMETERS        :*fn,node*     */

void read_file(char* fn,node *head)
{
        char line[1024];
        char *data;
        char fname[20];
        //open the file
        //FILE *fp= fopen(filename, "r");
        node* temp=head;
        node* newnode;
        newnode=(node*)malloc(sizeof(node));
        strcpy(newnode->data,line);
        newnode->next=NULL;
        printf("File name is %s",fn);
        FILE *fptr=fopen(fname,"r");
        if(fptr==NULL)
        {
                printf("file not found\n");
                return;
        } //now file is open
        //trail.txt
        while(fgets(line,100,fn)!=NULL)
        {
                printf("The line is %s\n",line);
        }
        while(fgets(line,sizeof(line),fptr)!=NULL)
        {
                printf("%s\n",line);
                if(newnode==NULL)
                {
                        printf("error in allocating memory for new node\n");
                        return;
                }
                if(head==NULL)
                {
                        head=newnode;
                }
                else
                {
                        while((temp->next)!=NULL)
                        {
                          temp=temp->next;
                        }
                        temp->next=newnode;
                }
        }
        printf("file read successfully\n");
        fclose(fptr);
}