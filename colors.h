// Christmas mode
#ifndef CUSTOM
  #if defined(CHRISTMAS)
    #define NUMCOLORS 2
    #define COLOR1 (uint32_t) 0xFF0000
    #define COLOR2 (uint32_t) 0x00FF00
  #elseif defined(AMERICAN)
    #define NUMCOLORS 3
    #define COLOR1 (uint32_t) 0xFF0000
    #define COLOR2 (uint32_t) 0xFFFFFF
    #define COLOR3 (uint32_t) 0x0000FF
  #endif
#endif

// American mode
//#define AMERICAN

// Custom mode
//#define CUSTOM
// Use bytes to express color
//#define COLOR1
