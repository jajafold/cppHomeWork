#include <cstdio>
#include <string>
#include <vector>

#include "squareOfNumbers.h"
#include "gymClients.h"
#include "cratesAndApples.h"
#include "evenNumbersInInterval.h"
#include "characteristicsOfNumbers.h"
#include "buildingTriangle.h"
#include "structs.h"

using namespace std;

int main()
    {

    bool exit = false;
    int choice;

    printf ("MENU : \n"
            "1 -> Square of a number \n"
            "2 -> Number and average age of gym visitors \n"
            "3 -> Crates and Apples \n"
            "4 -> Number of even numbers in the interval \n"
            "5 -> Number, sum and arithmetic mean of numbers \n"
            "6 -> Building a triangle from symbols \n"
            "0 -> EXIT \n \n");


    while (exit == false)
        {

        printf ("\n>Choice : ");
        scanf ("%d", &choice);

        switch (choice)
            {

            case 1:
                while (true)
                    {

                    if (!squareOfNumber()){
                        break;
                    }

                    }

                break;

            case 2:
                while (true)
                    {

                    if (!gymClients()){
                        break;
                    }

                    }

                break;

            case 3:
                while (true)
                    {

                    if (!cratesAndApples()){
                        break;
                    }

                    }

                break;

            case 4:
                while (true)
                    {

                    if (!evenNumbersInInterval()){
                        break;
                    }

                    }

                break;

            case 5:
                while (true)
                    {

                    if (!characteristicsOfNumbers()){
                        break;
                    }

                    }

                break;


            case 6:
                while (true)
                    {

                    if (!buildingTriangle()){
                        break;
                    }

                    }

                break;

            case 0:
                printf (">>PROGRAMM PROCESS HAS CONCLUDED \n");
                exit = true;
                break;

            default:
                printf (">>INCORRECT CHOICE \n");


            }
        }


    }


