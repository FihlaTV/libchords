// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// #define MAX_CHORDS 50
// #define MAX_CHORD_LENGTH 30
// #define NOTES_COUNT 12
//
// const char *NOTE_NAMES[NOTES_COUNT] = {"C",  "C#", "D",  "D#", "E", "F",
//                                        "F#", "G",  "G#", "A",  "B", "H"};
//
// int main() {
//   char *chords[MAX_CHORDS];
//   for (size_t i = 0; i < MAX_CHORDS; i++) {
//     chords[i] = 0;
//   }
//   for (int i = 0; i < MAX_CHORDS; i++) {
//     printf("Enter chord #%d (or press ENTER to stop): ", i + 1);
//     chords[i] = malloc(sizeof(char) * (MAX_CHORD_LENGTH + 1));
//     fgets(chords[i], MAX_CHORD_LENGTH, stdin);
//     chords[i][strlen(chords[i]) - 1] = 0;
//     if (!strcmp(chords[i], "")) {
//       free(chords[i]);
//       chords[i] = 0;
//       break;
//     }
//   }
//   int transpose = 0;
//   printf("Enter transposition value in semitones: ");
//   scanf("%d", &transpose);
//   transpose %= NOTES_COUNT;
//   if (transpose < 0)
//     transpose += NOTES_COUNT;
//   for (int i = 0; i < MAX_CHORDS && chords[i]; i++) {
//     int base_note = 0;
//     int length = strlen(chords[i]);
//     int note_name_length = 1;
//     switch (chords[i][0]) {
//     case 'C':
//       base_note = 0;
//       break;
//     // C#/Db = 1
//     case 'D':
//       base_note = 2;
//       break;
//     // D#/Eb = 3
//     case 'E':
//       base_note = 4;
//       break;
//     case 'F':
//       base_note = 5;
//       break;
//     // F#/Gb = 6
//     case 'G':
//       base_note = 7;
//       break;
//     // G#/Ab = 8
//     case 'A':
//       base_note = 9;
//       break;
//     case 'B':
//       base_note = 10;
//       break;
//     case 'H':
//       base_note = 11;
//       break;
//     }
//     if (length > 1) {
//       switch (chords[i][1]) {
//       case '#':
//         base_note++;
//         note_name_length = 2;
//         break;
//       case 'b':
//         base_note--;
//         note_name_length = 2;
//         break;
//       }
//     }
//     base_note += transpose;
//     base_note %= NOTES_COUNT;
//     int new_chord_length =
//         length - note_name_length + strlen(NOTE_NAMES[base_note]);
//     char *tmp = malloc(sizeof(char) * (new_chord_length + 1));
//     strcpy(tmp, NOTE_NAMES[base_note]);
//     strcat(tmp, chords[i] + note_name_length);
//     printf("[%d] %s -> %s\n", i + 1, chords[i], tmp);
//     free(chords[i]);
//     chords[i] = 0;
//     free(tmp);
//   }
//   return 0;
// }

#include "chords.h"
#include <stdio.h>

int main() {
  // test middle C conversion (must print approx. 261.6)
  printf("The frequency for middle C is about %8.3lf Hz\n", chords_note_to_frequency(60));
  return 0;
}
