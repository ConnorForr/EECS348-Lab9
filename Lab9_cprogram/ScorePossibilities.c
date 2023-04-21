/*
 * Program2.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Connor Forristal
 */

#include <stdio.h>

void score_combinations(int total) {
	printf("Possible combinations of scoring plays:\n");
	for (int td_plus2 = 0; td_plus2 <= (total/8); ++td_plus2) {
		for (int td_plus1 = 0; td_plus1 <= ((total - (td_plus2*8))/7); ++td_plus1) {
			for (int td = 0; td <= ((total - (td_plus2*8) - (td_plus1*7))/6); ++td) {
				for (int fg = 0; fg <= ((total - (td_plus2*8) - (td_plus1*7) - (td*6))/3); ++fg) {
					for (int safety = 0; safety <= ((total - (td_plus2*8) - (td_plus1*7) - (td*6) - (fg*3))/2); ++safety) {

						if (total == ((td_plus2*8) + (td_plus1*7) + (td*6) + (fg*3) + (safety*2))) {
							printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_plus2, td_plus1, td, fg, safety);
						}
					}
				}
			}
		}
	}
	printf("\n");
}

int main() {

	while(1) {
		int total = 0;
		printf("Enter 0 or 1 to STOP\nEnter the NFL score: ");
		fflush(stdout);
		scanf("%d", &total);
		printf("\n");

		if (total <= 1) {
			return 0;
		} else {
			score_combinations(total);
		}
	}
}

