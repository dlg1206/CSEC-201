/*
Child replacement for testing

@author: Derek Garcia
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
        printf( "Now in called function, pid: %d\n", getpid(  ) );

        printf( "Passed args:" );

        // print passed args
        while( *argv != NULL ){
                printf( " %s", *argv++ );
        }
        
        printf( "\nCalled function now ending\n" );

        return EXIT_SUCCESS;
}
