// Project:     SSEM
// Entity       Global Functions
// File         globals_fns.h
// Date:        May 2021

// Units are declared here to allow forward references between
// them. HASE automatically declares them from the .edl file, but in
// sequence, only allowing backward references.

class clock;
class program;
class acc;
class test;
class control;
class acc_display;
class adder;
class subtractor;
class staticisor;
class time_bar;
class memory;
class crt_display;
class input;

int string_to_int(char* str, int length);

void int_to_string5 (int value, char* str5);

void int_to_string32 (int value, char* str32);
