#include <stdio.h>

int main()
{
    char str[100];
    int numCount = 0;
    
    printf("Enter a string:\n");
    scanf("%[^\n]s", str);
    
    for(int i = 0; str[i]; i++) {
        if(str[i] >= 0x30 && str[i] <= 0x39){
            numCount++;
        }    
    }
    
    printf("%d numbers in a string.", numCount);
}
