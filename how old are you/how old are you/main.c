// #include <stdio.h>
// #include <stdlib.h>

void oldProgramm()
{
    printf("wat is yor name?\n");

    char name[80]; //������������� ���, ������ �� 0 �� 255. � ���� ����-�� 80 �����, ������ ��� �����

    scanf("%s", name); //���� �����, ��������� � ����� �����, ������� ���������� � name
    printf("hello %s\n", name);

    printf("how old are you?\n");
    int age;
    scanf("%d", &age); // & - �������� ������ ������
    float age_six_months;
    age_six_months = age + 0.5;

    printf("six months leter you will %f year\n", age_six_months);
}

void func(int value)
{
    printf("value = %d symbol = %c\n", value, value);
}

float cos(float x)
{
    int value = 10;

    // calculate y by x;
    float y = x / 2;
    return y;
}

// ReturnType FunctionName(ArgType argName, ... ArgTypeN argNameN)
void sum(int a, int b)
{
    int result = a + b;
    printf("sum result %d\n", result);
}

float descr(float a, float b)
{
    float result = 0;
    // implementation ...
    return result;
}


int main()
{
    float y = cos(10);
    printf("cos value %f\n", y);
    // 1)
    // 2)
    // 3)
    return 0;
}
// ���� � �������� ���������������� �� ����� ��
// ������� Linux
// ����������� ����������� � Vim
// QT creator
// ���������� ������������ �� C
// �� �������� - ����������
// ��������� ���������� �� C
