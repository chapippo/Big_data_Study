#pragma once
//��������
//������ �̸�, ����, ���� �ڵ�
//�ǻ߶�� ���� 2���� �̻��� �� ������
//���� ���� �ڵ�� ������ ��

struct MyStruct
{
	char name[100]; // ���� ��
	char species[100]; // ��, ����� ��
	char code[100];
	//�����ڵ�
	//�й� ���� ��
	//���ڷ� �ص� ������ ���� �ڵ尡 00007 �̷� �Ŷ��
	//���ڿ��� �����ؾ� ��
	//���� int Ÿ���ε� 00007 ������
	//00007�� �ƴ� 7 Ȥ�� ������ ���� ��(int ���� �տ� 0�� �����)
}typedef Animal;

//4�� ���� ����� ����
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