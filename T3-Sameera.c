#include <stdio.h>
int main()
{
    //declare the variables
    int choice, add_candidate, cast_vote, display_result, save_results, party, Nota,
        Indian_public_Party, National_Conference_Party, Majority_People_Party;
    while (1)
    {
        //printing the details of the voting system using printf
        printf("\n--- Voting System ---\n");
        printf("1. Add candidate\n");
        printf("2. Cast Vote\n");
        printf("3. Display candidate\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        //Use switch case for the choosing the particular party or options
        switch (choice)
        {
        case 1:
            add_candidate;
            break;
        case 2:
            cast_vote;
            while (1)
            {
                printf("\n--- Choose Party ---\n");
                printf("1. Indian Public Party\n");
                printf("2. National Conference Party\n");
                printf("3. Majority People Party\n");
                printf("4. Nota\n");
                printf("Enter your party:");
                scanf("%d", &party);
                switch (party)
                {
                case 1:
                    Indian_public_Party;
                    break;
                case 2:
                    National_Conference_Party;
                    break;
                case 3:
                    Majority_People_Party;
                    break;
                case 4:
                    Nota;
                    break;
                default:
                    printf("Invalid Party");
                    break;
                    return 0;
                }
                printf("Congrats! You have successfully casted your vote");
                break;
            case 3:
                display_result;
                break;
            case 4:
                save_results;
                printf("Exiting the system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
            }
        }
        return 0;
    }
}
