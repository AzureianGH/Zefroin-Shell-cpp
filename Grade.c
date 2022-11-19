#include "Grade.h"
#include <stdio.h>

void grade(float gout)
{
    
    if(gout >= 93) printf("A");
    else if(gout >= 90) printf("A-");
    else if(gout >= 87) printf("B+");
    else if(gout >= 83) printf("B");
    else if(gout >= 80) printf("B-");
    else if(gout >= 77) printf("C+");
    else if(gout >= 73) printf("C");
    else if(gout >= 70) printf("C-");
    else if(gout >= 67) printf("D+");
    else if(gout >= 63) printf("D");
    else if(gout >= 60) printf("D-");
    else if(gout < 60) printf("F");
    else printf("No letter found.");

}
