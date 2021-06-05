#include<math.h>
void total(double meal, double tip,double tax)

{
    double sum;
    int s;
    sum=meal+tip+tax;
    s=round(sum);
    printf("%d",s);
    
}
int main()
{
    double meal;
    int tip,tax;
    double t,tx;

    scanf("%lf",&meal);
    scanf("%d",&tip);
    scanf("%d",&tax);

    t=(tip*meal)/100;
    tx=(tax*meal)/100;

    total(meal,t,tx);


    return 0;

}
    

