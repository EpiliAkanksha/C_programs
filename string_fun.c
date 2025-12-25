#include <stdio.h>
#include <string.h>

int main() {
    // 1. strlen - Returns the length of a string
    char str1[] = "Hello, World!";
    printf("Length of str1: %zu\n", strlen(str1));

    // 2. strcpy - Copies one string to another
    char str2[20];
    strcpy(str2, str1);
    printf("After strcpy, str2: %s\n", str2);

    // 3. strncpy - Copies a specified number of characters
    char str3[20];
    strncpy(str3, str1, 5);
    str3[5] = '\0';  // Null-terminate
    printf("After strncpy, str3: %s\n", str3);

    // 4. strcat - Appends one string to another
    char str4[40] = "Hello";
    strcat(str4, ", World!");
    printf("After strcat, str4: %s\n", str4);

    // 5. strncat - Appends a specified number of characters
    char str5[40] = "Hello";
    strncat(str5, ", Universe!", 4);  // Appends only " Uni"
    printf("After strncat, str5: %s\n", str5);

    // 6. strcmp - Compares two strings
    char str6[] = "Hello";
    char str7[] = "World";
    printf("Result of strcmp(str6, str7): %d\n", strcmp(str6, str7));  // Non-zero if not equal

    // 7. strncmp - Compares first n characters of two strings
    printf("Result of strncmp(str6, \"Hel\", 3): %d\n", strncmp(str6, "Hel", 3));  // Should be 0 if equal

    // 8. strchr - Finds the first occurrence of a character
    char *ptr1 = strchr(str1, 'W');
    if (ptr1) {
        printf("First occurrence of 'W' in str1: %s\n", ptr1);
    }

    // 9. strrchr - Finds the last occurrence of a character
    char *ptr2 = strrchr(str1, 'o');
    if (ptr2) {
        printf("Last occurrence of 'o' in str1: %s\n", ptr2);
    }

    // 10. strstr - Finds the first occurrence of a substring
    char *ptr3 = strstr(str1, "World");
    if (ptr3) {
        printf("First occurrence of \"World\" in str1: %s\n", ptr3);
    }

    // 11. strdup - Duplicates a string (POSIX)
    char *str_dup = strdup(str1);
    printf("Duplicate of str1: %s\n", str_dup);
    free(str_dup);  // Free memory allocated by strdup

    // 12. strtok - Tokenizes a string based on a delimiter
    char str8[] = "Hello,World,from,C";
    char *token = strtok(str8, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    // 13. memset - Sets memory with a specific character
    char str9[20] = "Hello";
    memset(str9, '*', 3);
    printf("After memset, str9: %s\n", str9);  // Prints "***lo"

    // 14. memcpy - Copies memory area
    char str10[20] = "Hello";
    char str11[20];
    memcpy(str11, str10, strlen(str10) + 1);  // +1 for null terminator
    printf("After memcpy, str11: %s\n", str11);

    // 15. memmove - Copies memory with overlapping memory areas
    char str12[20] = "123456";
    memmove(str12 + 2, str12, 4);  // Shift first 4 chars two positions right
    printf("After memmove, str12: %s\n", str12);

    return 0;
}

