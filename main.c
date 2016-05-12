#include <stdio.h>
#include "cp936.h"

int main(){
	char string[1000] = {0xb4, 0xed, 0xce, 0xf3, 0x31, 0x32, 0x33, 0x00};
	Gb2312ToUtf8(string, sizeof(string));
	printf("%s\n", string);
	return 0;
}