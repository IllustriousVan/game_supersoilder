#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

float x,y;
char area;
int w,wa;


int main()
{
 	srand(time(NULL));
	
	printf("请输入你降落地点的X坐标：");
	scanf("%f",&x);
	printf("请输入你降落地点的Y坐标：");	
	scanf("%f",&y);
	
	if(x < 0 || x > 779 || y < 0 || y > 562){//外 
		printf("\n\n你落在了任务区外!");
		printf("\n\n任务失败!");
		area	=	'n';				
	}
	else if(x>=0 && x<=779 && y>481 && y<=562){//A 
		area	=	'A';
		printf("\n\n你现在在%c区，小心地雷！",area);
		
	}
	else if(x>=0 && x<155 && y>160 && y<481){//B
		printf("\n\n你现在在%c区，小心有陷阱！",area);	
		area	=	'B';
	
	}
	else if(x>=0 && x<=779 && y>=0 && y<160){//C
		area	=	'C';
		printf("\n\n你现在在%c区，小心敌人埋伏！",area);		
	}
	else if(x>457 && x<=779 && y>160 && y<481){//D
		area	=	'D';
		printf("\n\n你现在在%c区，可以补充武器！",area);		
	}
	else if(x>155 && x<457 && y>160 && y<481){//O
		area	=	'O';	
		printf("\n\n你现在在%c区，快去解救人质！",area);			
	}
	else{//ELECT
		printf("\n\n你落在了区域边界电网上！");	
		printf("\n\n任务失败！");
		area	=	'e';				
	}
	
	

	switch(area){
		case 'A':
			printf("\n\n\n你捡到了一个数字赌盘，"\
			"门卫要求与你比赌盘上的数字大小,\n"\
			"如果你的赌盘上的数字大于门卫赌盘上的数字，" \
			"他就会让你进入O区，否则你的任务失败！\n" \
			"请键入任意键生成你的幸运数字！\n\n");
			getch();
			w	=	rand()%100;
			printf("\n你的幸运数字是%d！\n",w);
			
			printf("\n门卫拿起了他的数字赌盘，\n"\
			"请你按下任意键生成门卫的死亡数字！\n");	
			getch();
			wa	=	rand()%10+80;
			printf("\n门卫的死亡数字是%d！\n",wa);			
			if(w >= wa){
				printf("\n成功进入人质O区，解救人质成功！\n\n");
			}	
			else{
				printf("\n地雷爆炸，任务失败！\n\n");
			}	
			break;
			
		case 'B':
			printf("\n\n\n你捡到了一个数字赌盘，"\
			"门卫要求与你比赌盘上的数字大小,\n"\
			"如果你的赌盘上的数字大于门卫赌盘上的数字，" \
			"他就会让你进入O区，否则你的任务失败！\n" \
			"请键入任意键生成你的幸运数字！\n\n");
			getch();
			w	=	rand()%100;
			printf("\n你的幸运数字是%d！\n",w);
			
			printf("\n门卫拿起了他的数字赌盘，\n"\
			"请你按下任意键生成门卫的死亡数字！\n");	
			getch();
			wa	=	rand()%10+45;
			printf("\n门卫的死亡数字是%d！\n",wa);			
			if(w >= wa){
				printf("\n成功进入人质O区，解救人质成功！\n\n");
			}	
			else{
				printf("\n掉入陷阱，任务失败！\n\n");
			}	
			break;
							
		case 'C':
			printf("\n\n\n你捡到了一个数字赌盘，"\
			"门卫要求与你比赌盘上的数字大小,\n"\
			"如果你的赌盘上的数字大于门卫赌盘上的数字，" \
			"他就会让你进入O区，否则你的任务失败！\n" \
			"请键入任意键生成你的幸运数字！\n\n");
			getch();
			w	=	rand()%100;
			printf("\n你的幸运数字是%d！\n",w);
			
			printf("\n门卫拿起了他的数字赌盘，\n"\
			"请你按下任意键生成门卫的死亡数字！\n");	
			getch();
			wa	=	rand()%10+60;
			printf("\n门卫的死亡数字是%d！\n",wa);			
			if(w >= wa){
				printf("\n成功进入人质O区，解救人质成功！\n\n");
			}	
			else{
				printf("\n遭到伏击，任务失败！\n\n");
			}	
			break;
						
		case 'D':
			printf("\n\n\n你捡到了一个数字赌盘，"\
			"门卫要求与你比赌盘上的数字大小,\n"\
			"如果你的赌盘上的数字大于门卫赌盘上的数字，" \
			"他就会让你进入O区，否则你的任务失败！\n" \
			"请键入任意键生成你的幸运数字！\n\n");
			getch();
			w	=	rand()%100;
			printf("\n你的幸运数字是%d！\n",w);
			
			printf("\n门卫拿起了他的数字赌盘，\n"\
			"请你按下任意键生成门卫的死亡数字！\n");	
			getch();
			wa	=	rand()%10+10;
			printf("\n门卫的死亡数字是%d！\n",wa);			
			if(w >= wa){
				printf("\n成功进入人质O区，解救人质成功！\n\n");
			}	
			else{
				printf("\n武器丢失，任务失败！\n\n");
			}	
			break;
									
		case 'O':
			printf("任务完成，救出人质！\n\n");									
	}
	
}
