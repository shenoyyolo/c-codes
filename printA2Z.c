//Print UpperCase A-Z

#include<stdio.h>

int main () {

	int i, x = 64;

	for (i = 0; i < 26; ++i) {

		//x = ++x;//does work
        x++; //doesn't work
        //x += 1; // does work
		//x = x + 1; //does work
		printf("%c ", x);
	}

	return 0;

}
