#include<stdio.h>
int main()
{
	
	/*int num, num2;
	printf("���� num �� �Է��ϱ� ");
	scanf_s("%d,%d", &num, &num2);

	num % 2 == 0 ? printf("¦\n") : printf("Ȧ\n");
	num != 0 && num % 2 == 0 ? printf("num�� ¦\n") : printf("num=0\n");*/
	///////////

	if (0)
	{
		int x, y;
		printf("���� 2�� �Է��غ�����. ");
		scanf_s("%d,%d", &x, &y);

		if (x > 0 && y > 0)
			printf("1");
		else if (x < 0 && y>0)
			printf("2");
		else if (x < 0 && y < 0)
			printf("3");
		else if (x > 0 && y < 0)
			printf("4");
		//else if (x == 0 || y == 0)
			//printf("0");
		else
			printf("0");

	}







	//2��


	/*int age;
	printf("���̸� �Է��ϼ���.");
	scanf_s("%d", &age);

	if (age < 20)
		printf("�̼�����");
	else if (20=< age =<50)
		pri   */



		/*int age;

	scanf_s("")
	if (age < 20)
		printf("�̼�����");*/



	//#region tab tab
#pragma region �ι�° ����

/////////#region
	if (0)
	{
		printf("���̸� �Է��ϼ���.");
		int age;
		scanf_s("%d", &age);
		if (age < 0 || age>200)
			printf("\nŸ�뽺\n");
		else
		{
			if (age < 20)                                     //age�� 0�̻��̶�� �� ����
				printf("\n�̼�����\n");
			else if (/*age >= 20 && (�������� )*/ age <= 50)
				printf("\n��ȸ�� �� ������\n");
			else if (age <= 70)           // 51~70������
				printf("\n������\n");
			else if (age >= 71)             // else�� ������ �Ǳ� ��
				printf("\n������ ������\n");     //else if�� ������ �ȴ�. ������ else �� �ᵵ ��
		}


	}


	//else �� �� ������ �ƴϸ�
#pragma endregion

	
	//3��
	//������� �ð� 45�� ���� �̸� �˶�
	// �ð� H , �� M
	//int time;
	//printf()

		/*int h, m;
		scanf_s("%d", &h);
		scanf_s("%d", &m);
		m = m - 45;
		if (m < 0) 
			{
			if (h == 0)	
			{
				h = 23;
			}
			else 
			{
				h = h - 1;
			}
			m = 60 + m;
			printf("%d %d\n", h, m);
			return 0;
			}
		printf("%d %d\n", h, m);*/



	//5,   6,9
	//m 60�� ���߱� ������ h(�ð�)�� �ϳ� ��


	int h, m;

	                                                        //INPUT_TIME:
	printf("�ð� �Է��ϱ�");
	scanf_s("%d", &h);

	if (h >= 24)
	{
		printf("\n���� �ʹ� ũ�ϱ� �ٽ� �Է��ϼ���.");
	}
		                                                      //goto INPUT_TIME; //goto�� ��~~�����̸� ��������.
						               // ���� �ȵ�. ���ϴ� ����� ��¥ �� ���� �׷����ʿ��� �̰� ��¿ �� ���� ���� ��찡 �ִ�.


	h = h % 24;                     // �ð��� 0�ú��� 23�ñ����̹Ƿ� �ʹ� ū �ð��� �Է��ص� 24�� ���� �������� ���� �ٲٰ� �Ǹ�
				                    // h���� ������ 0���� 23�� ���´�.
	h %= 24;                        //���� �ڵ�� �Ȱ���
		
	printf("�� �Է��ϱ�");
	scanf_s("%d", &m);

	m %= 60;                          //Ȥ�� 60 ������ 60���� ���� �������� �ٲ������.

	printf("���� 45���� �ð��� �����ص帮�ڽ��ϴ�.\n");

	m = m - 45;                        // m-=45;
	if (m < 0)
	{
		m = m + 60;                       // m = m+60;
		h = h - 1;                        // h = h-1;
		if (h < 0)
			h += 24;
	}
	printf("�˶� �ð� : %d�� %d��\n", h, m);




	return 0;
}