// Write a program to Create Ticket Booking System.

#include <stdio.h>

int main()
{
    int totalSeats = 50;      // Total number of seats
    int bookedSeats = 0;      // Number of booked seats
    int choice, seats;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Book ticket

                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if(bookedSeats + seats <= totalSeats)
                {
                    bookedSeats = bookedSeats + seats;
                    printf("Ticket Booked Successfully.\n");
                }
                else
                {
                    printf("Seats Not Available.\n");
                }

                break;

            case 2:
                // Cancel ticket

                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if(seats <= bookedSeats)
                {
                    bookedSeats = bookedSeats - seats;
                    printf("Ticket Cancelled Successfully.\n");
                }
                else
                {
                    printf("Invalid Number of Seats.\n");
                }

                break;

            case 3:
                // Display seat information

                printf("\nTotal Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", totalSeats - bookedSeats);

                break;

            case 4:
                // Exit program

                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}