#ifndef CRATESANDAPPLES_H_INCLUDED
#define CRATESANDAPPLES_H_INCLUDED

int cratesAndApples()
    {

    int crates = 15;
    int consume;

    printf(" \n HOW TO USE: \n"
           " Enter the integer number of boxes of apples that you want to load. \n"
           " The number of boxes to be loaded must not exceed the number of remaining boxes. \n"
           " \n EXIT: \n"
           " The 0 number of remaining crates will trigger the exit from the program \n"
           " \n EXAMPLE: \n"
           " >Enter the num of crates: 15 \n"
           " >>15 crates loaded in 1 car \n"
           " >>0 crates remaining \n"
           " >>All crates are loaded successfully! \n \n");

    while (crates != 0){

        for (int car = 1; crates > 0; car++)
        {

        printf ("%s", ">Enter the num of crates: ");
        scanf ("%d", &consume);

        while (consume > crates)
            {
            printf ("%s", ">>Enter the correct num of crates! \n");
            scanf ("%d", &consume);
            }

        crates = crates - consume;
        printf (">>%d %s %d %s", consume, "crates loaded in the", car, "car \n");
        printf(">>%d crates remaining \n \n", crates);

        }

    printf ("%s", ">>All crates are loaded successfully! \n \n");

    }

    return 0;



    }

#endif // CRATESANDAPPLES_H_INCLUDED
