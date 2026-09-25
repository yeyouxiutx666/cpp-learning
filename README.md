# cpp-learning
my cpp learning codes
## 2026-9-25
复习c++内容单行多行注释，常量变量，整型类型，sizeof，浮点型，字符型，转义字符，字符串，布尔型，简单运算，前置后置递增，逻辑运算符，三目运算符，选择，三大循环，结束循环  
单行注释：// 多行注释：/* */   
### 定义常量1.  
#define 变量名 常量值 (tips : 1.这里的常量称为宏常量 2.常量值的类型不同用的符合不同，数字直接写，字符用单引，字符串用双引 3.一般define定义常量写在main函数之上 4.语句后面不需要加分号  
### 定义常量2.  
const 数据类型 常量名 = 常量值 ; (tips : 1.末尾需要加分号 2.一般写在main函数内  
变量的命名不用关键字，需要开头为字母或者下划线且区分大小写  
### 整型类型  
#### 1.short短整型  
占用空间2字节 取值范围(-2^15 ~ 2^15-1)  
#### 2.int整型  
占用空间4字节 取值范围(-2^31 ~ 2^31-1)  
#### 3.long长整型 占用空间Windows中为4字节，Linux32位中为4字节，Linux64位中为8字节 取值范围(-2^31 ~ 2^31-1)  
#### 4.long long长整型  
占用空间8字节 取值范围(-2^63 ~ 2^63-1) (tips : 1. int or long or long long可以用来强行截断小数部分，只保留整数部分。用法(int)x 2.向下取整floor() 向上取整ceil()  
### sizeof求数据占用空间  
eg：sizeof(数据类型或变量名)  
### 浮点型  
float7位有效数字，double15~16位有效数字，有效数字包括小数点前面的数字，为避免精度误差，可先将数据转换为整型再进行计算  
### 字符型  
char 变量名 = ' ',占用1字节，对于ASCII码，常见a=97 A=65，可用(int)变量名进行查看ASCII码  
### 转义字符  
\n \\ \t水平制表符 \\为输出一个反斜杠，\t水平制表符用8个字母位置让后续内容对齐，若前面内容超过8字母，会跳到下一个8 (tips:对齐也可以setw(num)来进行，包含在头文件<iomanip>中  
### 字符串  
char 变量名[] = " " or string 变量名 = " " (string需要引入头文件string  
### 布尔型 bool 1 true 0 false ,bool x = true ; 非0即为真  
### cin >> cout <<  
### %取余 /除留int  
### 前置递增后置递增  
前置先加1 ++x x++,可单独成行和写入表达式  
### 逻辑运算符  
!非 &&与 ||或 ， !x 若x为假则!x为真 int x = 10 ; !x=0(非0即为真  
### 三目运算符  
表达式1 ? 表达式2 : 表达式3 ; 若1为真则执行2，若1为假则执行3，并返回值，eg1. int a = 10; int b = 20; int c = 0; c = (a>b ? a : b) //c=20 eg2.int a = 10; int b = 20; int c = 0; (a<b ? a : b) = 100 //a=100,b=20  
### 选择语句  
switch (code)  
{  
case result1 : code1 ; break;  
case result2 : code2 ; break;  
...  
default : code ; break;  
}  
### 循环  
#### 1.while循环  
while (condition) {code} //if the condition is true,execute the code.  
#### 2.do...while  
do{code} while (condition),先执行一次code再判断后续condition是否为真  
#### 3.for  
for (起始表达式;condition;末尾循环体) {code} 起始表达式不参与循环，可以写在循坏体之外，末尾循环体为结束一次循环后运行，可以写到code内  

### break跳出循环和选择 continue 跳出本次循环  
### goto语句  
goto FLAG ;  
...  
FLAG:  
跳转到FLAG后的代码运行，flag可以换成其他的，一般用全大写，如果flag写goto之前，可以无限循环  
