#include<stdio.h>

int thinktime(int min,int hour) {
		int min1 = min % 60;
		if (min1 > 0) {
			min1 = 1;
		}
		if (min1 = 0) {
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
	scanf("%d %d %d", &shopping, &hour, &minute);

	if (shopping < 0 || hour < 0 || minute < 0) {
		printf("It can't be negative");
	}
	
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
		printf("cost = 0");
	}

	else {
		if (cost >= 160) {
			printf("cost = 150");
		}
		else {
			printf("cost = %d", cost);
		}
	}

	return 0;
}
