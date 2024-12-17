#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int room_num;
int room_infor[305];
int room_list_lv[305][305];
char room_list_name[305][305][18];
int p, m;
char p_name[18];

int sort() {

	int temp_lv = 0;
	char temp_name[18] = { 'a' };

	for (int ia = 0; ia < room_num; ia++) {
		for (int f = 0; f < room_infor[ia]; f++) {
			for (int g = f + 1; g < room_infor[ia]; g++) {
				if (strcmp(room_list_name[ia][f], room_list_name[ia][g]) > 0) {
					strcpy(temp_name, room_list_name[ia][f]);
					strcpy(room_list_name[ia][f], room_list_name[ia][g]);
					strcpy(room_list_name[ia][g], temp_name);
					temp_lv = room_list_lv[ia][f];
					room_list_lv[ia][f] = room_list_lv[ia][g];
					room_list_lv[ia][g] = temp_lv;
				}
			}
		}
	}
	return 0;
}
