
#include <stdio.h>
// para printf


#include <stdlib.h>
// para malloc and friends y size_t

#include <stdbool.h>
// para bool and friends

#include "DLL.h"

#include "defs.h"


void Print( int item )
{
	printf( "%d\n", item );
}

// función predicado:
bool less_than( int list_val, int user_val ){ return list_val < user_val; }




//----------------------------------------------------------------------
//  Driver program
//----------------------------------------------------------------------
int main(void)
{
	DLL* unaLista = DLL_New();

	DLL_Push_front(unaLista, 5);
	
	DLL_Cursor_front(unaLista);
	
	DLL_PrintStructure(unaLista);
	// el nombre de la función es su dirección
	DLL_Push_front(unaLista, 6);
	
    DLL_Erase(unaLista);
	
    DLL_Push_front(unaLista, 7);
	
	DLL_PrintStructure(unaLista);

	DLL_Delete( &unaLista );
	return 0;
}
