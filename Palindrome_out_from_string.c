// Author: ADARSH
// https://github.com/ADARSH-863

/*  Write a program that accepts a string and output all palindromes from that string.
    [“ece” from “December”]. */

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    
    printf("\nEnter the string: ");
    gets(str);

    for (int i = 0; i < strlen(str)-1; i++) {
        for (int j = i+1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                int s, e, c = 0;
                s = i;
                e = j;
                for (int k = s; k <= e; k++) {
                    if (str[k] != str[e-k+s]) {
                        c++;
                        break;
                    }
                }
                if (c == 0) {
                    for (int k = s; k <= e; k++) {
                        printf("%c", str[k]);
                    }
                    printf(", ");
                }                
            }     
        }        
    }
    printf("\n\n");       

    return 0;
}
