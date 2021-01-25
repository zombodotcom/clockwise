#include <Arduino.h>
#include <gfxfont.h>


const uint8_t minute7pt7bBitmaps[] PROGMEM = {
  0x00, 0x49, 0x24, 0x2A, 0x55, 0xA0, 0x51, 0x4F, 0xD4, 0x5D, 0x45, 0x00, 
  0x13, 0xA7, 0x27, 0x0E, 0x73, 0x70, 0x80, 0x60, 0x4A, 0x26, 0x0D, 0x01, 
  0x30, 0xA4, 0x52, 0x46, 0x72, 0x49, 0x14, 0x7A, 0x49, 0x99, 0x58, 0x2A, 
  0x49, 0x24, 0x44, 0x88, 0x92, 0x49, 0x50, 0x5F, 0x7F, 0x50, 0x22, 0xE2, 
  0x60, 0xF0, 0x80, 0x11, 0x11, 0x24, 0x48, 0x74, 0x63, 0x18, 0xC6, 0x31, 
  0x70, 0x00, 0x59, 0x24, 0x92, 0xE0, 0x74, 0x42, 0x11, 0x11, 0x10, 0xF8, 
  0x00, 0x74, 0x42, 0x60, 0x84, 0x31, 0x70, 0x00, 0x19, 0x99, 0x9F, 0x11, 
  0x10, 0x7C, 0x21, 0xE0, 0x84, 0x31, 0x70, 0x00, 0x74, 0x61, 0xE8, 0xC6, 
  0x31, 0x70, 0x00, 0xF0, 0x42, 0x11, 0x10, 0x84, 0x20, 0x00, 0x74, 0x63, 
  0x17, 0x46, 0x31, 0x70, 0x00, 0x74, 0x63, 0x17, 0x84, 0x31, 0x70, 0x00, 
  0x88, 0x40, 0x58, 0x16, 0xE1, 0xF0, 0xF0, 0xC3, 0x3C, 0x79, 0x91, 0x20, 
  0x52, 0x3C, 0x42, 0x99, 0xA5, 0xA5, 0xA5, 0x9A, 0x40, 0x3E, 0x31, 0x28, 
  0x61, 0xFE, 0x18, 0x61, 0x84, 0x00, 0x7A, 0x18, 0x61, 0xFA, 0x18, 0x61, 
  0x78, 0x00, 0x3C, 0x86, 0x04, 0x08, 0x10, 0x20, 0x21, 0x3C, 0x00, 0x79, 
  0x0A, 0x0C, 0x18, 0x30, 0x60, 0xC2, 0x78, 0x00, 0x7E, 0x08, 0x20, 0xFA, 
  0x08, 0x20, 0x7C, 0x00, 0x7E, 0x08, 0x20, 0xFA, 0x08, 0x20, 0x80, 0x00, 
  0x7D, 0x06, 0x04, 0x09, 0xD0, 0x60, 0xC1, 0x7C, 0x00, 0x86, 0x18, 0x7F, 
  0x86, 0x18, 0x61, 0x84, 0x00, 0xE9, 0x24, 0x92, 0xE0, 0x38, 0x84, 0x21, 
  0x0A, 0x52, 0x60, 0x00, 0x86, 0x18, 0xA4, 0xE2, 0x48, 0xA1, 0x84, 0x00, 
  0x84, 0x21, 0x08, 0x42, 0x10, 0x78, 0x00, 0x76, 0x89, 0x89, 0x89, 0x89, 
  0x81, 0x81, 0x81, 0x81, 0x43, 0x46, 0x8C, 0x99, 0x32, 0x62, 0xC5, 0x84, 
  0x00, 0x3C, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3C, 0x7A, 0x18, 
  0x61, 0xFA, 0x08, 0x20, 0x80, 0x00, 0x3C, 0x21, 0x20, 0x50, 0x28, 0x14, 
  0x29, 0x08, 0x7B, 0x79, 0x0A, 0x14, 0x2F, 0x90, 0xA1, 0x42, 0x86, 0x00, 
  0x7D, 0x06, 0x03, 0xE0, 0x20, 0x60, 0xC1, 0x7C, 0x00, 0xFE, 0x20, 0x40, 
  0x81, 0x02, 0x04, 0x08, 0x10, 0x00, 0x83, 0x06, 0x0C, 0x18, 0x30, 0x60, 
  0xA2, 0x38, 0x00, 0x83, 0x06, 0x0C, 0x18, 0x28, 0x91, 0x14, 0x10, 0x00, 
  0x81, 0x81, 0x81, 0x81, 0x89, 0x89, 0x89, 0x89, 0x76, 0x86, 0x14, 0x8C, 
  0x4A, 0x18, 0x61, 0x84, 0x00, 0x83, 0x06, 0x0A, 0x22, 0x82, 0x04, 0x08, 
  0x10, 0x00, 0xF8, 0x10, 0x84, 0x21, 0x08, 0x20, 0x7C, 0x00, 0x72, 0x49, 
  0x24, 0x8C, 0x88, 0x44, 0x21, 0x11, 0xC4, 0x92, 0x49, 0x38, 0x25, 0x90, 
  0xFC, 0x90, 0x72, 0x28, 0xA2, 0x89, 0xD0, 0x84, 0x3D, 0x18, 0xC6, 0x2E, 
  0x74, 0x61, 0x08, 0xB8, 0x00, 0x08, 0x5F, 0x18, 0xC6, 0x2E, 0x74, 0x7D, 
  0x08, 0xB8, 0x00, 0x18, 0x92, 0x1C, 0x20, 0x82, 0x08, 0xA1, 0x00, 0x74, 
  0x63, 0x17, 0x84, 0x31, 0x70, 0x00, 0x84, 0x21, 0xE8, 0xC6, 0x31, 0xBF, 
  0x20, 0x22, 0x22, 0x22, 0xA4, 0x84, 0x23, 0x2E, 0x4A, 0x31, 0x92, 0x49, 
  0x2A, 0x76, 0x89, 0x89, 0x89, 0x89, 0x89, 0x74, 0x63, 0x18, 0xC4, 0x00, 
  0x74, 0x63, 0x18, 0xB8, 0x00, 0x74, 0x63, 0x18, 0xFA, 0x10, 0x80, 0x00, 
  0x74, 0x63, 0x18, 0xBC, 0x21, 0x08, 0x00, 0xBC, 0x88, 0x88, 0x74, 0x1C, 
  0x18, 0xB8, 0x00, 0x44, 0xF4, 0x44, 0x43, 0x8C, 0x63, 0x19, 0xB4, 0x00, 
  0x8C, 0x62, 0xA5, 0x10, 0x00, 0x89, 0x89, 0x89, 0x89, 0x89, 0x76, 0x8C, 
  0x5D, 0x18, 0xC4, 0x00, 0x8C, 0x63, 0x17, 0x84, 0x31, 0x70, 0x00, 0xF0, 
  0x44, 0x44, 0x7C, 0x00, 0x29, 0x2C, 0x92, 0x44, 0xFF, 0xF0, 0x89, 0x26, 
  0x92, 0x50, 0x55, 0x00
};

const GFXglyph minute7pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   4,    0,    0 }   // ' '
 ,{     1,   3,   8,   4,    0,   -7 }   // '!'
 ,{     4,   4,   3,   4,    0,   -7 }   // '"'
 ,{     6,   6,   7,   7,    0,   -7 }   // '#'
 ,{    12,   5,  10,   6,    0,   -8 }   // '$'
 ,{    19,   9,   8,  10,    0,   -7 }   // '%'
 ,{    28,   6,   8,   7,    0,   -7 }   // '&'
 ,{    34,   2,   3,   3,    0,   -7 }   // '''
 ,{    35,   3,  10,   4,    0,   -7 }   // '('
 ,{    39,   3,  10,   4,    0,   -7 }   // ')'
 ,{    43,   4,   5,   5,    0,   -8 }   // '*'
 ,{    46,   4,   4,   6,    1,   -5 }   // '+'
 ,{    48,   2,   2,   3,    0,    0 }   // ','
 ,{    49,   4,   1,   4,    0,   -3 }   // '-'
 ,{    50,   1,   1,   2,    0,    0 }   // '.'
 ,{    51,   4,   8,   5,    0,   -7 }   // '/'
 ,{    55,   5,   9,   7,    1,   -8 }   // '0'
 ,{    62,   3,   9,   5,    1,   -8 }   // '1'
 ,{    66,   5,   9,   7,    1,   -8 }   // '2'
 ,{    73,   5,   9,   7,    1,   -8 }   // '3'
 ,{    80,   4,   9,   6,    1,   -8 }   // '4'
 ,{    85,   5,   9,   7,    1,   -8 }   // '5'
 ,{    92,   5,   9,   7,    1,   -8 }   // '6'
 ,{    99,   5,   9,   7,    1,   -8 }   // '7'
 ,{   106,   5,   9,   7,    1,   -8 }   // '8'
 ,{   113,   5,   9,   7,    1,   -8 }   // '9'
 ,{   120,   1,   5,   2,    0,   -4 }   // ':'
 ,{   121,   2,   7,   2,   -1,   -4 }   // ';'
 ,{   123,   4,   4,   5,    0,   -5 }   // '<'
 ,{   125,   4,   3,   5,    0,   -5 }   // '='
 ,{   127,   4,   4,   5,    0,   -5 }   // '>'
 ,{   129,   4,   8,   5,    0,   -7 }   // '?'
 ,{   133,   8,   9,  10,    1,   -7 }   // '@'
 ,{   142,   6,   9,   8,    1,   -8 }   // 'A'
 ,{   150,   6,   9,   8,    1,   -8 }   // 'B'
 ,{   158,   7,   9,   9,    1,   -8 }   // 'C'
 ,{   167,   7,   9,   9,    1,   -8 }   // 'D'
 ,{   176,   6,   9,   8,    1,   -8 }   // 'E'
 ,{   184,   6,   9,   8,    1,   -8 }   // 'F'
 ,{   192,   7,   9,   8,    1,   -8 }   // 'G'
 ,{   201,   6,   9,   8,    1,   -8 }   // 'H'
 ,{   209,   3,   9,   5,    1,   -8 }   // 'I'
 ,{   213,   5,   9,   6,    1,   -8 }   // 'J'
 ,{   220,   6,   9,   8,    1,   -8 }   // 'K'
 ,{   228,   5,   9,   7,    1,   -8 }   // 'L'
 ,{   235,   8,   9,  10,    1,   -8 }   // 'M'
 ,{   244,   7,   9,   9,    1,   -8 }   // 'N'
 ,{   253,   8,   9,  10,    1,   -8 }   // 'O'
 ,{   262,   6,   9,   8,    1,   -8 }   // 'P'
 ,{   270,   9,   8,  10,    1,   -7 }   // 'Q'
 ,{   279,   7,   9,   8,    1,   -8 }   // 'R'
 ,{   288,   7,   9,   9,    1,   -8 }   // 'S'
 ,{   297,   7,   9,   9,    1,   -8 }   // 'T'
 ,{   306,   7,   9,   9,    1,   -8 }   // 'U'
 ,{   315,   7,   9,   9,    1,   -8 }   // 'V'
 ,{   324,   8,   9,  10,    1,   -8 }   // 'W'
 ,{   333,   6,   9,   8,    1,   -8 }   // 'X'
 ,{   341,   7,   9,   9,    1,   -8 }   // 'Y'
 ,{   350,   6,   9,   8,    1,   -8 }   // 'Z'
 ,{   358,   3,  10,   4,    0,   -7 }   // '['
 ,{   362,   4,   8,   5,    0,   -7 }   // '\'
 ,{   366,   3,  10,   4,    0,   -7 }   // ']'
 ,{   370,   4,   3,   5,    0,   -7 }   // '^'
 ,{   372,   6,   1,   7,    0,    2 }   // '_'
 ,{   373,   2,   2,   4,    1,   -7 }   // '`'
 ,{   374,   6,   6,   7,    1,   -5 }   // 'a'
 ,{   379,   5,   8,   7,    1,   -7 }   // 'b'
 ,{   384,   5,   6,   7,    1,   -5 }   // 'c'
 ,{   389,   5,   8,   7,    1,   -7 }   // 'd'
 ,{   394,   5,   6,   7,    1,   -5 }   // 'e'
 ,{   399,   6,  10,   6,    0,   -6 }   // 'f'
 ,{   407,   5,   9,   6,    1,   -5 }   // 'g'
 ,{   414,   5,   8,   7,    1,   -7 }   // 'h'
 ,{   419,   1,   8,   3,    1,   -7 }   // 'i'
 ,{   420,   4,  10,   4,    0,   -7 }   // 'j'
 ,{   425,   5,   8,   7,    1,   -7 }   // 'k'
 ,{   430,   3,   8,   4,    0,   -7 }   // 'l'
 ,{   433,   8,   6,  10,    1,   -5 }   // 'm'
 ,{   439,   5,   6,   7,    1,   -5 }   // 'n'
 ,{   444,   5,   6,   7,    1,   -5 }   // 'o'
 ,{   449,   5,   9,   7,    1,   -5 }   // 'p'
 ,{   456,   5,   9,   7,    1,   -5 }   // 'q'
 ,{   463,   4,   6,   6,    1,   -5 }   // 'r'
 ,{   466,   5,   6,   7,    1,   -5 }   // 's'
 ,{   471,   4,   8,   5,    0,   -7 }   // 't'
 ,{   475,   5,   6,   7,    1,   -5 }   // 'u'
 ,{   480,   5,   6,   7,    1,   -5 }   // 'v'
 ,{   485,   8,   6,  10,    1,   -5 }   // 'w'
 ,{   491,   5,   6,   7,    1,   -5 }   // 'x'
 ,{   496,   5,   9,   7,    1,   -5 }   // 'y'
 ,{   503,   5,   6,   7,    1,   -5 }   // 'z'
 ,{   508,   3,  10,   4,    0,   -7 }   // '{'
 ,{   512,   1,  12,   3,    1,   -8 }   // '|'
 ,{   514,   3,  10,   4,    0,   -7 }   // '}'
 ,{   518,   3,   4,   6,    0,   -7 }   // '~'
};

const GFXfont minute7pt7b PROGMEM = {
  (uint8_t  *)minute7pt7bBitmaps,  
  (GFXglyph *)minute7pt7bGlyphs, 0x20, 0x7e,   14 };
