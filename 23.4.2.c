#include <stdio.h>
int main()
{
    // int arr[10];//定义一个存放十个整形数字的数组
    // char ch[20];
    // float arr2[5];
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[4]);//下标的访问元素 arr[下标]
    //0-9
    int i = 0;
    while(i<10)
    {
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}



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
    //数据在计算机存储的是二进制
    //#ab$
    //a - 97
    //a - 65
    //...
    //ASCII 编码
    //ASCII 码值
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
//define 定义标识符常量
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



//extern????????????????
// int main()
// {
//      extern int g_val; 
//     printf("g_val = %d",g_val);
//     return 0;
// }

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
    
