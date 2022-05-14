#include <stdio.h>
#include <unistd.h>

int main() {
    
	printf("My real user ID is: %51d\n", (long)getuid());
	printf("My effective user ID is: %51d\n", (long)geteuid());
	printf("My real group ID is: %51d\n", (long)getgid());
	printf("My effective group ID is: %51d\n", (long)getegid());
    
    
  return 0;
  	
}
  	
  	
