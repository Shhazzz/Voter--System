#include<stdio.h>

//function prototypes
//void add_candidate();
//void cast_vote();
//void display_reslut();
//void save_candidates();

int main() {
    int choice, Vcount1=0,Vcount2=0,Vcount3=0,Vcount4=0,mostV;
    char name[30],gender,address[50];
    int age,ID,contact_no[10];
    int a,i;




        printf("\n\t\t---STATE ELECTION---\n");
        printf("1.Candidates details\n");
        printf("2.Cast Vote\n");
        printf("3.Display Results\n");
        printf("4.Exit\n");

        printf("Enter your name: ");
        scanf(" %s" , &name);
        printf("Enter your gender: ");
        scanf(" %s", &gender);
        printf("Enter your address: ");
        scanf(" %s", &address);
        printf("Enter your age: \n ");
        scanf(" %d", &age);
        printf("Enter your contact no.: \n  ");
        scanf(" %d", &contact_no );

    // Print party options

    printf("Choose a party:\n");
    printf("1. Indian Public Party\n");
    printf("2. National Conference Party\n");
    printf("3. Majority People's Party\n");
    printf("4. NOTA \n");

    // Loop until valid input is provided
    while (1) {
        // Prompt user for input
        printf("Enter your choice (1-4): ");

        // Check if input is a number
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            // Clear invalid input from the buffer
            while (getchar() != '\n');
        } else if (choice < 1 || choice > 4) {
            // Validate range of input
            printf("Invalid choice! Please select a number between 1 and 4.\n");
        } else {
            // Valid input
            printf("You chose option %d.\n", choice);
            break;
        }
    }


    return 0;
    } // Close the main function



