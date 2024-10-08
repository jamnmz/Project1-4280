
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "scanner.h"


int main(int argc, char* argv[])
{

        char nodeValue;
        char input[20];
        char subLine[20];
        char choice;
        char filename[20];
        FILE *fp;
        
        //initializing counting variables
        int k = 0;
        int charCount = 0;
        int lineCount = 1;
        int tokStart = 0;
        int tokEnd = 0;
        
        //code to open file if one is presented in arguments
        if(argc > 1)
        {
            
            fp = fopen(argv[1], "r");
            //error message for failure to open file
            if (fp == NULL)
            {
                printf("Error opening file: %s\n", argv[1]);
                return 1;
            }
            
            char line[256];
            while(fgets(line, sizeof(line), fp) != NULL)
            {
                printf("%s\n", line);
                //printf("\ni\n");
                int j = 0;
                for(j = 0; j < (strlen(line)); j++)
                {
                    //accounting for WS between words/lines
                    if(line[j] == ' ')
                    {
                        strncpy(subLine, line+(tokStart), charCount);
                        printf("%s %d\n", subLine, charCount);
                        lineCount++;
                        tokStart = j+1;
                        charCount = 0;
                        
                    }
                    //prints current if not WS
                    else
                    {
                        //printf("%d :%c:%d:%d\n", j+1, line[j],lineCount,charCount);
                        charCount++;
                    }
                    scanner(subLine, lineCount);
                }
            }
            fclose(fp);
        }
        //if no file is present, prompt for keyboard input
        else
        {
                // User input loop to insert nodes into the binary tree
                do
                {
                    // Prompt user for input
                    printf("Input a value to insert into the binary tree: \n");
                    scanf("%s", input);

                    //run scanner class on input string
                    scanner(input, k);
                    k++;

                        
                } while (input[0] != '`');
        }


        // Return 0 to indicate successful execution
        return 0;
}
