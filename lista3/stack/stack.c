#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
#include <assert.h>
int empty( struct node** top)
{
	return(*top== NULL); // jesli pusta true
}

void push(char i, struct node ** top)
{
 struct node *new_node = malloc (sizeof (struct node));
 new_node->val=i;
 new_node->next=*top;
 *top=new_node;
}

int pop(struct node ** top)
{
int retval = -1;
    struct node * next_node = NULL;

    if (*top == NULL) {
        return -1;
    }

    next_node = (*top)->next;
    retval = (*top)->val;
    free(*top);
    *top = next_node;

    return retval;

}

void print( struct node *top)
{
	struct node* tmp=top;
	printf("Lista : \n");
	
	while( !(tmp->next==NULL))
	{
		printf("%c \n",tmp->val);
		tmp=tmp->next;	
	}
}

int head_val( struct node * top )
{
	return top->val;	
}

void destroy( struct node ** top )
{
	struct node* tmp=(*top)->next;
	
	while( !((*top)->next==NULL))
	{	
		tmp=(*top)->next;
		free(*top);
		(*top)=tmp;

	}

}

int  ifmatch(char ch1, char ch2)
{
   if (ch1 == '(' && ch2 == ')')
    return 1;
   else
     return 0;
}

int check_bracket(char string[])
{
   int i = 0;
   struct node *stack = malloc(sizeof(struct node));
   stack =NULL;
   while (string[i])
   {
     if (string[i] == '(')
     {
        push( string[i], & stack );
     }

     if (string[i] == ')')
      {

        if (stack == NULL)
           return 0;

        else if ( !ifmatch(pop(&stack), string[i]) )
           return 0;
      }
      i++;
   }

    return empty(&stack);
     
    
}
