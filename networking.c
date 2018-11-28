#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

#define  BUFF_SIZE   10024

int   main( int argc, char **argv)
{
    int                         hsocket;
    struct      sockaddr_in     server_addr;
    struct      hostent        *host_entry;
    char                       *p_enter= "\r\n";
    char                       *p_get= "GET / HTTP/1.1\r\n User-Agent: Mozilla/4.0\r\n content-type:text/html\r\n \
                                        Connection: close\r\n\r\n";
    char                        buff[BUFF_SIZE+1];

    host_entry = gethostbyname("www.kldp.org/node/25877");

    if ( !host_entry)
    {
        printf( "gethostbyname() 실행 실패/n");
        exit( 1);
    }

    hsocket = socket( PF_INET, SOCK_STREAM, 0);
    if( -1 == hsocket)
    {
        printf( "socket 생성 실패\n");
        exit( 1);
    }
    memset( &server_addr, 0, sizeof( server_addr));
    server_addr.sin_family     = AF_INET;
    server_addr.sin_port       = htons( 80);
    memcpy((void *)(&server_addr.sin_addr), (void *)(host_entry->h_addr),
                sizeof(server_addr.sin_addr));

    if( -1 == connect( hsocket, (struct sockaddr*)&server_addr, sizeof( server_addr) ) )
    {
       printf( "접속 실패n");
    }
    else
    {
        memset( buff, '\0', BUFF_SIZE+1);
        send( hsocket, p_get, strlen( p_get)+1, 0);
        if ( 0 == read( hsocket, buff, BUFF_SIZE))
        {
           printf( "웹 소스 구하기 실패\n");
        }
        else
        {
            printf( "%s\n", buff);
        }
        close( hsocket);
    }
    return 0;
}
