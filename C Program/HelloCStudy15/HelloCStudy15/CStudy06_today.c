#include<stdio.h>
//void printYourName(char n[]) //���ڿ��� �ְ� �״�� ���		//�迭 = ������ @@@@@@@@@@@@@
void printYourName(char* n)	   //���ڿ��̶�� �� �迭, 2,3�� ���� 
					   //=
{					   //n�� ������ 44��
	printf("����� �̸��� %s�Դϴ�.\n", n);
}
char* printABC()
{
	return "abc\n"; //���ڿ��� return �ϴ� �͵� �� �ȴ�
}		  //abc �� �� ��ü 

//�Ű����� ���� ���ڿ��� �Է� �޾Ƽ� �����ϰ� ���� ����?????
char* returnMyInfo()										// ??? 50��
{	
	static char mbti[5];			//static�� ���̸� �� ��.. ��?	(�������� ����)
	printf("mbti?");				//mbti�� ������(�迭)�̰�,��򰡸� �����Ѿ� �ϴµ�(mbti[5] ��� 5ĭ¥�� �ּҸ� ����Ŵ)
	gets(mbti);						//�� �Լ�(�� ������)�� ������ ����� -> ���� �� ����Ű�� ������ �̻��� ���� ���� �� �ۿ�
	return mbti;						//�Լ��� ������ '������ ������ �����ϰ� �ִ�' -> �׷��� static ����
										//DATA ���� �ȿ� �迭 �Ҵ��ϸ� ���α׷� ���� ������ ������� ����
										//DATA ���� �ȿ� �Ҵ��ߴٴ� �� �����ֱ� ���� static ���
										// ��� : ���ڿ��� �Է��� �� return�ϰ� �ʹٸ� static �տ� ���̱�
	//return mbit; ->�迭�� ���� �ּ� ��ȯ @@@@@
}
char* returnMyMBTI(char* mbti)
{					   //---- ���� �ȿ� �ִ� �༮�̴� �״�� return ����

	//main�� �ִ� ���ڿ��� ������ �ͼ�, �ٸ� �� �ϰ� �ʹٸ�
	//�Ű������� �ش� ���ڿ��� �޾ƿ;� ��
	return mbti; //�Ű������� ���� �� �״�� �����غ���
}
char* change(char n[])
{
	printf("�ٲ� �� ����غ���");
	gets(n);
	return n;
}

int main()
{
	printf("�̸� �Է� ");
	char name[100];	//���ڹ迭 = ���ڰ� ������ ��
	gets(name);		//���ڰ� ������ �� = ���ڿ�
	printYourName(name); //���� ���ڹ迭 = ���ڿ�		//name �� ������ 3��

	printf("------------\n");

	printf("%s\n", printABC());

	printf("------------\n");

	//�迭 = ������
	//name �迭�� name �����Ͷ�� ���� �ȴ�.
	printf("%s\n", returnMyInfo());							// ??? 14��			

	printf("------------\n");

	printf("%s\n", returnMyMBTI("ISFP"));//���ڿ� �޾Ƽ� �״�� return�� �� �ȴ�
	printf("%s\n", returnMyMBTI(name)); //�Ű������� Ư���� ���ڸ� ������ �״�� ������ش�

	printf("------------\n");

	printf("%s\n", change(name));

	return 0;
}