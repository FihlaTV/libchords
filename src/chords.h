/*
 * chords.h - main header of the libchords library
 */

/**
 * @brief Basic struct for chord.
 */
typedef struct {
  int note_count;       /*< Total number of notes in a chord. */
  unsigned char *notes; /*< The notes. */
} chord;

typedef enum { CHORDS_MAJOR, CHORDS_MINOR, CHORDS_MODE_COUNT } key_mode;

typedef struct {
  int accidental;
  key_mode key_mode;
} key;

typedef enum {
  CHORDS_ENGLISH,
  CHORDS_GERMAN,
  CHORDS_ITALIAN,
  CHORDS_LANG_COUNT
} notation_lang;

#define NOTES_COUNT 12

int chords_note_string_to_note(char *note_string, notation_lang notation,
                               int base_octave);
int chords_note_to_note_string(int note, char *note_buf, int buf_size,
                               notation_lang notation, int base_octave,
                               key main_key);
double chords_note_to_frequency(int note);
