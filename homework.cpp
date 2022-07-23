#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <stdlib.h>
#include <netinet/in.h>
#include <string>

int main(int argc, char*argv[]){
    
	FILE* fp = NULL;
	FILE* fp2 = NULL;
    uint32_t buf[1];
	uint32_t buf2[1];
	//char name1[100];
	//char name2[100];
	//std::string file_name = name1;
	//std::string file_name2 = name2;
    fp = fopen(argv[1],"r");
    if(fp == NULL)
    {
        printf("open error\n");
        return 1;
    }
    fread(buf,sizeof(4),1,fp);
	fclose(fp);
	uint32_t buf_change = htonl(buf[0]);
	fp2 = fopen(argv[2],"r");
    if(fp2 == NULL)
    {
        printf("open error\n");
        return 1;
    }
    fread(buf2,sizeof(4),1,fp2);
	fclose(fp2);
	uint32_t buf_change2 = htonl(buf2[0]);
	uint32_t add = buf_change+buf_change2;
	uint32_t byte_result = static_cast<uint32_t>(add);
    printf("out : 0x%x\n",buf_change);
	printf("out : 0x%x\n",buf_change2);
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",buf_change,static_cast<int>(buf_change),buf_change2,static_cast<int>(buf_change2),buf_change+buf_change2,byte_result);
	
}	