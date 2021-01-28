// #include <stdio.h>
// #include <stdlib.h>

void oldProgramm()
{
    printf("wat is yor name?\n");

    char name[80]; //целочисленный тип, массив от 0 до 255. я хочу сохр-ть 80 чисел, выдели мне адрес

    scanf("%s", name); //ждет ввода, сохраняет в буфер адрес, который начинается с name
    printf("hello %s\n", name);

    printf("how old are you?\n");
    int age;
    scanf("%d", &age); // & - операция взятия адреса
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
// Ричи и Керниган Программирование на языке Си
// поднять Linux
// попробовать разобраться с Vim
// QT creator
// освободить пространство на C
// не работает - спрашивать
// видеокурс СПЕЦИАЛИСТ по C
