#include<stdio.h>
int main()
{
	/*int grade;
	printf("����ѧ���ɼ���");
	scanf_s("%d",&grade);
	if (grade >= 90)
		printf("��ѧ���ɼ�����ΪA��");
	else if (grade >= 80)
		printf("��ѧ���ɼ�����ΪB��");
	else if (grade >= 70)
		printf("��ѧ���ɼ�����ΪC��");
	else if (grade >=60)
		printf("��ѧ���ɼ�����ΪD��");
	else
		printf("��ѧ���ɼ�����ΪF��");*/
	int grade;
	printf("����ѧ���ɼ���");
	scanf_s("%d", &grade);
	switch (grade/10) 
	{
	case 10:
	case 9:
		printf("��ѧ���ɼ�����ΪA��");
		break;
	case 8:
		printf("��ѧ���ɼ�����ΪB��");
		break;
	case 7:
		printf("��ѧ���ɼ�����ΪC��");
		break;
	case 6:
		printf("��ѧ���ɼ�����ΪD��");
		break;
	default:
		printf("��ѧ���ɼ�����ΪF��");



	}
}