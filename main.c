#include <stdio.h>
#include <assert.h>
#include <main.h>
#include"TestNumber_To_Pair.h"
#include"TestPair_To_Number.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    Display_AllPair_ColorCode();

    return 0;
}
