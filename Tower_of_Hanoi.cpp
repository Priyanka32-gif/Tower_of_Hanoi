#include<stdio.h>
#include<string.h>

void tower(int, char, char, char);

int main(){
    int n;
	printf("Enter the number of disks: ");
	scanf("%d", &n);
	tower(n, 'A', 'B', 'C');
}
void tower(int n, char from, char to, char aux){
	if(n == 1){
		printf("\nMove disk 1 from %c to %c", from, to);
		return;
	}
    
	tower(n - 1, from, aux, to);
	printf("\nMove disk %d from %c to %c", n, from, to);
	tower(n - 1, aux, to, from);
}
