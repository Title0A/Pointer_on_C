#ifndef _EXAMPLE_H
#define _EXAMPLE_H

//�������ר����Ϣ�Ľṹ
typedef struct {

	int cost;
	int supplier;

	/*������Ϣ*/

}Partinfo;
typedef struct SUBASSYPART{
		char partno[10];
		short quan;
		
}SUBASSYPART,*part;

/*
**�洢װ���ר����Ϣ�Ľṹ
*/
typedef struct {

	int n_parts;
	SUBASSYPART *SUB;

}Subassyinfo;

/*
**�����¼�ṹ�������¼
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




