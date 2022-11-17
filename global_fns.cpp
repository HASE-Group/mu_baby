#include "global_fns.h"
// global functions implementation

int string_to_int(char* str, int length)
{
  int value = 0;
  for (int i = (length - 1); i >= 0; i --)
    {
      int bit_value = 0;
      if (str[i] == '1')
    {bit_value = 1;}
      value = value | bit_value;
       if (i != 0)
	 {value = value <<1;}

    }
return value;
}

void int_to_string5 (int value, char* str5)
{
  strcpy(str5, "00000");
  for (int i = 0; i < 5; i ++)
    {
      int bit_value = ((value >> i) & 1);
      char char_bit = '0';
      if (bit_value == 1)
	{char_bit = '1';}
	str5[i] = char_bit;
    }
}

void int_to_string32 (int value, char* str32)
{
  strcpy(str32, "00000000000000000000000000000000");
  for (int i = 0; i < 32; i ++)
    {
      int bit_value = ((value >> i) & 1);
      char char_bit = '0';
      if (bit_value == 1)
        {char_bit = '1';}
      str32[i] = char_bit;
    }
}

