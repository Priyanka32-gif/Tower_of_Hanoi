# Tower_of_Hanoi
This program will help to solve the problem of game Tower of Hanoi
Tower of Hanoi is a game that anicent monk used to play to pass their time.
The more the disk of the tower, the complexity will increased to solve this game.
The rule of game is
1. You can move one disc at a time.
2. You cannot put larger disk at top of smaller disc.
3. You have to move the disk from suppose A tower to C tower and auxilary tower B will be given.

The algorith for solving this game is 
1. if n==1, move single disk from A to C and stop.
2. Move the top n-1 disks from A to B, using C as auxilary.
3. Move the remaining disk from A to C.
4. Move the n-1 disks from B to C, using A as auxilary.
