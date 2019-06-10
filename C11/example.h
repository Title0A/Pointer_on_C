#ifndef _EXAMPLE_H
#define _EXAMPLE_H

//包含零件专用信息的结构
typedef struct {

	int cost;
	int supplier;

	/*其他信息*/

}Partinfo;
typedef struct SUBASSYPART{
		char partno[10];
		short quan;
		
}SUBASSYPART,*part;

/*
**存储装配件专用信息的结构
*/
typedef struct {

	int n_parts;
	SUBASSYPART *SUB;

}Subassyinfo;

/*
**存货记录结构，变体记录
*/

typedef struct{

	char partno[10];
	int quan;
	enum{ PART, SUBASSY} type;
	union{
		Partinfo *part;
		Subassyinfo *subassy;
	}info;

}Invrec;


typedef struct node_tag{
	int i;
	struct node_tag *p;

}node,*p_node;


#endif /*_EXAMPLE_H*/




