#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Increase frequency for first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    // Decrease frequency for second string
    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    // Check frequencies
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("The strings are Not Anagrams.\n");
            return 0;
        }
    }

    printf("The strings are Anagrams.\n");

    return 0;
}