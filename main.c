 #include <stdio.h>

int main()
{
 int x=0x11223344;
 char*ptr=(char*)&x;
 if(*ptr==0x44)printf("little Endian");
 else printf("Big Endian");

return 0;
}



