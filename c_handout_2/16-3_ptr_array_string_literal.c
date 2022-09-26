#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    // String Pointer Array
    char *arr[] = {"kido", "seto", "kano", "marry", "momo", "ene", "shintaro", "hibiya", "konoha", "ayano"};
    // Get length
    int len = sizeof(arr)/sizeof(*arr);

    int x;
    do{
        printf("Enter an integer 0-9: ");
        scanf("%d", &x);
    }while(x<0 || x>9);
    
    char name[10];
    for (int i=x; i<len; i++){
        int j = 0;
        // String literal = const string (automatic convert) -> need a copy
        strcpy(name, arr[i]);
        // check: end of string
        while(*(name+j) != '\0'){
            // turn into capital letter
            *(name+j) = toupper(*(name+j));
            j++;
        }
        printf("%s:", name);
    }
    return 0;
}
