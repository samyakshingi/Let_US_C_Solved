#include <stdio.h>

int main() {
    int matchsticks = 21;
    int player_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("There are 21 matchsticks. You can pick 1, 2, 3, or 4 matchsticks on your turn.\n");
    printf("The player forced to pick the last matchstick loses.\n");

    while (matchsticks > 1) {
        
        printf("Your turn: How many matchsticks do you want to pick (1-4)? ");
        scanf("%d", &player_pick);

       
        if (player_pick < 1 || player_pick > 4) {
            printf("Invalid choice. You must pick 1, 2, 3, or 4 matchsticks.\n");
            continue;
        }

       
        matchsticks -= player_pick;
        printf("You picked %d matchstick(s). Remaining matchsticks: %d\n", player_pick, matchsticks);

        
        if (matchsticks == 1) {
            printf("Only one matchstick left. You lose!\n");
            break;
        }

       
        computer_pick = 5 - player_pick; 
        matchsticks -= computer_pick;
        printf("Computer picked %d matchstick(s). Remaining matchsticks: %d\n", computer_pick, matchsticks);

        
        if (matchsticks == 1) {
            printf("Only one matchstick left. Computer loses (This should not happen).\n");
            break;
        }
    }

    return 0;
}
