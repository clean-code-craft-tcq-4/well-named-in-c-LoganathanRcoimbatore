#include <stdio.h>
#include"main.h"
#include "Display_All_pair.h"

void Display_AllPair_ColorCode(void)
{
    int MajorColor_Index;
    int MinorColor_Index;
    int Pair_Number = 1;

    printf("\nAll pair Color Codes Reference manual \n");
    printf("\n");
    printf("| Pair No. | Major Color | Minor Color |");
    printf("\n");
    for(MajorColor_Index = 0; MajorColor_Index < numberOfMajorColors; MajorColor_Index++)
    {
        for(MinorColor_Index = 0; MinorColor_Index < numberOfMinorColors; MinorColor_Index++)
        {
            printf("|   %d \t  |  %s\t|  %s\t|\n",Pair_Number++, majorColors[MajorColor_Index], minorColors[MinorColor_Index]);
        }
        printf("\n");
    }
    
}
