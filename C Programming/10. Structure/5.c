// 5. Cricket Structure - Array of Structures

#include <stdio.h>

struct Cricket {
    char name[50];
    char team[50];
    float average;
    int highest_score;
};

void acceptDetails(struct Cricket players[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Cricketer Name: ");
        scanf(" %[^\n]", players[i].name);
        printf("Enter Team Name: ");
        scanf(" %[^\n]", players[i].team);
        printf("Enter Batting Average: ");
        scanf("%f", &players[i].average);
        printf("Enter Highest Score: ");
        scanf("%d", &players[i].highest_score);
    }
}

void displayPlayers(struct Cricket players[], int n) {
    printf("\nCricket Player Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Team: %s, Average: %.2f, Highest Score: %d\n",
               players[i].name, players[i].team, players[i].average, players[i].highest_score);
    }
}

int main() {
    int n = 5; // Fixed for 5 players
    struct Cricket players[n];

    acceptDetails(players, n);
    displayPlayers(players, n);

    return 0;
}
