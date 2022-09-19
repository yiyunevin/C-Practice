#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc, char *argv[])
{
    if (argc < 3){
        printf("Usage : ./main name desc ...\n");
        return 1;
    }
    
    char *name;
    char *desc;
    for (int i=1; i<argc; i+=2 ){
        name = malloc( ( sizeof(argv[i]) / sizeof(char) ) * sizeof(char) );
        desc = malloc( sizeof(argv[i+1]) );
        if(name == NULL || desc == NULL){
            printf("Failed to allocate.\n");
            return 2;
        }
        strcpy(name, argv[i]);
        strcpy(desc, argv[i+1]);
        printf("Name : %s\nDesc : %s\n", name, desc);
        free(name);
        free(desc);
    }

    return 0;
}
