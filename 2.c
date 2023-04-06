#include <stdio.h>
int main()
{
    int a = 10;//申请了四个字节的空间
    printf("%p\n",&a);
}


// int main()
// {
//     char ch = 'w';
//     char* pc = &ch;
//     *pc = 'a';
//     printf("%c\n",ch);
//     printf("%lu\n",sizeof(pc));
// }


// int main()
// {
//     int a = 10;//4个字节
//      int*  p = &a;//取地址
//     //有一种变量是用来存放地址的-指针变量
//     printf("%p\n",&a);
//     printf("%p\n",p);
//     *p = 20;//* - 解引用操作符
//     printf("%d\n",a);

// }

// ------------------------------
// // #define 定义标识符常量
// // #define MAX 100
// // #define 可以定义宏-带参数

// // 函数的实现
// int MAX(int x, int y)
// {
//    if(x > y)
//        return x;
//     else
//        return y;
// //宏的定义
// #define MAX(X,Y) (X>Y?X:Y)
// }
// int main()
// {
//     // int a = MAX;
//     int a = 10;
//     int b = 20;
//     //函数
//     int max = MAX(a, b);
//     printf("%d\n",max);
//     //宏的方式

//     max = MAX(a, b);
//     //max = (a>b?a:b);
//     printf("max = %d\n",max);



// }

// void test()
// {
//     static int i = 0;
//     i++;
//     printf("i = %d\n",i);
// }
// int main()
// {
//     int i = 0;
//     for(i=0;i<10;i++)
//     {
//         test();
//     }
// }


// void test()
// {
//     int i = 0;
//     i++;
//     printf("%d\n",i);
// }
// int main()
// {
//     int i = 0;
//     for(i=0;i<10;i++)
//     {
//         test();
//     }
// }


// ------------------------------
//     //static 修饰局部变量
//     //局部变量的生命周期变长
//     //static 修饰全局变量 
       //改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
       //出了源文件无法再使用
       //stsitc修饰函数
       //也是函数的作用域-不准确
       //stsitc修饰函数改变了函数的链接属性
       //外部链接属性 -> 内部链接属性
       //声明外部函数
// extern int Add(int, int);
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int sum = Add(a, b);
//     printf("%d\n",sum);
// }
// int main()
// {
//     //extern - 声明外部符号
//     extern int g_val;
//     printf("%d\n",g_val);
// }
// void test()
// {
//     static int a = 1;//a是一个静态局部变量
//     a++;
//     printf("a = %d\n",a);
// }
// int main()
// {
//     int i = 0;
//     while (i<5)
//     {
//         test();
//         i++;
//     }
// }


// ------------------------------
// int main()
// {
//     //int float;//err
//     //typedef - 类型定义 - 类型重定义
//     typedef unsigned int u_int;
//     unsigned int num = 20;
//     u_int num2 = 30;

// }


// int main()
// {
//     int a = 10;
//     a = -2;
//     //int定义的变量是有符号的
//     //signed int；
//     unsigned int num = -1;
//     printf("%d\n",num);
// }


// int main()
// {
//     register int a = 10;//建议把a定义成寄存器变量 
// }


// int main()
// {
//     auto int a = 10;//局部变量-自动变量
// }


// ------------------------------
// int Add(int x, int y)
// {
//     int z; 
//     z = x + y;
//     return z;
// }
// int main()
// {
//     //int arr[10] = [0];
//     //arr[4];//[] - 下标引用操作符
//     int a = 10;
//     int b = 20;
//     int sum = Add(a,b);
//     printf("%d\n",sum);
// }

// ------------------------------
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int max;
//     max = a > b ? a : b;//三目操作符
//     printf("%d\n",max);
// }



// int main()
// {
//     //真 - 非0
//     //假 - 0
//     //&& - 逻辑与
//     //|| - 逻辑或
//     int a = 0;
//     int b = 20;
//     int c = a && b;
//     int d = a || b;
//     printf("%D\n",d);
//     printf("%D\n",c);

// }



// int main()
// {
//     int a = (int)3.14;//强制类型转换
// }



// int main()
// {
//     int a = 10;
//     int b = a++;//后置++，先使用再++
//     int c = ++a;//前置++，先++再使用
//     int d = a--;//后置--，先使用再--
//     int e = --a;//前置--，先--再使用
//     printf("a = %d\nb = %d\n",a,b);
//     printf("c = %d\n",c);
//     printf("d = %d\n",d);
//     printf("e = %d\n",e);
    

// }



// int main()
// {
//     int a;//4个字节 32bit位
//     int b = ~a;//b是符号整型
//     //~ 按二进制按位取反
//     // 00000000000000000000000000000000
//     // 11111111111111111111111111111111
//     //原码、反码、补码（反码+1得补码）
//     //负数在内存中存储的时候，存储的是二进制的补码
//     // 11111111111111111111111111111111

//     printf("%d\n", b);
// }

// ------------------------------
// int main()
// {
//     int a = 10;
//     int arr[] = {1,2,3,4,5,6};
//     printf("%lu\n",sizeof(a));
//     printf("%lu\n",sizeof(int));
//     printf("%lu\n",sizeof a);
//     printf("%lu\n",sizeof(arr));
//     printf("%lu\n",sizeof(arr)/sizeof(arr[0]));
// }

// ------------------------------
// int Max(int x, int y)
// {
//     if(x > y)
//        return x;
//     if(x < y)
//        return y;
// }
// int main()
// {
//     int num1 = 10;
//     int num2 = 20;
//     int max;
//     max = Max(num1,num2);
//     printf("max = %d",max);

// }

// ------------------------------
// //单目操作符
// //双目操作符
// //三目操作符

// int main()
// {
//     int a = -2;//- 单目操作符
//     int b = -a;
//     int c = +3;
//     //sizeof 计算的是变量/类型所占空间的大小，单位是字节
//     printf("%lu\n",sizeof(a));
//     printf("%lu\n",sizeof(int));
//     printf("%lu\n",sizeof a);
//     // printf("%d\n",sizeof int);  int不能隔空格
//     int arr[10] = {0};//10个整型元素的数组
//     int sz;
//     //10*sizeof(int) = 40
//     printf("%lu\n",sizeof(arr));
//     //计算数组的元素个数
//     //个数 = 数组的总大小/每个元素的大小
//     sz = sizeof(arr)/sizeof(arr[0]);
//     printf("sz = %d\n",sz);

// //int a = 10;
// //int b = 20;
// //a+b;//+ 双目操作符
// //c语言中0-假，非0-真
// int a = 10;
// printf("%d\n",a);
// printf("%d\n",!a);//！为逻辑反操作 非0变0，0变1
//}

// int main()
// {
//     int a = 10;
//     a = 20;// = 赋值  == 判断相等
//     a += 10; //a = a+10
//     a -= 20; //a = a-20
//     a &= 2;;//a = a&2
//     //复合赋值符
//     //+= -= /= %= >>= <<= &= ^= |=
// }

// ------------------------------
// int main()
// {
//     //（2进制）位操作
//     //&按位与
//     //｜按位或
//     //^按位异或
//     int a = 3;   //011
//     int b = 5;   //101
//     int c = a&b; //001
//     int d = a^b;
//     //异或的计算规律
//     //对应的二进制位相同为0
//     //相异为1

//     printf("%d\n",c);//0假1真
//     printf("%d\n",d);//110=6
// }

// ------------------------------
// int main()
// {
//     //移（2进制）位操作
//     //  <<  左移
//     //  >>  右移
//     int a = 1;
//     //整形1占4个字节-32bit位
//     //00000000000000000000000000000001
//     int b = a<<1;//00000000000000000000000000000010
//     int c = a<<2;//00000000000000000000000000000100
//     printf("%d\n",b);
//     printf("%d/n",c);

// }

// ------------------------------
// int main()
// {
//     int a = 5/2;
//     int b = 5%2;//取模（余）
//     printf("%d\n",a);
//     printf("%d\n",b);

// }

// ------------------------------
// int main()
// {
//     // int arr[10];//定义一个存放十个整形数字的数组
//     // char ch[20];
//     // float arr2[5];
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n",arr[4]);//下标的访问元素 arr[下标]
//     //0-9
//     int i = 0;
//     while(i<10)
//     {
//         printf("%d ",arr[i]);
//         i++;
//     }
//     return 0;
// }

// ------------------------------
// Add(int a, int b)
// {
//     int z =a+b;
//     return z;
// }
// int main()
// {
//     int num1 = 10;
//     int num2 = 20;
//     int sum;
//     int a = 100;
//     int b = 200;
//     //sum = num1 + num2;
//     sum = Add(num1, num2);//函数
//     //sum = a + b;
//     sum = Add(a, b);
//     printf("sum = %d\n",sum);
//     return 0;
// }

// ------------------------------
// int main()
// {
//     int line = 0;
//     printf("发育一手\n");
//     while(line<20000)
//     {
//         printf("敲一行代码：%d\n",line);
//         line++;
//     }
//     if(line>=20000)
//        printf("好offer\n");
//     return 0;
// }
// ------------------------------
// int main()
// {
//     int input = 0;
//     printf("芜湖起飞\n");
//     printf("开摆否？\n");
//     scanf("%d",&input);
//     if(input == 1)
//         printf("好offer\n");
//     else
//         printf("寄\n");
//     return 0;
// }

// ------------------------------
// #include <string.h>
// int main()
// {
//     // printf("%lu\n",strlen("c:\test\32\test.c"));//   \t是转义字符 \32是一个八进制数，十进制为26（3*8^1+2*8^0 = 26)
//     // printf("%c\n",'\132');//132八进制   十进制90，作为ASCII码值代表的字符为Z
//     printf("%c\n",'\x61');//x61为十六进制  （xdd）  十进制为97  作为ASCII码值代表的字符为a
//     return 0;
// }

// ------------------------------
// int main()
// {
//     //printf("c:\\test\\32\\test.c");
//     printf("%c\n",'\'');
//     printf("%s\n","\"");
//     // \t -水平制表符
//     return 0;
// }

// ------------------------------
// #include <string.h>

// int main()
// {
//    char arr1[] = "abc";
//    char arr2[] = {'a','b','c'};
//    printf("%lu\n",strlen(arr1));//strlen-string length-计算字符串长度
//    printf("%lu\n",sizeof(arr2));
// }

// ------------------------------
// int main()
// {
// 数据在计算机存储的是二进制
// #ab$
// a - 97
// a - 65
//...
// ASCII 编码
// ASCII 码值
//     char arr1[] = "abc";//数组
//     //"abc"--'a''b''c''\0'--'/0'是字符串结束的标志
//     char arr2[] = {'a','b','c','\0'};
//     //‘a’'b''c'
//     //'\0' - 0
//     //'a' - 97
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);
// }

// ------------------------------
// //char--字符
// //字符串类型
// int main()
// {
//     "abcdef";
//     "hello world";
//     "";//空字符串

// }

//------------------------------
// //枚举关键
// enum sex
// {
//     male,
//     female,
//     secret
// };
// //枚举变量
// int main()
// {
//     printf("%d\n",male);//0
//     printf("%d\n",female);//1
//     printf("%d\n",secret);//2
// }

//------------------------------
// enum Color
// {
//     RED,
//     BLUE,
//     YELLOW
// };
// int main()
// {
//     enum Color color = BLUE;
//     color = YELLOW;
//     //BLUE = 8  //err
//     printf("%d",color);
// }

//------------------------------
// define 定义标识符常量
// #define MAX 10
// int main()
// {
//     int arr[MAX];
//     printf("%d\n",MAX);
// }

//------------------------------
// int main()
// {
//     //const-常属性
//     //const修饰的常变量
//     const int num = 5;
//     printf("%d\n",num);
//     num = 8;
//     printf("%d\n",num);
//     return 0;
// }

// extern????????????????
//  int main()
//  {
//       extern int g_val;
//      printf("g_val = %d",g_val);
//      return 0;
//  }

//----------------------------
// int global = 2023;

// void test()
// {
//     printf("test()--%d\n",global);
// }
// int main()
// {
//     printf("%d\n",global);
//     return 0;

// }

//----------------------------
// int main()
// {
//     //计算两数和
//     int num1 = 0;
//     int num2 = 0;
//     int sum = 0;
//     //输入数据-输入函数scanf
//     scanf("%d%d",&num1,&num2);
//     sum = num1+num2;
//     printf("%d\n",sum);
//     return 0;
// }
//------------------------------
// int a = 100;

// int main()
// {
//     int a = 10;
//     printf("%d\n",a);

// }
