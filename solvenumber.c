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
	printf("���� ���߱� ����!1~99������ ���ڸ� �Է��Ͻʽÿ�");
	while(number != computernumber){
	scanf("%d",&number);
	if (number!=computernumber){
		printf("����! �ٽ��ѹ� �Է��ϼ���:");
	}
	else{
		printf("�����Դϴ�!\n");
	}
	while( getchar() != '\n'){}
	num++;
	}
	printf("%d��°���� ���߼̽��ϴ�.",num);
	return 0;
}
