#include "main.h"
#include "Get_ColourCode.h"
#include "Test_ColourCode.h"
#include "Display_All_pair.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    Display_AllPair_ColorCode();

    return 0;
}
