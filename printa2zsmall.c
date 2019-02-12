// Print a to z lowercase

#include<stdio.h>

int main () {

	int i, x = 96;
	for (i = 0; i < 26; ++i) {

		x = x + 1;
		//x = ++x;//does work
        //x = x++; //doesn't work
        //x += 1; // does work

		printf("%c ", x);
	}

	return 0;
}
