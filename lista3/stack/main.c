#include<stdio.h>
#include"stack.h"
#include <stdlib.h>
int main()
{


     char tab[100] = "(x()(x)))";
     char tab2[100] = "((((dffds((((((((sdfsdf))))sss)))gg)))))";
     printf("%s \n",tab);
     if (check_bracket(tab))
    printf("Nawiasy ok \n"); 
  	else
    printf("Nawiasy nie ok \n");   
     
	printf("%s \n",tab2);
     if (check_bracket(tab2))
    printf("Nawiasy ok \n"); 
  	else
    printf("Nawiasy nie ok  \n");   
  	return 0;

}
