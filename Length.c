#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string("Insert your sentence: ");
    int word = 1;
    int length = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            length++;
        }
        else
        {
            printf("The length of word %i is %i\n", word, length);
            word++;
            length = 0;
        }
    }

    printf("The length of word %i is %i\n", word, length);
}
