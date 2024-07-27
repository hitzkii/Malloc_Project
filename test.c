#include "stdio.h"
#include "stdlib.h"
int main (int argc, char *argv[])
{
    union lol{
        struct {
            int i;
        }s;
        char b;
    };
    typedef union lol head;
    head *free;
    free = malloc(sizeof(union lol));
    
     free->s.i = 1;
      free->b = 'a';
     printf("%d\n",free->s.i);
     printf("%c\n",free->b);
     return 0;
}