#include <stdio.h>

int room_infor[305];
int room_list_lv[305][305];
char room_list_name[305][305][18];
int p, m;
char p_name[18];

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
	return 0;
}
