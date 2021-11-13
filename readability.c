#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string s;
    s = get_string("Text: ");
    //To get average number of letters
    int i = 0;
    float c = 0;
    int n = strlen(s);
    char a;
    float S = 0;
    float L = 0;
    float w = 1;
    float index = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            c++; //counter
        }
        if ((s[i] == '.')  || (s[i] == '!') || (s[i] == '?'))
        {
            S++; //sentence counter
        }

        if (s[i] == ' ')
        {
            w++; //word counter
        }
    }
    L = c / w;
    L = L * 100.00;

    S = S / w;
    S = S * 100.00;

    index = 0.0588 * L - 0.296 * S - 15.8; //for calculating grade
    if (index < 1.000000)
    {
        printf("Before Grade 1\n"); //output before grade 1
    }
    else
    {
        index = round(index);
        int grade = (int) index;

        if (grade > 16)
        {
            printf("Grade 16+\n"); //more than 16th grade
        }
        else
        {
            printf("Grade %i\n", grade);
        }

    }
}