#include <iostream>
#include <deque>

int main() {
    int N;
    std::cin >> N;
    
    std::deque<int> enemies;
    
    // Read health of each enemy and add to the queue
    for (int i = 0; i < N; ++i) {
        int health;
        std::cin >> health;
        enemies.push_back(health); // Use push_back to add to the end of the deque
    }
    
    int T = 0;
    
    // Simulate the game
    while (!enemies.empty()) {
        T++;
     
        int front = enemies.front();
        enemies.pop_front();
        
        // Determine the damage based on T
        if (T % 3 == 0) {
            front -= 3;
        } else {
            front -= 1;
        }
        
        if (front > 0) {
            enemies.push_front(front); // Use push_back to re-add to the end of the deque
        }
    }

   std::cout << T << std::endl;
    
    return 0;
}