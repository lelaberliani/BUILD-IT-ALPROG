#include <stdio.h>
#include <string.h>

int main() {
    char input[1001];           
    char words[300][71];       
    int wordCount = 0;

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  
    
    char *token = strtok(input, " ");
    while (token != NULL) {
        int duplicate = 0;

        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i], token) == 0) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            if (wordCount < 300) { 
                strncpy(words[wordCount], token, 70);
                words[wordCount][70] = '\0'; 
                wordCount++;

                if (wordCount > 1) printf(" ");
                printf("%s", token);
            }
        }

        token = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}