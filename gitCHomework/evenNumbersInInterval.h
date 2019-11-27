#ifndef EVENNUMBERSININTERVAL_H_INCLUDED
#define EVENNUMBERSININTERVAL_H_INCLUDED

int evenNumbersInInterval()
    {

    int f_num;
    int s_num;

     printf(" \n HOW TO USE: \n"
           " Enter a range of numbers like range of 2 and 3 be range [2,3] \n"
           " The interval is entering in the standard form: [1,6] not [6,1] \n"
           " \n EXIT: \n"
           " Range of [0,0] will trigger the exit from the program \n"
           " Numbers in range must be integer \n"
           " \n EXAMPLE: \n"
           " >Enter range: 1 6 \n \n");

    while (true){
        int sum = 0;

        printf (">Enter range: "), scanf ("%d %d", &f_num, &s_num);

        if (f_num == 0 && s_num == 0){
            break;
        }

        else
        {

        for (int num = f_num; num <= s_num; num++)
            {
            if ( (num % 2) == 0 )
                {
                sum = sum + num;
                }
            }
        }

        printf (">>Sum : %d \n \n", sum, "\n");
    }

    return 0;

    }



#endif // EVENNUMBERSININTERVAL_H_INCLUDED
