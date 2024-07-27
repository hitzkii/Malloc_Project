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
     
     printf("%d\n",free->s.i);
     //printf("%d\n",free->b);
     return 0;
}