#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <signal.h>



void handle_interupt(int sigint)
{
    // close everything ex: ports, sockets, files etc
    printf("[VN] Program Successfully Stopped");
}



int main(int argc, char* argv[])
{    
    signal(SIGINT, handle_interupt);
    char buffer[8] = {0};
 
    gets(buffer);
    int x = 0;

    if(x != 0)
    {
        printf("worked");
    }

}


