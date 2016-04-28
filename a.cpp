#include <stdio.h>

int main(){
	for(int x=2000;x<=2500;x++){
		if(x%4==0&&x%100!=0||x%400==0)
			printf("%d是闰年\n",x);
		else
			printf("%d不是闰年\n",x);

		//+++++
		//+++

	}
}