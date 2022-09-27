#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141592654

struct equation{
	int a,b,c;
};

double find_angle(struct equation r1, struct equation r2){
	double k = ((r2.a * r1.b) - (r1.a * r2.b)) / ((r1.a * r2.a) + (r1.b * r2.b));
	double ans = atan(k);
	printf("\nAngle in Radians : %.2f",ans);
	ans = (ans * 180) / PI;
	if(ans < 0){
		ans = ans * -1;
	}
	return ans;
}

int main(){

	double angle_at_chowk;
	struct equation e1 = {5,1,-3};
	struct equation e2 = {2,3,1};
	angle_at_chowk = find_angle(e1, e2);
	printf("\nAngle at which these roads meets at 123 Chowk: %lf\n",angle_at_chowk);


	return 0;
}