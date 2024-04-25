/**
Chen Mingxi, GTIIT MCS


This program applied OOP paradigm.

Object & funcs belong to Object:
	Object: 
		Attack 
		Warrier
	funcs: 
		obj_init()       receive init paramaters, return initialized obj	
		obj_echo()       receive specific obj only, echo info
		obj_other_func() receive specific obj only
		
**/
#include "warrier.c" 
void battle_init(struct Warrier *warrier1,struct Warrier *warrier2){
	struct Attack atks_1[2]={
		Attack_init("myname1", Fire, 2.31, 0.98),
		Attack_init("myname2", Fire, 2.31, 0.98),
	};
	*warrier1 = Warrier_init("warrier1",11.1,Fire, 3 , 2,atks_1);
	struct Attack atks_2[3]={
		Attack_init("myname1", Fire, 2.31, 0.98),
		Attack_init("myname2", Fire, 2.31, 0.98),
		Attack_init("myname3", Fire, 2.31, 0.98),
	};
	*warrier2 = Warrier_init("warrier2",11.1,Fire, 3 , 3,atks_2);
}
void fight(struct Warrier *warrier1,struct Warrier *warrier2){
	// 1 is attack side
	printf("%s takes their turn\n\n", warrier1->name); 
	Warrier_echo(*warrier1);
	printf("Choose your attack: ");
	int atk_idx;
	scanf("%d", &atk_idx);
	
	printf("tt %f\n", Warrier_getDamage(*warrier1, *((warrier1->atks)+1)));
	warrier2->hp = warrier2->hp - Warrier_getDamage(*warrier1, *((warrier1->atks)+atk_idx-1));
	printf("%d", warrier2->hp);
}
void battle_start(struct Warrier *warrier1,struct Warrier *warrier2){
	//start
	int turn =1;
	while(warrier1->hp >0 && warrier2->hp >0 ){
		if (turn){
			fight(warrier1, warrier2);
		}else{
			fight(warrier2, warrier1);
		}
		if(warrier1->hp <=0 || warrier1->hp <=0){
			if(turn){
				printf("%s lost.", warrier1->name);
			}else{
				printf("%s lost.", warrier2->name);
			}
		}
		turn = 0?1:0; 
	}
}
int main(){
	void start();
	struct Warrier warrier1, warrier2;
	battle_init(&warrier1, &warrier2);
	printf("debug2");
	Warrier_echo(warrier1); 
	battle_start(&warrier1, &warrier2);
}