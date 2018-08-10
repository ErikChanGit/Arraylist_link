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
	arraylist_link_add(list,2);
	arraylist_link_add(list,3);
	arraylist_link_add(list,52);
	arraylist_link_add(list,62);
	arraylist_link_add(list,11);
	arraylist_link_add(list,12;
	arraylist_link_add(list,13);
	arraylist_link_add(list,17);
	arraylist_link_lookup(list);
	arraylist_link_free(list);
	return 0;

}

