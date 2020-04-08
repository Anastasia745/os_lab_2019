#include "revert_string.h"

void RevertString(char *str)
{
    int i = 0;
    while (str[i]) i++;
    for (int j = 0; j < i / 2; j++)
    {
       char t = str[j];
       str[j] = str[i - j - 1];
       str[i - j - 1] = t;
    }
}

