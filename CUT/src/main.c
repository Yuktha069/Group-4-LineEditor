#include "header.h"


int main()
{
        char ch[10],fname[90],string[90];   //here we use ch varible for taking command
        node *head=NULL; //fname is for file name     string is for data we are going to enter
        node *rear=NULL;
        node *curr=head;
        enum operations option;   ///enum operations for yes and no that we declared in header file
        FILE *fptr = NULL;   // file pointer
        char filename[1024];
        char *buffer;
        selectMenu(fname,string);  //fucntion for switch cases
        return 0;

}