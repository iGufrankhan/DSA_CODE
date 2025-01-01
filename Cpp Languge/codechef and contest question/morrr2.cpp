#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count number of ways Suneet wins the game
int countWaysSuneetWins(vector<int>& cards) {
    int totalWays = 0;
    
    // There are 10 cards with values 1 to 10
    int n = 10;

    // Iterate over all combinations of 4 different cards out of 10
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                for (int l = k + 1; l < 4; l++) {
                    // Current combination of cards
                    vector<int> combination = {cards[i], cards[j], cards[k], cards[l]};
                    
                    // Generate all permutations of the combination
                    do {
                        vector<int> suneet = {combination[0], combination[1]};
                        vector<int> slavic = {combination[2], combination[3]};
                        
                        // Try all possible orders of flipping cards
                        for (int a = 0; a < 2; a++) {
                            for (int b = 0; b < 2; b++) {
                                if (a == b) continue;
                                
                                // Determine who wins each round
                                int suneetWins = 0;
                                int slavicWins = 0;
                                
                                // Round 1
                                if (suneet[a] > slavic[b]) suneetWins++;
                                else if (suneet[a] < slavic[b]) slavicWins++;
                                
                                // Round 2
                                if (suneet[1 - a] > slavic[1 - b]) suneetWins++;
                                else if (suneet[1 - a] < slavic[1 - b]) slavicWins++;
                                
                                // Check if Suneet wins both rounds
                                if (suneetWins == 2) {
                                    totalWays++;
                                }
                            }
                        }
                    } while (next_permutation(combination.begin(), combination.end()));
                }
            }
        }
    }
    
    return totalWays;
}

int main() {
    // Cards values from 1 to 10
    vector<int> cards = {3,8,2,6};
    
    int result = countWaysSuneetWins(cards);
    cout << "Number of ways Suneet can win the game: " << result << endl;
    
    return 0;
}
