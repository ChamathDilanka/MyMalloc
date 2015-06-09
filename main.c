#include <stdio.h>
#include "mymalloc.h"


int main(){

void* addr = MyMalloc(1000);
printf("%x\n",addr);
void * a=addr;
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
void * addr1 = MyMalloc(1000);
printf("addr1 = %x\n",addr1);
void * addr2 = MyMalloc(1000);
printf("addr2 = %x\n",addr2);
void * addr3 = MyMalloc(1000);
printf("addr3 = %x\n",addr3);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr1 = MyMalloc(1000);
printf("%x\n",addr1);
addr = MyMalloc(1000);
printf("%x\n",addr);
/*addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);




addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);
addr = MyMalloc(1000);
printf("%x\n",addr);*/
MyFree(addr1);
MyFree(addr);
addr1 = MyMalloc(2005);
printf("addr1 = %x\n", addr1);

printf("addr2 = %x\n", addr2);
printf("addr3 = %x\n", addr3);

MyFree(addr1);
MyFree(addr3);
MyFree(addr2);

addr1 = MyMalloc(3010);
printf("addr1 = %x\n", addr1);

MyFree(addr1);
printf("1******\n");
MyFree(addr);
printf("2******\n");
addr1 = MyMalloc(4010);
printf("addr1 = %x\n", addr1);
int x;
for(x = 19; x > 0; x--)
{
	printf("Current a = %x\n", a);
	MyFree(a);
	a = a+0x3ed;
}

printf("new last = %x\n", MyMalloc(19995));

return 0;
}
