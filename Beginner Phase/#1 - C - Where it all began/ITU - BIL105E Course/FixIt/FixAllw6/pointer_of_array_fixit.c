#include <stdio.h>
main()
{
  int i[10], j;
  int iptr;

  for (j=0; j<10; j++)
   {
       i[j]=j;
   }
  /* Dizinin baþlangýç adresine eriþmek için ilk elemanýn adresi kullanýlabilir  &i[0]  veya doðrudan */
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
/* iptr artýk dizinin baþýný göstermez */
//-------------------------------------------------------------------------------------------------------
  iptr = i;
  for (j=0; j<10; j++)
   {
      printf("%d ", *(iptr+j));
   }
  printf("my pointer %p\n",iptr);
/* iptr hala dizinin baþýný gösterir */
//-------------------------------------------------------------------------------------------------------
  getch();
}


