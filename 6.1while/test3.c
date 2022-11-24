#include <stdio.h>

int find9(void)
{
	int i = 1;
	int cnt = 0;
	while(i <= 100){
	printf("The i is:%d\n",i);
		if(i/10 == 9)		//十位
			cnt++;
		else if(i%10 == 9)	//个位
			cnt++;
		else
			cnt = cnt;
	printf("The cnt is:%d\n",cnt);
		i++;
	}
	return cnt;
}

int main(void)
{
	printf("The number of 9 in 1-100 are:%d\n",find9());
	return 0;
}

