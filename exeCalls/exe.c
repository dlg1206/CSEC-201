/*
example of execvp( )

@author: Derek Garcia
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
Attempt to call another function

*/
int main(  ){
        printf( "Init pid: %d\n", getpid( ));
        
        char* argvec[] = {"./childReplacement", "Hello", "Bye", NULL};

        if( execvp( argvec[0], argvec ) < 0){
                printf( "Exec Fails.\n" );
                exit( EXIT_FAILURE );
        }

        printf( "main ends.\n" );
}
