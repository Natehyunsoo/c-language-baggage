#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void){
	int number=0;
	int computernumber=-1;
	int same;
	int different;
	int num;
	srand(time(NULL));
	computernumber=rand() % 100;
	printf("숫자 맞추기 게임!1~99까지의 숫자를 입력하십시오");
	while(number != computernumber){
	scanf("%d",&number);
	if (number!=computernumber){
		printf("오답! 다시한번 입력하세요:");
	}
	else{
		printf("정답입니다!\n");
	}
	while( getchar() != '\n'){}
	num++;
	}
	printf("%d번째에서 맞추셨습니다.",num);
	return 0;
}
