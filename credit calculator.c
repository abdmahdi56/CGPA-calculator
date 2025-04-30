#include <stdio.h>

int main() {
    int n;

    printf("Welcome to the CGPA Calculator!\n");
    printf("-----------------------------------\n");
    printf("How many subjects do you want to calculate CGPA for? ");
    scanf("%d", &n);

    int mark[n];
    float credit[n];
    float gradesum = 0, creditsum = 0;

    printf("\n Great! Now enter the mark and credit for each subject.\n\n");

    for (int i = 0; i < n; i++) {
        printf(" Subject %d:\n", i + 1);
        printf("   Enter mark (out of 100): ");
        scanf("%d", &mark[i]);
        printf("   Enter credit (e.g., 3 or 1.5): ");
        scanf("%f", &credit[i]);

        creditsum += credit[i];

        // Convert mark to grade point
        if (mark[i] >= 80 && mark[i] <= 100)
            gradesum += credit[i] * 4.00;
        else if (mark[i] >= 75)
            gradesum += credit[i] * 3.75;
        else if (mark[i] >= 70)
            gradesum += credit[i] * 3.50;
        else if (mark[i] >= 65)
            gradesum += credit[i] * 3.25;
        else if (mark[i] >= 60)
            gradesum += credit[i] * 3.00;
        else if (mark[i] >= 55)
            gradesum += credit[i] * 2.75;
        else if (mark[i] >= 50)
            gradesum += credit[i] * 2.50;
        else if (mark[i] >= 45)
            gradesum += credit[i] * 2.25;
        else if (mark[i] >= 40)
            gradesum += credit[i] * 2.00;
        else
            gradesum += credit[i] * 0.00;

        printf("    Data recorded for Subject %d!\n\n", i + 1);
    }

    float cgpa = gradesum / creditsum;

    printf(" Calculating your CGPA...\n");
    printf("------------------------------\n");
    printf(" Your CGPA is: %.2f\n", cgpa);
    printf(" Thank you for using the CGPA Calculator. \n");

    return 0;
}
