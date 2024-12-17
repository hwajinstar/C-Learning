#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int room_num = 0;
int room_infor[305] = { 0 };
int room_list_lv[305][305] = { 0 };
char room_list_name[305][305][18];
int p, m;
int p_lv = 0;
char p_name[18];

int room_input() {
	for (int i = 0; i < p; i++) {
		scanf_s("%d %s", &p_lv, &p_name, (unsigned int)sizeof(p_name));

		int d = 0;

		for (int j = 0; j < p; j++) {
			if (room_list_lv[j][0] == 0) {
				room_list_lv[j][0] = p_lv;
				strcpy(room_list_name[j][0], p_name);
				room_num += 1;
				room_infor[j] += 1;
				break;
			}
			else {
				for (int k = 1; k < m; k++) {
					if (room_list_lv[j][k] == 0 && abs(room_list_lv[j][0] - p_lv) <= 10) {
						room_list_lv[j][k] = p_lv;
						strcpy(room_list_name[j][k], p_name);
						room_infor[j] += 1;
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

}

int sort() {
	int temp_lv = 0;
	char temp_name[18] = { 'a' };

	for (int i = 0; i < room_num; i++) {
		for (int f = 0; f < room_infor[i]; f++) {
			for (int g = f + 1; g < room_infor[i]; g++) {
				if (strcmp(room_list_name[i][f], room_list_name[i][g]) > 0) {
					strcpy(temp_name, room_list_name[i][f]);
					strcpy(room_list_name[i][f], room_list_name[i][g]);
					strcpy(room_list_name[i][g], temp_name);
					temp_lv = room_list_lv[i][f];
					room_list_lv[i][f] = room_list_lv[i][g];
					room_list_lv[i][g] = temp_lv;
				}
			}
		}
	}
}

int output() {
	for (int re = 0; re < p; re++) {
		for (int re1 = 0; re1 < m; re1++) {
			if (room_list_lv[re][re1] == 0) {
				break;
			}
			else {
				if (re1 == 0 && room_infor[re] == m) {
					printf("Started!\n");
					printf("%d %s\n", room_list_lv[re][re1], room_list_name[re][re1]);
				}
				else if (room_infor[re] < m && re1 == 0) {
					printf("Waiting!\n");
					printf("%d %s\n", room_list_lv[re][re1], room_list_name[re][re1]);
				}
				else {
					printf("%d %s\n", room_list_lv[re][re1], room_list_name[re][re1]);
				}
			}
		}
	}
} 

int main() {

	scanf_s("%d %d", &p, &m);

	room_input();

	sort();

	output();
}
