#ifndef GYMCLIENTS_H_INCLUDED
#define GYMCLIENTS_H_INCLUDED

int gymClients()
    {

    int age;
    int clients_num;
    int age_sum;
    int lower_age;
    int higher_age;
    double mean;

    printf(" \n HOW TO USE: \n"
           " First, enter the number of visitors to the gym without periods, commas, or other characters. \n"
           " Then alternately enter the age of each of them \n"
           " \n EXIT: \n"
           " The 0 number of visitors will trigger the exit from the program \n"
           " Numbers of clients and their age must be integer \n"
           " \n EXAMPLE: \n"
           " >Number of clients : 3 \n"
           " >Client's age : 25 \n"
           " >Client's age : 41 \n"
           " >Client's age : 32 \n \n");

    while (clients_num != 0){

        printf ("%s", ">Number of clients: ");
        scanf ("%d", &clients_num);

        if (clients_num == 0){
            break;
        }

        std::vector <int> clients;

        for (int clients_num_buf = clients_num; clients_num_buf > 0; clients_num_buf--)
            {
            printf ("%s", ">Client's age: ");
            scanf ("%d", &age);
            clients.push_back (age);
            }

        age_sum = clients[0];
        lower_age = clients[0];
        higher_age = clients[0];

        /*
        for (int index = 0; index < clients_num; index++){
            printf("%d", clients[index]);
        }
        */

        for (int index = 1; index < clients_num; index++)
            {

            if (clients[index] < lower_age)
                {
                lower_age = clients[index];
                }

            if (clients[index] > higher_age)
                {
                higher_age = clients[index];
                }

            age_sum = age_sum + clients[index];
            }

        mean = age_sum * 1.0 / clients_num * 1.0;

        printf (">>Lower: %d Higher: %d Mean: %.3f \n \n", lower_age, higher_age, mean, "\n");
    }

    return 0;

    }

#endif // GYMCLIENTS_H_INCLUDED
