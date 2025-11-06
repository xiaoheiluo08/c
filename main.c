#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "str_handle.h"

char a = 'a';                  
char *b = "abc";
char c[]="abcd";

char *d[]={"abc","efghijk"};

char arr[]="abcde";

char (*e)[6]=&arr;

int main()
{
    
    printf("sizeof(a):%d\r\n", sizeof(a));
    printf("sizeof(b):%d\r\n", sizeof(b));//b表示字符指针，指针在64位操作系统通常为8字节
    printf("sizeof(*b):%d\r\n", sizeof(*b));
    printf("sizeof(c):%d\r\n",sizeof(c));
    printf("sizeof(c):%d\r\n", sizeof(c));
    printf("sizeof(*c):%d\r\n", sizeof(*c));
    printf("strlen(b):%d\r\n", strlen(b));
    printf("strlen(c):%d\r\n", strlen(c));
    
    printf("sizeof(d):%d\r\n",sizeof(d));
    //printf("strlen(d):%d\r\n",strlen(d));
    
    printf("sizeof(d[0])):%d\r\n",sizeof(d[0]));
    printf("strlen(d[0]):%d\r\n",strlen(d[0]));

    printf("sizeof(e):%d\r\n",sizeof(e));//e是数组指针，类型为char (*)[]。指针在64位操作系统通常为8字节,
    printf("sizeof(*e):%d\r\n",sizeof(*e));//*e是数组，类型为char [6]
    printf("sizeof(**e):%d\r\n",sizeof(**e));//**e表示e指向的数组的第一个元素，类型为char
    printf("sizeof(*e[0]:%d\r\n",sizeof(*e[0]));//数组元素
    printf("strlen(*e):%d\r\n",strlen(*e));//*e相当于数组名，数组名相当于指针，strlen整个字符数组的长度

    printf("复制前c:%s\r\n",c);
    str_copy(c,b);
    printf("复制后c:%s\r\n",c);
<<<<<<< HEAD

    printf("该项目已上传gittub");
    printf("第一次尝试上传");
=======
>>>>>>> feb3411e0a838d3806a26de71eb4066b9c923811
    
}