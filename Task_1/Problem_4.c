#include <stdio.h>
#include <string.h>

void checkPalindrome(char word[]) {
    int length = strlen(word);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The word '%s' is a palindrome.\n", word);
    else
        printf("The word '%s' is not a palindrome.\n", word);
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    checkPalindrome(word);

    return 0;
}
