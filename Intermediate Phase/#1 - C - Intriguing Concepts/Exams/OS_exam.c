#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <assert.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
   close(STDOUT_FILENO);
   int f = open("foo.txt", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
   assert (f >= 0);
   int rt = fork();
   if (rt == 0) {
      write(f, "Child here!\n", 20);
      printf("Child terminates.\n"); 
   } else if ( rt > 0) {
      (void) wait(NULL);
      write(f, "Parent here!\n", 21);
      printf("Parent terminates.\n"); 
   }
   return 0;
}
