#include <stdio.h>

void swap(int* x, int* y)  
{  
    int tmp = *x;  
    *x = *y;  
    *y = tmp;  
}  

int part (int tab[], int L, int H)  
{  
    int pivot = tab[H]; 
    int i = (L - 1);  
  
    for (int j = L; j <= H - 1; j++)  
    {  
        if (tab[j] < pivot)  
        {  
            i++;  
            swap(&tab[i], &tab[j]);  
        }  
    }  
    swap(&tab[i + 1], &tab[H]);  
    return (i + 1);  
}    

void qsort(int tab[], int L, int H)
{
    if (L < H)
    {
        int pivot = part(tab, L, H);
        qsort(tab, L, pivot - 1); 
        qsort(tab, pivot + 1, H); 
    }
}
void print(int tab[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        printf(" %d ",tab[i]);
  	printf("\n");  
}  
int main()
{
int tab[]={20,2,33,45,661,2,3,45,67,82,1,2,3};
int n=13;
printf("Nieposortowane : \n");
print(tab,sizeof(tab)/sizeof(int));
qsort(tab,0,sizeof(tab)/sizeof(int));
printf("Posortowane : \n");
print(tab,sizeof(tab)/sizeof(int));


}
