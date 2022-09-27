#include <stdio.h>

char* deleteSpaceFromeText(char* s)
{
    int notEmptyChar = 0;
    char* d = s;
    char* res = s;
    do {
        while (*d == ' ') {
            ++d;
            continue;
        }
    } while (*s++ = *d++);
    
    return res;
}


int main()
{
    char a[] = "123   45 6 78 9";
    char* res = deleteSpaceFromeText(a);
    
    for(int i=0; i<sizeof(res)/sizeof(res[0])+1;i++){
        printf("%c", res[i]);
    }
    return 0;
}
