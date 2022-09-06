#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;
    int aNotes = 0;
    int bNotes = 0;
    int cNotes = 0;
    int dNotes = 0;
    int fNotes = 0;

    printf("Enter with the notes in letters. \n");
    printf("Type EOF to finish.\n");

    while((note = getchar()) != EOF){
        switch(note){
        case 'A':
        case 'a':
            ++aNotes;
            break;
        case 'B':
        case 'b':
            ++bNotes;
            break;
        case 'C':
        case 'c':
            ++cNotes;
            break;
        case 'D':
        case 'd':
            ++dNotes;
            break;
        case 'F':
        case 'f':
            ++fNotes;
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            printf("Letter incorrect. ");
            printf("Type a new letter.\n");
            break;
        }
    }

    printf("\nTotal of each notes: \n");
    printf("A: %d\n", aNotes);
    printf("B: %d\n", bNotes);
    printf("C: %d\n", cNotes);
    printf("D: %d\n", dNotes);
    printf("F: %d\n", fNotes);

    return 0;
}
