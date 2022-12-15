#include<stdio.h>
//구조체 : 하나의 변수가 종합적인 
struct Student
{
	int num;
	int score;
}typedef Student;
int main()
{
	Student s1 = { 1,50 }; //배열은 포인터이지만 얘는 정보를 다 담고 있다, 얘는 배열이 전혀 아님, 용량도 더 큼
	Student s2 = { .num = 2,60 };
	Student s3;
	s3.num = 3;		//속성
	s3.score = 70;	//속성





	//1. 변수를 그만큼 만든다.
	int stu1 = 1;
	int stu2 = 2;
	int stu3 = 3;
	int stu1_score = 50;
	int stu2_score = 60;
	int stu3_score = 70;
	//이렇게 하면 단점
	//1) 학생이 새로 생길 때마다 프로그램 수정해야 함
	//2) 실수로 번호만 넣거나 점수만 넣을 수 있다.

	//2. 배열을 종류별로 만든다.(번호 배열, 성적 배열)
	int stu[3];
	int stu_score[3];
	stu[0] = 1;
	stu[1] = 2;
	stu[2] = 3;
	stu_score[0] = 50;
	stu_score[1] = 60;
	stu_score[2] = 70;
	//1) 학생이 새로 생기면 각 배열들의 칸을 늘려야 됨(realloc 써야 함)
	//2) 마찬가지로 값이 누락될 수 있다.(번호만 넣거나 점수만 넣거나)
	//3) 항목이 새로 추가되면 변수 또 만들어야 함

}