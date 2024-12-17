#include <stdio.h>

int room_num = 0;
int room_infor[305];
int room_list_lv[305][305];
char room_list_name[305][305][18];
int p, m;
int p_lv = 0;
char p_name[18];

int main() {
	scanf_s("%d %d", &p, &m);

	input();
	sort();
	output();

	return 0;
}
