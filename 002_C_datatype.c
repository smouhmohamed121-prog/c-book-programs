#include <stdio.h>
#include <limits.h>

int main() {
    printf("long min: %lld\n", LONG_LONG_MIN);
    printf("long max: %lld\n", LONG_LONG_MAX);
    return 0;
}
/*
==========================================================
|               C DATA TYPES AND THEIR RANGES            |
==========================================================

Integer Types (Typical sizes on 32/64-bit systems):

  signed char           [-2^7; 2^7)          → [-128; 128)
  unsigned char         [0; 2^8)             → [0; 256)

  short int             [-2^15; 2^15)        → [-32,768; 32,768)
  unsigned short int    [0; 2^16)            → [0; 65,536)

  int                   [-2^31; 2^31)        → [-2,147,483,648; 2,147,483,648)
  unsigned int          [0; 2^32)            → [0; 4,294,967,296)

  long int              [-2^31; 2^31)        → [-2,147,483,648; 2,147,483,648)
  unsigned long int     [0; 2^32)            → [0; 4,294,967,296)

  long long int         [-2^63; 2^63)        → [-9,223,372,036,854,775,808; 9,223,372,036,854,775,808)
  unsigned long long    [0; 2^64)            → [0; 18,446,744,073,709,551,616)

Floating Point Types (Approximate IEEE 754 Ranges):

  float                 ~ ±1.2×10^-38 to ±3.4×10^38   (6-7 decimal digits precision)
  double                ~ ±2.3×10^-308 to ±1.7×10^308 (15-16 decimal digits precision)
  long double           ~ ±3.4×10^-4932 to ±1.1×10^4932 (Precision varies by compiler/platform)

Notes:
  - Exact sizes are implementation-defined.
  - Use sizeof(type) to check sizes on your system.
  - Signed types have ranges of [-2^(n-1); 2^(n-1))
  - Unsigned types have ranges of [0; 2^n)

==========================================================
*/

