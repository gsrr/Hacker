
/*
 *
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
        char buf[96];
        if(argc != 2)
        {
                return;
        }
        strcpy(buf, argv[1]);
        printf("input is %s\n", buf);
        return 0;
}

