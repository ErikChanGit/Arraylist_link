/*
 * main.c
 *
 *  Created on: 2017��11��3��
 *      Author: admin
 */

#include <stdio.h>
#include <stdlib.h>
#include "arraylist_link.h"

int main(){

	struct arraylist_link *list = arraylist_link_init();
	arraylist_link_add(list,111111111111111);
	arraylist_link_add(list,2);
	arraylist_link_add(list,999);
	arraylist_link_add(list,10012131211);
	arraylist_link_add(list,1112999);
	arraylist_link_lookup(list);
	arraylist_link_free(list);
	return 0;

}

