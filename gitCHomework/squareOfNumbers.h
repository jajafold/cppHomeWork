#ifndef SQUAREOFNUMBERS_H_INCLUDED
#define SQUAREOFNUMBERS_H_INCLUDED

int squareOfNumber()
    {

    int in_num = 0;

    printf("  \n HOW TO USE: \n"
           " Enter the desired number, positive or negative, without periods, commas, or other characters. \n"
           " \n EXIT: \n"
           " The number 0 will trigger the exit from the program \n "
           " \n EXAMPLE: \n"
           " >Enter num : 5 \n"
           " >>Result : 25 \n \n");

    do
        {
        printf (">Enter num: ");
        scanf ("%d", &in_num);
        int result = in_num * in_num;
        printf (">>Result : %d %s \n \n", result, "\n");
        }
    while (in_num != 0);

    return 0;
    }

#endif // SQUAREOFNUMBERS_H_INCLUDED
