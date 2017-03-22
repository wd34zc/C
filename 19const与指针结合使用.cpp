/*const与指针结合使用*/

//有错误的代码！ 
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};//建立一个数组 
	for(int i=0;i<5;i++)
	   printf("%3d",a[i]);
	putchar('\n');
	
//申明指针
	const int * pi1 = a;
	/*
	使指向的地址对应的数是常数，不可以通
	过pi1指针改变该地址的值，但可以改变地
	址。
	ps:可以通过改变数组的方式改变该值，因
	为该值并非常数。 
	*/
    pi1[0]=2;//............................................error！ 
	a[0]=2;//编译正常 
	pi1=a+1;//pi1[0]==a[1] .... 编译正常 
	
	int * const pi2 = a;
	/*
	不可以改变指针所指位置，但可以通过该指针
	改变指针所指位置对应的量。 
	*/
	pi2[0]=2; //编译正常  
	a[0]=2;//编译正常 
	pi2=a+1;//............................................error! 
	
	return 0;
 } 
