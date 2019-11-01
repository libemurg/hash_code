/*
def_of_numbers=>
{
bit [0,1],
bool[true,false],
decimal[0000,1001:[0,9]],
hec_dec[[0,9],[a,f]]
}
hexa_repre_set=>4
//4 bits 0000,1111 for hexadecimal
*/
#define _#CODE
  #if defined(_#CODE)
    #define bit
      #define 1 
      #define 0
    #define bool
      #define true  1
      #define false 0
    #define decimal
      #define 0 0000
      #define 1 0001
      #define 2 0010
      #define 3 0011
      #define 4 0100
      #define 5 0101
      #define 6 0110
      #define 7 0111
      #define 8 1000
      #define 9 1001
    #define hex_dec
      #define a 1010
      #define b 1011
      #define c 1100
      #define d 1101
      #define e 1110
      #define f 1111
  #endif
#undef _#CODE
