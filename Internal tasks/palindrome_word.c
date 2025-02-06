#include <stdio.h>
#include <string.h>

// Function to check if a word is palindrome
int isPalindrome(char word[]) {
    int start = 0;
    int end = strlen(word) - 1;

    while (start < end) {
        if (word[start] != word[end]) {
            return 0; // word is not palindrome
        }
        start++;
        end--;
    }

    return 1; // word is palindrome
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("%s is a palindrome word.\n", word);
    } else {
        printf("%s is not a palindrome word.\n", word);
    }

    return 0;
}

