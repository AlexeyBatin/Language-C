///* ���� ������ ������������� , �� � 62 , ������ �3
//����������� ������ �6. ������������ ��������� � ������� ������� ��������� 
//(�������� ����� � �����������) */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <Windows.h>
int main () {
  int i,m,k;
  float xn; // ���������� ��������
  SetConsoleOutputCP(1251);
  printf("��������� ���� �����������:\txn=ln(n+1)/5n^2+3\n\n"); // ���� �� �����
  printf("������ ������� ������ ����������� (�� ����� 1) = ");
  scanf("%d",&m);
  if (m>=1) { // �������� ������ �����������
    printf("������ ������� ������� (�� 1 �� 6) = ");
    scanf("%d",&k);
    if (k >= 1 && k <= 6) { // ʳ������ ������� �� 1 �� 6 
      if(m<k) k=m; // ʳ������ ������ ����������� ����� ������� ������� 
      for(i=1;i<=k;i++)printf("�����������"); // ������� �������
      printf("��\n"); // ������� �� ����� ����� ��� ��������� �������
      for (i = 1; i <= m; i++) {
        xn = logf(i + 1.) / (5.*i*i + 3); // ���������� ��
        printf("| %8.5f ", xn);
        if (i%k==0) printf(" |\n"); // ������� �����
      }
      if (m%k) { // �������� ������� 
        while (m%k)
        {
          printf("|          "); // ������������ �����
          m++;
        }
        printf(" |\n");
      } // ��������� �������
      for(i=1;i<=k;i++)printf("�����������"); // ʳ���� �������
      printf("��\n"); 
      printf("\n");
    }
    else printf("�� ����� �������� ���� �������� [1;6]\n"); // ������� �������
  }
  else printf("�� ����� �������� ����� 1\n\n"); // ������� �������� 
  system("pause");
}

