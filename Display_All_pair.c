#include <stdio.h>
#include "Display_All_pair.h"

void Display_AllPair_ColorCode(void)
{
	char ColorPair_Names[MAX_COLORPAIR_NAME_CHARS];
	int Pair_Number;

	printf("\nAll pair color code with PairNumber, MajorColor & MinorColor\n");
	
	for (Pair_Number = 1; Pair_Number <= MAX_PAIR_NUMBER; Pair_Number++)
	{
		ColorPair colorPair = GetColorFromPairNumber(Pair_Number);
		ColorPairToString(&colorPair, ColorPair_Names);
		printf("%d %s\n", Pair_Number, ColorPair_Names);
	}
}