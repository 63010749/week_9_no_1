#include<stdio.h>

int thinktime(int min,int hour) {
		int min1 = min % 60;
		if (min1 > 0) {
			min1 = 1;
		}
		if (min1 == 0) {
			min1 = 0;
		}
		hour = hour + (min / 60) + min1;
		return(hour);
}

int thinkcost(int h) {
	int cost = h * 30;
	return(cost);
}


int main() {
	
	int shopping, hour, minute, cost;
	printf("Shopping : ");
	scanf("%d", &shopping);
	printf("Hour : ");
	scanf("%d", &hour);
	printf("Minute : ");
	scanf("%d", &minute);
	int b ;
	
	if (shopping < 0 || hour < 0 || minute < 0) {
		printf("It can't be negative");
		b = 0;
	}

	else {
		if (shopping > 0 ) {
		
			if (shopping < 1000) {
				hour = thinktime(minute, hour) - 1;
			}
		
			if (shopping >= 1000) {
				hour = thinktime(minute, hour) - 4;
			}
		}
	
		cost = thinkcost(hour);
	
		if (cost < 0) {
			printf("Parking Cost = 0");
		}

		else {
			if (cost >= 160) {
				printf("Parking Cost = 150");
			}
			else {
				printf("Parking Cost = %d", cost);
			}
		}
	}
	return 0;
}
