#include <stdio.h>
main()
{
  int i[10], j;
  int iptr;

  for (j=0; j<10; j++)
   {
       i[j]=j;
   }
  /* Dizinin ba�lang�� adresine eri�mek i�in ilk eleman�n adresi kullan�labilir  &i[0]  veya do�rudan */
  iptr = i; 
  printf("my pointer %p\n",iptr);
  printf("my pointer %p\n",&i[0]);
//-------------------------------------------------------------------------------------------------------
  for (j=0; j<10; j++)
   {
      printf("%d ", *iptr);
      iptr++;
   }
  printf("my pointer %p\n",iptr);
/* iptr art�k dizinin ba��n� g�stermez */
//-------------------------------------------------------------------------------------------------------
  iptr = i;
  for (j=0; j<10; j++)
   {
      printf("%d ", *(iptr+j));
   }
  printf("my pointer %p\n",iptr);
/* iptr hala dizinin ba��n� g�sterir */
//-------------------------------------------------------------------------------------------------------
  getch();
}


