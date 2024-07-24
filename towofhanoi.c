#include <stdio.h>

// Function to solve Tower of Hanoi problem
void towerOfHanoi(int num_disks, char source, char auxiliary, char destination) {
    if (num_disks == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(num_disks - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", num_disks, source, destination);
    towerOfHanoi(num_disks - 1, auxiliary, source, destination);
}

int main() {
    int num_disks = 3; // Number of disks
    char source = 'A', auxiliary = 'B', destination = 'C'; // Pegs

    // Function call to solve Tower of Hanoi
    towerOfHanoi(num_disks, source, auxiliary, destination);

    return 0;
}
