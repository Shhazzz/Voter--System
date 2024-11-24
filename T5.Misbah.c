// Find the winner
    int winnerIndex = findWinner(votes, numCandidates);

    // Output the results
    printf("\nVoting Results:\n");
    for (int i = 0; i < numCandidates; i++) {
        printf("Candidate %d: %d votes\n", num, votes[i]);
    }

    printf("\nThe winner is Candidate %d with %d votes.\n", winnerIndex + 1, votes[winnerIndex]);

    return 0
