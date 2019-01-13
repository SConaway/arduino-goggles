// Christmas mode
#ifndef CUSTOM
  #if defined(CHRISTMAS)
    #warning "Christmas mode enabled"
    #define NUMCOLORS 2
    #define COLOR1 (uint32_t) 0xFF0000   // RED
    #define COLOR2 (uint32_t) 0x00FF00   // GREEN
  #else
    #if defined(AMERICAN)
      #warning "American mode enabled"
      #define NUMCOLORS 3
      #define COLOR1 (uint32_t) 0xFF0000   // RED
      #define COLOR2 (uint32_t) 0x7F7F7F   // WHITE
      #define COLOR3 (uint32_t) 0x0000FF   // BLUE
    #else
      #if defined(HALLOWEEN)
        #warning "Halloween mode enabled"
        #define NUMCOLORS 3
        #define COLOR1 (uint32_t) 0x000000   // Black
        #define COLOR2 (uint32_t) 0xFFA500   // Orange
        #define COLOR3 (uint32_t) 0xFFFFFF   // WHITE
    #endif
  #endif
#else
#warning "Custom mode enabled"
#endif

// Custom mode
//#define CUSTOM
// Use bytes to express color
//#define COLOR1
