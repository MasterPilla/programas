#include <stdio.h>
main(){
   int *p, i, mat[10] ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
   p=mat;
   for(i=0; i<=9; i++)     {
         printf("\n mat[%d] = %d ", i, *p);
         printf("\tDirección: %x", p);
              p++;
   }
}
