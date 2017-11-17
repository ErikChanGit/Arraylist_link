/*
 * arraylist_link.h
 *
 *  Created on: 2017Äê11ÔÂ3ÈÕ
 *      Author: admin
 */

#ifndef ARRAYLIST_LINK_H_
#define ARRAYLIST_LINK_H_
#define Bool int
#define true 1
#define false 0
struct arraylist_link{

	struct arraylist_link_node *head;
	struct arraylist_link_node *tail;
	int count;

};

struct arraylist_link_node{

	int element;
	struct arraylist_link_node *next;

};

void arraylist_link_add(struct arraylist_link *list,int value);

struct arraylist_link *arraylist_link_init();

void arraylist_link_free(struct arraylist_link *list);

int arraylist_link_get(struct arraylist_link *list,int index);

void arraylist_link_instert(struct arraylist_link *list,int index,int value);

void arraylist_link_clear(struct arraylist_link *list);

void arraylist_link_remove(struct arraylist_link *list,int index);

int arraylist_link_count(struct arraylist_link *list);

Bool arraylist_link_isExist(struct arraylist_link *list,int value);

int arraylist_link_get(struct arraylist_link *list,int value);

void arraylist_link_lookup(struct arraylist_link *list);

void arraylist_link_hahah(struct arraylist_link *list);

#endif /* ARRAYLIST_LINK_H_ */

