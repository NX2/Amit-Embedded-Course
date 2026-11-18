/*
  Requirements:
  Write a program to Reverse words in a string
 */
#include <stdio.h>
#include <string.h>

void reverse_chars(char *start, char *end)
{
    while (start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}

void reverse_words(char *str)
{
    int len = strlen(str);
    if (len == 0) return;

    // Step 1: reverse the whole string  
    reverse_chars(str, str + len - 1);

    // Step 2: reverse each word back to normal 
    char *word_start = str;
    char *p = str;

    while (1)
    {
        if (*p == ' ' || *p == '\0')
        {
            if (p > word_start)
                reverse_chars(word_start, p - 1);
            if (*p == '\0') break;
            word_start = p + 1;
        }
        p++;
    }
}

int main(void)
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    reverse_words(str);

    printf("%s\n", str);
    return 0;
}