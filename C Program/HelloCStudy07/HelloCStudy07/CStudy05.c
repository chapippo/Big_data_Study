#include<stdio.h>
int main()
{

	//���� ('' �ȿ� ����)
	//���ڿ� ("" �ȿ� ����. ���� Ȥ�� string�̶�� ��)

	char c = 'A';             
	char mbti[5];// = "ISTP"; //   �ڿ� �ڵ����� 'null', '\0' ���� ��    //���ڿ��� �ְ� ������ ���� �迭�� ������ �ȴ�.
	char* m = mbti;
	//gets(m); �� ���� �� ��. ���� �迭�� ���̸� �𸣴�, ������ ũ�� ���� �� @@@@@@@@@

	char bType[3];
	bType[0] = 'A';
	bType[1] = 'B'; //bType�� AB��� �� ��
	bType[2] = NULL; // Ȥ�� '\0' �ֱ�                                //�ΰ��� �־��� ���¿��� ����� ����� �ȴ� @@@@@@@@@
	char bloodType[3] = "AB";
	char name[7] = "�̵���";    //�ּ� 6ĭ�� �ʿ��ѵ� null �� ������ 7
	char mbti2[100] = "ENTP"; //�����ϱ� �������� �˳��ϰ� ���

	//���ڿ� �Է¹ޱ�
	printf("mbti��?\n");
	gets(mbti);
	printf("%s\n", mbti);

	//���� �Է¹ޱ�
	printf("���ĺ� �ϳ� �Է��غ���\n");        //�� �ʿ����?????                  @@@@@@@@@@
	//rewind(stdin);  gets �ڿ��� �� �ʿ� ���� 
	//���ڳ� ���ڿ��� �Է¹��� �� ������ ���� �Է¹��� �� ������ �ݵ�� �߰������ �ϴ� �ڵ�
	//����Ű(\n)�� ���۶�� �޸𸮿� ���� �־ �װ� �ݵ�� ��������� �Ѵ�.
	c = getchar();
	printf("%s %c", mbti, c);
	printf("�ٽ� ���� �Է�");
	//rewind �� �����ϱ� ����Ű�� getchar�� ������
	//��!! ������ �Է¹��� �� ��� �ڵ尡 gets��� 
	//�ʿ����
	//��� scanf�ų� getchar�� ��쿣 rewind�� �ʿ�
	//���ڸ� �Է¹����Ŷ�� rewind �� �ᵵ �ǰ�, ���ڳ�
	//���ڿ��� �Է¹��� �� ��� ��
	rewind(stdin);
	c = getchar();
	printf("c=%c\n", c);

	rewind(stdin);
	printf("aaa");
	char ch;
	char ch2;
	char myname[100];
	gets(myname);
	ch = getchar();

	//gets�� �Է� ������ ���ۿ� ����Ű�� �� ����                @@@@@@@@@@@@@@@@@@@@@@@  rewind �� �ᵵ ��


	return 0;
}