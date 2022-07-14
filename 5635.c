#include<stdio.h>
struct birth
{
	char name[16];
	int day;
	int month;
	int year;
};

int main() {
	int num;
	struct birth* ptr = NULL;
	struct birth* ptrr = NULL;
	struct birth s[100]={0,};
	scanf("%d",&num);
	for (int i = 0; i < num; i++) {
		scanf("%s",s[i].name);
		scanf("%d", &s[i].day);
		scanf("%d", &s[i].month);
		scanf("%d", &s[i].year);
		if (ptr == NULL)
			ptr = s;
		else {
			if ((*ptr).year > s[i].year)
				ptr = &s[i];
			else if ((*ptr).year == s[i].year) {
				if((*ptr).month > s[i].month)
					ptr = &s[i];
				else if ((*ptr).month == s[i].month) {
					if ((*ptr).day > s[i].day)
						ptr = &s[i];
				}
			}
		}
		if (ptrr == NULL)
			ptrr = s;
		else {
			if ((*ptrr).year < s[i].year)
				ptrr = &s[i];
			else if ((*ptrr).year == s[i].year) {
				if ((*ptrr).month < s[i].month)
					ptrr = &s[i];
				else if ((*ptrr).month == s[i].month) {
					if ((*ptrr).day < s[i].day)
						ptrr = &s[i];
				}
			}
		}
	}
	printf("%s\n", ptrr->name);
	printf("%s\n", ptr->name);
	return 0;
}