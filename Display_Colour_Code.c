
#include "ColourCode_if.h"


void Display_AllPair_ColorCode(void)
{
    int majorColorIndex;
    int minorColorIndex;
    int PairNumber = 1;


    printf("| Pair No. | Major Color | Minor Color |");
    printf("\n---------------------------------------- \n");
    for(majorColorIndex = 0; majorColorIndex < numberOfMajorColors; majorColorIndex++)
    {
        for(minorColorIndex = 0; minorColorIndex < numberOfMinorColors; minorColorIndex++)
        {
           printf("   %d \t    %s\t    %s\t  \n",PairNumber++, majorColors[majorColorIndex], minorColors[minorColorIndex]);
        }
      
    }
  

}
