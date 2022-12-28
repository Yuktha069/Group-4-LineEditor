//this the header file created by the developer

#include "header.h"

/******************************************************/
/*function for switch cases for selecting the command
parameters: filename and string 
return type : void*/
/******************************************************/


void selectMenu(char *fname,char *str1)
{
       char ch[10];
       node *head=NULL;
       node *rear=NULL;
       char filename[1024];
       enum operations option;
       char *buffer;
       FILE *fptr;
       while(1)
       {
              printf("\nEnter a command\t");
              fgets(ch,10,stdin);
              switch(ch[0])
              {
                       case ADD:
                               fgets(str1,90,stdin);
                               str1[strlen(str1)-1]='\0';
                               add(&head,&rear,str1);
                               break;
                        case READ:
                                 printf("enter the file name: ");
                                 scanf("%s",filename);
                                 read_file(filename,head);  //calling function
                                 break;
                        case DISPLAY:
                                 printf("\ncontents are\n");
                                 display(head);
                                 break;
                        case APPEND:
                                 printf("Enter the text to append into file:");
                                 fgets(fptr,90,stdin);
                                 append_file(buffer,&head);
                                 break;
                        case SAVE:
                                 printf("\nenter file name:\t");
                                 fgets(fname,90,stdin);
                                 printf("\nYour file name is ::%s",fname);
                                 save(head,fname);
                                 break;
                        case QUIT://this case is for quitting from line editor
                                 printf("Do you want to save the text buffer(Yes=1/No=0):\t");      //Before quiting we have to save the file
                                 scanf("%u",&option);
                                 if(option==1)
                                 {
                                         printf("\nenter file name:\t");
                                         fgets(fname,90,stdin);
                                         //printf("\nyour file name is :%s\t ",fname);
                                         save(head,fname);
                                         exit(0);
                                         break;
                                 }
                                 else
                                         exit(0);
                        default:
                                 printf("\nwrong choice");
                                 break;
                }//end switch
        }//end while
}//end selectMenu