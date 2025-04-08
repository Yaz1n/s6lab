#include <stdio.h>
#include <string.h>

// Function to print word for a single digit
void printDigitWord(char digit) {
    switch (digit) {
        case '0': printf("zero "); break;
        case '1': printf("one "); break;
        case '2': printf("two "); break;
        case '3': printf("three "); break;
        case '4': printf("four "); break;
        case '5': printf("five "); break;
        case '6': printf("six "); break;
        case '7': printf("seven "); break;
        case '8': printf("eight "); break;
        case '9': printf("nine "); break;
        default: break;
    }
}

int main() {
    char number[100];

    printf("Enter a number: ");
    scanf("%s", number);

    printf("In words: ");
    for (int i = 0; i < strlen(number); i++) {
        printDigitWord(number[i]);
    }

    printf("\n");
    return 0;
}




#include <stdio.h>
#include <ctype.h>  // for isalpha, isdigit, etc.

int main() {
    char str[1000];
    int alphabets = 0, digits = 0, spaces = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            digits++;
        else if (isspace(str[i]))
            spaces++;
        else
            specialChars++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", specialChars);

    return 0;
}





#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Optional: remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);  // convert to lowercase for simplicity
        switch (ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("Vowel counts:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}





#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // normalize to lowercase

        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}





#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_WORD_LEN 50

// Structure to hold word and its count
struct WordCount {
    char word[MAX_WORD_LEN];
    int count;
};

int main() {
    char str[1000];
    struct WordCount words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Tokenize string based on space
    char *token = strtok(str, " ");
    while (token != NULL) {
        // Convert to lowercase
        for (int i = 0; token[i]; i++) {
            token[i] = tolower(token[i]);
        }

        // Check if the word already exists
        int found = 0;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i].word, token) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }

        // If not found, add to list
        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount].word, token);
            words[wordCount].count = 1;
            wordCount++;
        }

        token = strtok(NULL, " ");
    }

    // Print word occurrences
    printf("\nWord Occurrences:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }

    return 0;
}





#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if exists
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}




#include <stdio.h>
#include <string.h>

int wordToNumber(const char *word) {
    // Units
    if (strcmp(word, "zero") == 0) return 0;
    if (strcmp(word, "one") == 0) return 1;
    if (strcmp(word, "two") == 0) return 2;
    if (strcmp(word, "three") == 0) return 3;
    if (strcmp(word, "four") == 0) return 4;
    if (strcmp(word, "five") == 0) return 5;
    if (strcmp(word, "six") == 0) return 6;
    if (strcmp(word, "seven") == 0) return 7;
    if (strcmp(word, "eight") == 0) return 8;
    if (strcmp(word, "nine") == 0) return 9;
    if (strcmp(word, "ten") == 0) return 10;
    if (strcmp(word, "eleven") == 0) return 11;
    if (strcmp(word, "twelve") == 0) return 12;
    if (strcmp(word, "thirteen") == 0) return 13;
    if (strcmp(word, "fourteen") == 0) return 14;
    if (strcmp(word, "fifteen") == 0) return 15;
    if (strcmp(word, "sixteen") == 0) return 16;
    if (strcmp(word, "seventeen") == 0) return 17;
    if (strcmp(word, "eighteen") == 0) return 18;
    if (strcmp(word, "nineteen") == 0) return 19;

    // Tens
    if (strcmp(word, "twenty") == 0) return 20;
    if (strcmp(word, "thirty") == 0) return 30;
    if (strcmp(word, "forty") == 0) return 40;
    if (strcmp(word, "fifty") == 0) return 50;
    if (strcmp(word, "sixty") == 0) return 60;
    if (strcmp(word, "seventy") == 0) return 70;
    if (strcmp(word, "eighty") == 0) return 80;
    if (strcmp(word, "ninety") == 0) return 90;

    return -1;  // Unknown word
}

int main() {
    char input[100];
    printf("Enter number in words (e.g., 'twenty three'): ");
    fgets(input, sizeof(input), stdin);

    // Remove newline
    input[strcspn(input, "\n")] = '\0';

    // Split the input into words
    char *word = strtok(input, " ");
    int number = 0;

    while (word != NULL) {
        int value = wordToNumber(word);
        if (value == -1) {
            printf("Unknown word: %s\n", word);
            return 1;
        }

        // If already has a value and this is a unit, add
        if (value < 10 && number >= 20)
            number += value;
        else
            number = value;

        word = strtok(NULL, " ");
    }

    printf("Numeric value: %d\n", number);

    return 0;
}






#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of digits raised to the power of n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}




#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}




