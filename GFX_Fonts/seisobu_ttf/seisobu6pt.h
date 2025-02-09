#pragma once
#include <Adafruit_GFX.h>

const uint8_t seisobu6pt7bBitmaps[] PROGMEM = {
  0xAA, 0xA8, 0xF0, 0x29, 0xFA, 0x94, 0xF9, 0x40, 0x66, 0xF6, 0x67, 0x7E,
  0x60, 0xC8, 0xCE, 0xCD, 0xCC, 0x62, 0x46, 0x08, 0xEE, 0x46, 0x80, 0xC0,
  0x6A, 0xA4, 0xA5, 0x68, 0xF0, 0x4F, 0x40, 0xC0, 0xF0, 0x80, 0x29, 0x29,
  0x20, 0xD6, 0xDB, 0x6E, 0x75, 0x54, 0x79, 0x11, 0x24, 0x4F, 0xE2, 0x26,
  0x11, 0x1E, 0x24, 0x6A, 0xF2, 0x20, 0x78, 0x86, 0x11, 0x1E, 0x52, 0x7B,
  0x78, 0xF1, 0x11, 0x22, 0x24, 0x69, 0x96, 0x99, 0x97, 0x69, 0x99, 0x71,
  0x26, 0xA0, 0x98, 0x39, 0x80, 0xF0, 0xF0, 0xC7, 0x00, 0x69, 0x12, 0x24,
  0x40, 0x1E, 0x08, 0x65, 0xEA, 0x4A, 0xA2, 0xA9, 0x25, 0xB1, 0x83, 0x1F,
  0x00, 0x26, 0x66, 0x79, 0x90, 0xD6, 0xEB, 0x6E, 0xF2, 0x49, 0x27, 0xF6,
  0xDB, 0x6F, 0xF2, 0x69, 0x27, 0xF2, 0x69, 0x24, 0xF2, 0x7B, 0x6F, 0xB7,
  0xDB, 0x68, 0xFE, 0x24, 0x92, 0x78, 0xBC, 0x8C, 0xCA, 0xA0, 0xAA, 0xAC,
  0x99, 0xBF, 0xD9, 0x90, 0xB6, 0xFF, 0x68, 0xF6, 0xDB, 0x6F, 0xD6, 0xDD,
  0x24, 0x79, 0x99, 0x99, 0xF7, 0xF6, 0xDD, 0xAD, 0x69, 0x84, 0x21, 0x1E,
  0xF4, 0x44, 0x44, 0x44, 0x99, 0x99, 0x99, 0x70, 0x99, 0x56, 0x62, 0x20,
  0x97, 0x2A, 0x53, 0xA6, 0xCD, 0x12, 0x00, 0x9A, 0x98, 0x46, 0x2A, 0x60,
  0x95, 0x62, 0x22, 0x20, 0xF1, 0x22, 0x44, 0x8F, 0xD2, 0x49, 0x27, 0x91,
  0x24, 0x88, 0xD5, 0x57, 0xE0, 0xF8, 0xC0, 0x79, 0x99, 0x97, 0x8F, 0x99,
  0x99, 0xF0, 0x72, 0x48, 0xC0, 0x17, 0x99, 0x99, 0x70, 0x69, 0x9F, 0x87,
  0x69, 0x74, 0x92, 0xE4, 0x93, 0xCE, 0x9A, 0xDB, 0x68, 0xBE, 0x55, 0x55,
  0xC0, 0x93, 0xC9, 0xA8, 0xFE, 0xFD, 0xDD, 0xDD, 0xD6, 0xDB, 0x40, 0xD6,
  0xDB, 0x80, 0xF6, 0xDB, 0xE4, 0xF6, 0xDB, 0xC9, 0xFA, 0xA0, 0x71, 0x13,
  0xC0, 0x5D, 0x24, 0x90, 0xB6, 0xDE, 0xBA, 0x66, 0x40, 0xAD, 0x5E, 0xB5,
  0x00, 0xB6, 0x46, 0xB0, 0xB5, 0xA4, 0xB0, 0xF2, 0x24, 0x4F, 0x29, 0x25,
  0x92, 0x44, 0xFE, 0x89, 0x24, 0x52, 0x58, 0xED, 0xC0 };

const GFXglyph seisobu6pt7bGlyphs[] PROGMEM = {
  {     0,   0,   0,   3,    0,    1 },   // 0x20 ' '
  {     0,   2,   7,   2,    0,   -6 },   // 0x21 '!'
  {     2,   2,   2,   3,    0,   -6 },   // 0x22 '"'
  {     3,   6,   6,   6,    0,   -6 },   // 0x23 '#'
  {     8,   4,   9,   4,    0,   -7 },   // 0x24 '$'
  {    13,   6,   5,   8,    1,   -4 },   // 0x25 '%'
  {    17,   6,   7,   6,    0,   -6 },   // 0x26 '&'
  {    23,   1,   2,   2,    0,   -6 },   // 0x27 '''
  {    24,   2,   7,   2,    0,   -6 },   // 0x28 '('
  {    26,   2,   7,   2,    0,   -6 },   // 0x29 ')'
  {    28,   2,   2,   2,    0,   -6 },   // 0x2A '*'
  {    29,   4,   3,   4,    0,   -3 },   // 0x2B '+'
  {    31,   1,   2,   1,    0,    0 },   // 0x2C ','
  {    32,   4,   1,   4,    0,   -2 },   // 0x2D '-'
  {    33,   1,   1,   1,    0,    0 },   // 0x2E '.'
  {    34,   3,   7,   3,    0,   -6 },   // 0x2F '/'
  {    37,   3,   8,   5,    1,   -7 },   // 0x30 '0'
  {    40,   2,   7,   3,    0,   -6 },   // 0x31 '1'
  {    42,   4,   8,   5,    0,   -7 },   // 0x32 '2'
  {    46,   4,   8,   4,    0,   -7 },   // 0x33 '3'
  {    50,   4,   7,   5,    0,   -6 },   // 0x34 '4'
  {    54,   4,   8,   4,    0,   -7 },   // 0x35 '5'
  {    58,   3,   7,   4,    1,   -6 },   // 0x36 '6'
  {    61,   4,   8,   4,    0,   -7 },   // 0x37 '7'
  {    65,   4,   8,   5,    0,   -7 },   // 0x38 '8'
  {    69,   4,   8,   4,    0,   -7 },   // 0x39 '9'
  {    73,   1,   3,   2,    0,   -3 },   // 0x3A ':'
  {    74,   1,   5,   2,    0,   -3 },   // 0x3B ';'
  {    75,   3,   3,   4,    0,   -3 },   // 0x3C '<'
  {    77,   4,   3,   4,    0,   -3 },   // 0x3D '='
  {    79,   3,   3,   4,    0,   -3 },   // 0x3E '>'
  {    81,   4,   7,   4,    0,   -6 },   // 0x3F '?'
  {    85,  10,   9,  10,    0,   -6 },   // 0x40 '@'
  {    97,   4,   7,   4,    0,   -6 },   // 0x41 'A'
  {   101,   3,   8,   4,    1,   -7 },   // 0x42 'B'
  {   104,   3,   8,   4,    1,   -7 },   // 0x43 'C'
  {   107,   3,   8,   5,    1,   -7 },   // 0x44 'D'
  {   110,   3,   8,   4,    1,   -7 },   // 0x45 'E'
  {   113,   3,   8,   4,    1,   -7 },   // 0x46 'F'
  {   116,   3,   8,   5,    1,   -7 },   // 0x47 'G'
  {   119,   3,   7,   5,    1,   -6 },   // 0x48 'H'
  {   122,   1,   7,   2,    1,   -6 },   // 0x49 'I'
  {   123,   3,   7,   4,    0,   -6 },   // 0x4A 'J'
  {   126,   4,   7,   5,    1,   -6 },   // 0x4B 'K'
  {   130,   2,   7,   4,    1,   -6 },   // 0x4C 'L'
  {   132,   4,   7,   6,    1,   -6 },   // 0x4D 'M'
  {   136,   3,   7,   5,    1,   -6 },   // 0x4E 'N'
  {   139,   3,   8,   5,    1,   -7 },   // 0x4F 'O'
  {   142,   3,   8,   4,    1,   -7 },   // 0x50 'P'
  {   145,   4,   8,   5,    0,   -7 },   // 0x51 'Q'
  {   149,   3,   8,   4,    1,   -7 },   // 0x52 'R'
  {   152,   4,   8,   4,    0,   -7 },   // 0x53 'S'
  {   156,   4,   8,   4,    0,   -7 },   // 0x54 'T'
  {   160,   4,   7,   5,    0,   -6 },   // 0x55 'U'
  {   164,   4,   7,   5,    0,   -6 },   // 0x56 'V'
  {   168,   7,   7,   7,    0,   -6 },   // 0x57 'W'
  {   175,   5,   7,   5,    0,   -6 },   // 0x58 'X'
  {   180,   4,   7,   5,    0,   -6 },   // 0x59 'Y'
  {   184,   4,   8,   5,    0,   -7 },   // 0x5A 'Z'
  {   188,   3,   8,   3,    0,   -7 },   // 0x5B '['
  {   191,   3,   7,   3,    0,   -6 },   // 0x5C '\'
  {   194,   2,   8,   3,    0,   -7 },   // 0x5D ']'
  {   196,   3,   1,   3,    0,   -7 },   // 0x5E '^'
  {   197,   5,   1,   6,    0,    0 },   // 0x5F '_'
  {   198,   1,   2,   2,    0,   -6 },   // 0x60 '`'
  {   199,   4,   6,   4,    0,   -5 },   // 0x61 'a'
  {   202,   4,   7,   4,    0,   -6 },   // 0x62 'b'
  {   206,   3,   6,   4,    0,   -5 },   // 0x63 'c'
  {   209,   4,   7,   4,    0,   -6 },   // 0x64 'd'
  {   213,   4,   6,   4,    0,   -5 },   // 0x65 'e'
  {   216,   3,   8,   3,    0,   -7 },   // 0x66 'f'
  {   219,   3,   8,   4,    1,   -5 },   // 0x67 'g'
  {   222,   3,   7,   4,    1,   -6 },   // 0x68 'h'
  {   225,   1,   7,   2,    1,   -6 },   // 0x69 'i'
  {   226,   2,   9,   3,    0,   -6 },   // 0x6A 'j'
  {   229,   3,   7,   4,    1,   -6 },   // 0x6B 'k'
  {   232,   1,   7,   3,    1,   -6 },   // 0x6C 'l'
  {   233,   4,   6,   6,    1,   -5 },   // 0x6D 'm'
  {   236,   3,   6,   4,    1,   -5 },   // 0x6E 'n'
  {   239,   3,   6,   4,    1,   -5 },   // 0x6F 'o'
  {   242,   3,   8,   4,    1,   -5 },   // 0x70 'p'
  {   245,   3,   8,   4,    1,   -5 },   // 0x71 'q'
  {   248,   2,   6,   3,    1,   -5 },   // 0x72 'r'
  {   250,   3,   6,   4,    0,   -5 },   // 0x73 's'
  {   253,   3,   7,   3,    0,   -6 },   // 0x74 't'
  {   256,   3,   5,   4,    1,   -4 },   // 0x75 'u'
  {   258,   4,   5,   4,    0,   -4 },   // 0x76 'v'
  {   261,   5,   5,   6,    0,   -4 },   // 0x77 'w'
  {   265,   4,   5,   4,    0,   -4 },   // 0x78 'x'
  {   268,   3,   7,   4,    0,   -4 },   // 0x79 'y'
  {   271,   4,   6,   4,    0,   -5 },   // 0x7A 'z'
  {   274,   3,  10,   4,    0,   -7 },   // 0x7B '{'
  {   278,   1,   7,   2,    1,   -6 },   // 0x7C '|'
  {   279,   3,  10,   4,    0,   -7 },   // 0x7D '}'
  {   283,   5,   2,   7,    1,   -4 } }; // 0x7E '~'

const GFXfont seisobu6pt7b PROGMEM = {
  (uint8_t  *)seisobu6pt7bBitmaps,
  (GFXglyph *)seisobu6pt7bGlyphs,
  0x20, 0x7E, 12 };

// Approx. 957 bytes
