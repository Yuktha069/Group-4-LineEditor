#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define ADD 'a'           // we define macros for switch cases
#define DISPLAY 'd'        //dispaly switch case
#define READ 'r'      // read the file
#define SAVE 's'     //save switch case
#define APPEND 'p'
#define WRITE 'w'
#define QUIT 'q'         //that is for add and quit

enum operations
{No=0,Yes};         //enum operations for yes or no option in the quit case



typedef struct Linked_list         //  This structure is about creating linkedlist for storing data from file or to the file
{
          char *data[90];
          struct Linked_list *next,*prev;
}node;



void selectMenu(char*,char*);    //selction menu for switch cases
node* add(node**,node**,char*);          // adding function for text adding to the linkedlist
void display(node*);             // displaying function for the dispalying  data
void writedata(FILE*,char*,node*);         // saving data in the file
void save(node*,char*);     //writing data in the file
void read_file(char* fn,node *head);
void append_file(char*,node**);