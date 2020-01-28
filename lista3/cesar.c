#include<stdio.h>
#include<stdlib.h>
#define TAB_SIZE 10

int main(int argc, char *argv[])
{
	printf("args num: %d \n", argc);
	char tab[TAB_SIZE], sign;
	int i;
	char *k=argv[3];
	int key = atoi(k);	
	FILE *in_file  = fopen(argv[1], "r"); // read only
        FILE *out_file = fopen(argv[2], "w"); // write onl	
	
	printf("key: %d \n", key);
	
	if( in_file == NULL && out_file == NULL  )
	{
		printf("File error \n");
		exit(-1);
	}
        
	printf("File succes \n");
	while ( fgets( tab, TAB_SIZE,in_file  ) != NULL ); 
	
	printf("key: %d \n", key);
	
	printf("Input :  %s \n",tab);

	for(i = 0; tab[i] != '\0'; ++i){
		sign = tab[i];
		
		if(sign >= 'a' && sign <= 'z'){
			sign = sign + key;
			
			if(sign > 'z'){
				sign = sign - 'z' + 'a' - 1;
			}
			
			tab[i] = sign;
		}
		else if(sign >= 'A' && sign <= 'Z'){
			sign = sign + key;
			
			if(sign > 'Z'){
				sign = sign - 'Z' + 'A' - 1;
			}
			
			tab[i] = sign;
		}
	}
	fprintf(out_file, "%s", tab);
	fclose(out_file);	
	fclose(in_file);	
	printf("Output :  %s \n",tab);
	return 0;
}
