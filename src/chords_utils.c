#include "chords.h"
#include <math.h>

#define HEPTATONIC_DEGREE_COUNT 7

static unsigned char DEGREES[CHORDS_MODE_COUNT][HEPTATONIC_DEGREE_COUNT] = {
    [CHORDS_MAJOR] = {0, 2, 4, 5, 7, 9, 11},
    [CHORDS_MINOR] = {0, 2, 3, 5, 7, 8, 10}};

int chords_note_string_to_note(char *note_string, notation_lang notation,
                               int base_octave) {
  // TODO: real return
  return 0;
}

int chords_note_to_note_string(int note, char *note_buf, int buf_size,
                               notation_lang notation, int base_octave,
                               key main_key) {
  int octave = note / NOTES_COUNT + base_octave;
  int pitch = note % NOTES_COUNT;
  // TODO: real return
  return 0;
}

double chords_note_to_frequency(int note, double reference_freq) {
  // A5 = usually about 440 Hz, corresponds to note number 69
  return reference_freq * pow(2.0, (note - 69) / 12.0);
}
