#ifndef BUILDINGTRIANGLE_H_INCLUDED
#define BUILDINGTRIANGLE_H_INCLUDED

int buildingTriangle()
    {

    char ch = '^';
    int height = 0;
    int count = 0;
    bool FILLED = true;

    printf(" \n HOW TO USE: \n"
           " Enter the height of the triangle in characters without periods, commas, or other characters. \n"
           " \n EXIT: \n"
           " The 0 height will trigger the exit from the program \n"
           " Height must be integer \n"
           " \n EXAMPLE: \n"
           " >Height: 10 \n \n");

    while (true){

        printf (">Height : ");
        scanf ("%d", &height);

        if (height == 0){
            break;
        }

        if (FILLED)
        {

        for (int i = 0; i < height; i++)
            {

            for (int j = 1; j < height - i; j++)
                {
                printf (" ");
                }

            for (int j = height - 2 * i; j <= height; j++)
                {
                printf ("%c", ch);
                }

            printf ("\n");
            }
        }

        else
            {

            for (int i = 0; i < height; i++)
                {

                for (int j = 1; j < height - i; j++)
                    {
                    printf (" ");
                    }

                for (int j = height - 2 * i; j <= height; j++)
                    {

                    if (i == height - 1)
                        {

                        for (count = 0; count < i * 2 + 1; count++)
                            {
                            printf ("%c", ch);
                            }

                        break;
                        }

                    if (j == height - 2 * i || j == height - 1)
                        {
                        printf ("%c", ch);
                        }

                    if (j > height - 2 * i || j < height - 1)
                        {
                        printf (" ");
                        }
                    }

                printf ("\n");
                }
            }

    }

    return 0;

    }

#endif // BUILDINGTRIANGLE_H_INCLUDED
