#include <stdio.h>

int main() {
    int totalPopulation = 80000;
    int menPercentage = 52;
    int totalLiteracyPercentage = 48;
    int literateMenPercentage = 35;

    int totalMen = (menPercentage * totalPopulation) / 100;
    int totalWomen = totalPopulation - totalMen;

    int totalLiterateMen = (literateMenPercentage * totalPopulation) / 100;
    int totalLiterateWomen = (totalLiteracyPercentage * totalPopulation) / 100 - totalLiterateMen;

    int totalIlliterateMen = totalMen - totalLiterateMen;
    int totalIlliterateWomen = totalWomen - totalLiterateWomen;

    printf("Total number of illiterate men: %d\n", totalIlliterateMen);
    printf("Total number of illiterate women: %d\n", totalIlliterateWomen);

}
