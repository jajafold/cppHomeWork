#ifndef CHARACTERISTICSOFNUMBERS_H_INCLUDED
#define CHARACTERISTICSOFNUMBERS_H_INCLUDED

int characteristicsOfNumbers()
    {

    int num;
    int sum = 0;
    int n_count = 0;

    printf(" \n HOW TO USE: \n"
           " The numbers are entered one by one without periods, commas, or other characters. \n"
           " The input is not limited. Input is terminated by 0 \n"
           " \n EXIT: \n"
           " Exit is performed at the end of the program \n"
           " Nums must be integer \n"
           " \n EXAMPLE: \n"
           " >Enter the num: 3 \n"
           " >Enter the num: 9 \n"
           " >Enter the num: 11 \n"
           " >Enter the num: 0 \n \n");

    while (num != 0)
        {

        printf ("%s", ">Enter the num: ");
        scanf ("%d", &num);

        if (num == 0)
            {
            break;
            }

        n_count++;
        sum = sum + num;

        }

    double mean = sum * 1.0 / n_count * 1.0;

    printf (">>Sum : %d Count : %d Mean : %.3f \n \n", sum, n_count, mean, "\n");
    return 0;

    }

#endif // CHARACTERISTICSOFNUMBERS_H_INCLUDED
