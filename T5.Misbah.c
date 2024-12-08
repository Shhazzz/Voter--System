//MISBAH
void declare_winner() {
    //Checking total votes and displaying election winner 
    int i;
    if (candidate_count == 0) {
        printf("No candidates available to determine a winner.\n");
        return;
    }
    int max_votes = 0;
    char winner[MAX_NAME_LENGTH];
    strcpy(winner, "No winner"); // Default if no votes
 
    for (int i = 0 ; i < candidate_count ; i++) {
        if (candidates[i].votes > max_votes) {
            max_votes = candidates[i].votes;
            strcpy(winner, candidates[i].name);
        }
    }
    printf("\n--- Winner of the Election ---\n");
    if (max_votes > 0) {
        printf("The winner is %s from %s with a total of %d votes.\n", winner, candidates[i].party, max_votes);
    }
    else {
        printf("No votes have been cast.Hence winner cannot be declared.\n");
    }
}
