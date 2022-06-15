#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS  16


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
