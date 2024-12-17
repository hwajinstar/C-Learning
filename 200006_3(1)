#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int room_infor[305];
int room_list_lv[305][305];
char room_list_name[305][305][18];
int p, m;
char p_name[18];
int p_lv;
int room_num;

int input() {
	for (int i = 0; i < p; i++) {
		scanf_s("%d %s", &p_lv, &p_name, (unsigned int)sizeof(p_name));

		int d = 0;
		
		for (int ja = 0; ja < p; ja++) {
			if (room_list_lv[ja][0] == 0) {
				room_list_lv[ja][0] = p_lv;
				strcpy(room_list_name[ja][0], p_name);
				room_num += 1;
				room_infor[ja] += 1;
				break;
			}
			else {
				for (int k = 1; k < m; k++) {
					if (room_list_lv[ja][k] == 0 && abs(room_list_lv[ja][0] - p_lv) <= 10) {
						room_list_lv[ja][k] = p_lv;
						strcpy(room_list_name[ja][k], p_name);
						room_infor[ja] += 1;
						d += 1;
						break;
					}
				}
				if (d == 1) {
					break;
				}
			}
		}
	}
	return 0;
}
