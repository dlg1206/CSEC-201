/*
Example forking program

@author: Derek Garcia
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
Makes a child process and prints its pid
Parent also prints pid
*/
int main( ){
        printf( "I'm a parent.\n" );
        pid_t pid = fork( );

        if( pid < 0 ){
                printf( "fork failed.\n" );
                exit( 1 );
        }
        
        // if pid == 0, then in child
        else if( !pid ){
                printf( "Child process id %d\n", getpid( ) );
                printf( "My parent pid: %d\n", getppid( ) );
                exit( 0 );
        }

        // In the parent process
        printf( "Parent process id: %d\n", getpid( ) );
        //wait( NULL );   // wait for child to finish
        
        return EXIT_SUCCESS;
}
