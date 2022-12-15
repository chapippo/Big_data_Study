#pragma once
//동물병원
//동물의 이름, 종류, 고유 코드
//뽀삐라는 개가 2마리 이상일 수 있으니
//동물 고유 코드로 구분할 것

struct MyStruct
{
	char name[100]; // 뽀찌 등
	char species[100]; // 개, 고양이 등
	char code[100];
	//고유코드
	//학번 같은 것
	//숫자로 해도 되지만 고유 코드가 00007 이런 거라면
	//문자열로 저장해야 함
	//만약 int 타입인데 00007 넣으면
	//00007이 아닌 7 혹은 엉뚱한 값이 들어감(int 쓰면 앞에 0이 사라짐)
}typedef Animal;

//4번 내가 만들고 싶은
struct Food
{
	int price;
	char name[100];
}typedef Food;

struct StudentScore
{
	int kor;
	int eng;
	int math;
}typedef StudentScore;