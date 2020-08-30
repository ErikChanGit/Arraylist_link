/*
 * arraylist_link.c
 *
 *  Created on: 2017Äê11ÔÂ3ÈÕ
 *      Author:erik
 */

#include <stdio.h>
#include <stdlib.h>
#include "arraylist_link.h"

struct arraylist_link *arraylist_link_init(){
	struct arraylist_link *list;
	list = (struct arraylist_link*)malloc(sizeof(struct arraylist_link));
	list->head = (struct arraylist_link_node *)malloc(sizeof(struct arraylist_link));
	list->head->element = -1;
	list->head->next = NULL;
	list->tail = list->head;
	list->count = 0;
	return list;
}

void arraylist_link_instert(struct arraylist_link *list,int index,int value){
	struct arraylist_link_node *node,*p;
	int i=-1;
	node = list->head;
	while(node!=NULL && i<index-1){
		node = node->next;
		i++;
	}
	p=(struct arraylist_link_node *)malloc(sizeof(struct arraylist_link_node));
	p->element = value;
	p->next =NULL;
	p->next = node->next;
	node->next = p;
	list->count++;
}

void arraylist_link_add(struct arraylist_link *list,int value){
	struct arraylist_link_node *p;
	p=(struct arraylist_link_node *)malloc(sizeof(struct arraylist_link_node));
	p->element = value;
	p->next =NULL;
	list->tail->next = p;
	list->count++;
}

void arraylist_link_lookup(struct arraylist_link *list){
	struct arraylist_link_node *node;
	node = list->head;
	while(node!=NULL){
		node = node->next;
		printf(node->element+"\n");
	}
}

void arraylist_link_free(struct arraylist_link *list){
		struct arraylist_link_node *node,*p;
		node=list->head;
	    while(node->next!=NULL)
	    {
	         p=node->next;
	         node->next=p->next;
	         free(p);
	    }
	    list->count=0;
	    free(list);
}

