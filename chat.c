#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void greet() {
    printf("Hello! I am your C programming assistant.\n");
    printf("Ask me anything about C programming!\n");
}

void respond(char *question) {
    // Remove trailing newline character
    question[strcspn(question, "\n")] = 0;

    if (strcmp(question, "variables") == 0) {
        printf("Variables in C store data values. Example:\n");
        printf("int age = 25;\nfloat height = 5.9;\nchar grade = 'A';\n");
    } else if (strcmp(question, "loops") == 0) {
        printf("Loops in C allow repetitive execution. Example:\n");
        printf("for (int i = 1; i <= 5; i++) {\n");
        printf("    printf(\"Iteration %%d\\n\", i);\n}\n");
    } else if (strcmp(question, "functions") == 0) {
        printf("Functions in C are used for modular programming. Example:\n");
        printf("#include <stdio.h>\nvoid greet() {\n");
        printf("    printf(\"Hello!\\n\");\n}\nint main() {\n");
        printf("    greet();\n    return 0;\n}\n");
    } else if (strcmp(question, "arrays") == 0) {
        printf("Arrays in C store multiple elements of the same type. Example:\n");
        printf("int marks[5] = {85, 90, 75, 88, 92};\n");
        printf("printf(\"Marks of first student: %%d\\n\", marks[0]);\n");
    } else if (strcmp(question, "control statements") == 0) {
        printf("Control statements in C control flow of execution. Example:\n");
        printf("int age = 18;\nif (age >= 18) {\n");
        printf("    printf(\"You are eligible to vote.\\n\");\n} else {\n");
        printf("    printf(\"You are not eligible to vote.\\n\");\n}\n");
    } else if (strcmp(question, "exit") == 0) {
        printf("Exiting C Buddy. Goodbye!\n");
        exit(0);
    } else {
        printf("Sorry, I don't understand that. Ask about 'variables', 'loops', 'functions', 'arrays', 'control statements', or 'exit'.\n");
    }
}

int main() {
    char question[100];

    greet();

    while (1) {
        printf("Your question: ");
        fgets(question, sizeof(question), stdin);
        respond(question);
    }

    return 0;
}
