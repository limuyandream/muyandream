#include<stdio.h>
int main()
{
	/*int grade;
	printf("输入学生成绩：");
	scanf_s("%d",&grade);
	if (grade >= 90)
		printf("该学生成绩评定为A！");
	else if (grade >= 80)
		printf("该学生成绩评定为B！");
	else if (grade >= 70)
		printf("该学生成绩评定为C！");
	else if (grade >=60)
		printf("该学生成绩评定为D！");
	else
		printf("该学生成绩评定为F！");*/
	int grade;
	printf("输入学生成绩：");
	scanf_s("%d", &grade);
	switch (grade/10) 
	{
	case 10:
	case 9:
		printf("该学生成绩评定为A！");
		break;
	case 8:
		printf("该学生成绩评定为B！");
		break;
	case 7:
		printf("该学生成绩评定为C！");
		break;
	case 6:
		printf("该学生成绩评定为D！");
		break;
	default:
		printf("该学生成绩评定为F！");



	}
}