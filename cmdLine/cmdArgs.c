/*
prints cmd args

@author: Derek Garcia
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
Prints command line args

@param argc number of arguments
@param argv array of all given args
*/
int main( int argc, char* argv[] ){
        printf( "Command line Args.\n" );
        printf( "my pid is %d\n", getpid(  ) );

        // print each arg
        for( int i = 0; i < argc; i++ ){
                printf( "arg[%d] = %s\n", i, argv[i] );
        }

        return EXIT_SUCCESS;
}
