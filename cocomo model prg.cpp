#include <stdio.h>
#include <math.h>


double calculateEffort(double size, double effortCoefficient, double exponent)
{
    return effortCoefficient * pow(size, exponent);
}


double calculateDevelopmentTime(double effort, double timeCoefficient, double exponent) 
{
    return timeCoefficient * pow(effort, exponent);
}

int main() 
{
   
    double size = 100;
    
   
    struct 
	{
        const char* mode;
        double effortCoefficient;
        double timeCoefficient;
        double exponent;
    } modes[] = 
	{
        {"Organic", 2.4, 2.5, 1.05},
        {"Semi-Detached", 3.0, 2.5, 1.12},
        {"Embedded", 3.6, 2.5, 1.20}
    };

    printf("Software Size (KLOC): %.2lf\n", size);

    for (int i = 0; i < sizeof(modes) / sizeof(modes[0]); i++) 
	{
        double effort = calculateEffort(size, modes[i].effortCoefficient, modes[i].exponent);
        double developmentTime = calculateDevelopmentTime(effort, modes[i].timeCoefficient, modes[i].exponent);
        
        printf("\n%s Mode:\n", modes[i].mode);
        printf("Estimated Effort (Person-Months): %.2lf\n", effort);
        printf("Estimated Development Time (Months): %.2lf\n", developmentTime);
    }

    return 0;
}
