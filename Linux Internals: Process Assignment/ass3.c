// 3. A program that replaces old program with new program data and is expected to display the currently running processes in a hierarchical tree format.
#include<stdio.h>
#include<unistd.h>

int main(){
  
    int ret = execl("/usr/bin/pstree", "pstree", 0);

    if(ret == -1)
	{
        printf("execl returned error %d\n", ret);
	}
    return 0;
}
