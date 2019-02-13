// Area of various 2D shapes

#include<stdio.h>

int main () {
	
	int squareSide, baseTri, heightTri, radius, lengthRect, baseRect, basePgram, heightPgram, shape;
	float area;
	for (;;) {

		printf("Select the shape:\n1: Sqaure\n2: Triangle\n3: Circle\n4: Rectangle\n5: Parallelogram\n");
		scanf(" %d", &shape);
		if (shape == 1) {
			
			printf("Enter side of square: ");
			scanf(" %d", &squareSide);
			area = squareSide * squareSide;
			break;
		}
		else if (shape == 2) {
			
			printf("Enter height and base of triangle: ");
			scanf(" %d", &baseTri, &heightTri); 
			area = 0.5 * baseTri * heightTri;
			break;
		}
		else if (shape == 3) {
			
			printf("Enter radius of cricle: ");
			scanf (" %d", &radius);
			area = 22.0/7.0 * radius * radius;
			break;
		}
		else if (shape == 4) {
			
			printf("Enter length and breadth of reactangle: ");
			scanf(" %d", &lengthRect, &baseRect);
			area = lengthRect * baseRect;
			break;
		}
		else if (shape == 5) {
			
			printf("Enter base and height of parallelogram: ");
			scanf(" %d", &basePgram, &heightPgram);
			area = basePgram * heightPgram;
			break;
		}
		else 
			printf("Enter correct shape number\n");
	}
	printf("%f is the area of shape entered", area);
	return 0;
}
