/*
 * main.c
 *
 *  Created on: 2017Äê11ÔÂ3ÈÕ
 *      Author: admin
 */

#include <stdio.h>
#include <stdlib.h>
#include "arraylist_link.h"

int main(){

	struct arraylist_link *list = arraylist_link_init();
	arraylist_link_add(list,1);
	arraylist_link_lookup(list);
	arraylist_link_free(list);
	return 0;

}

