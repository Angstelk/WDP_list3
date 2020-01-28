#ifndef HEADER_FILE
#define HEADER_FILE
struct node
{
 char val;
  struct node * next;
};

void push(char i, struct node ** top);
int  pop(struct node** top);
int empty(struct node** top);
void destroy(struct node** top);
void print(struct  node* top);
int head_val( struct node *top );
int check_bracket(char string[]);
int ifmatch(char ch1,char ch2);
#endif
