#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//scanner function to determine token classes
void scanner(char *input)
{
    int i = 0;
    int j = 0;
    
    if(isdigit(input[i]))
    {
        i=0;
        j=0;
        printf("number alert from the scanner class\n");
        for(i = 0; i < (strlen(input)); i++)
        {
            printf("%c:%s\n", input[i], input);
            if (input[i] == '.')
            {
                j++;
            } 
            else if(!(isdigit(input[i])))
            {
                printf("ERROR: unexpected non digit character, terminating\n");
                exit(1);
            }
        }
        if(j > 0)
        {
            printf("Token type FLOAT: %s\n", input);
        }
        else
        {
            printf("Token type INT: %s\n", input);
        }
    }
    else if(isalpha(input[i]))
    {
        for(i = 0; i < (strlen(input)); i++)
        {
            printf("%d :%c\n", i+1, input[i]);
            

        }
    }
    else
    {
        printf("failure\n");
    }
    
    

}
