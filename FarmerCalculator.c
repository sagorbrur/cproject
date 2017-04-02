#include<stdio.h>
int main()
{
    int a,d,n;
    double tola,sotak,ser,mon,atola,asotak,aser,amon,ttola,tsotak,tser,tmon;
    printf("welcome to Farmer's calculator.\n");
    printf("\n");
    while(5){
    printf("Apni ki hisab korte can?\n");
    printf("1. Dam ber korte can:\n2. Poriborton korte can:\n");
    scanf("%d",&a);
    switch(a){
    case 1:
    {
        printf("Apni kiser dam ber korte can?\n");
        printf("1.tolar\n2.sotaker\n3.serer\n4.moner\n");
        scanf("%d",&d);
        switch(d){
        case 1:
        {
            printf("tolar poriman o proti tolar dam input din\n");
            scanf("%lf %lf",&tola,&atola);
            ttola=tola*atola;
            printf("%.3lf tolar dam %.3lf taka kore %.3lf taka hoy\n",tola,atola,ttola);
        }
        break;
        case 2:
        {
            printf("sotaker poriman o proti sotaker dam input din\n");
            scanf("%lf %lf",&sotak,&asotak);
            tsotak=sotak*asotak;
            printf("%.3lf sotaker dam %.3lf taka kore %.3lf taka hoy\n",sotak,asotak,tsotak);
        }
        break;
        case 3:
        {
            printf("serer poriman o proti serer dam input din\n");
            scanf("%lf %lf",&ser,&aser);
            tser=ser*aser;
            printf("%.3lf serer dam %.3lf taka kore %.3lf taka hoy\n",ser,aser,tser);
        }
        break;
        case 4:
        {
            printf("moner poriman o proti moner dam input din\n");
            scanf("%lf %lf",&mon,&amon);
            tmon=mon*amon;
            printf("%.3lf moner dam %.3lf taka kore %.3lf taka hoy\n",mon,amon,tmon);
        }
        break;
        }
    }
    break;
    case 2:
    {
        printf("apni ki poriborton korte can?\n");
    printf("1.tola theke sotak \n2.sotak theke tola\n");
    printf("3.sotak theke ser \n4.ser theke sotak\n");
    printf("5.ser theke mon\n6.mon theke ser\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("tolar poriman din:\n");
            scanf("%lf",&tola);
            sotak=(tola/5);
            printf("%.3lf tolay %.3lf sotak hoy.\n",tola,sotak);
        }
        break;
        case 2:
        {
            printf("sotaker poriman din:\n");
            scanf("%lf",&sotak);
            tola=(sotak*5);
            printf("%.3lf sotake %.3lf tola hoy.\n",sotak,tola);
        }
        break;
        case 3:
        {
            printf("sotaker poriman din:\n");
            scanf("%lf",&sotak);
            ser=(sotak/16);
            printf("%.3lf sotake %.3lf ser hoy.\n",sotak,ser);
        }
        break;
        case 4:
        {
            printf("serer poriman din:\n");
            scanf("%lf",&ser);
            sotak=(ser*16);
            printf("%.3lf sere %.3lf sotak hoy.\n",ser,sotak);
        }
        break;
        case 5:
        {
            printf("serer poriman din:\n");
            scanf("%lf",&ser);
            mon=(ser/40);
            printf("%.3lf sere %.3lf mon hoy.\n",ser,mon);
        }
        break;
        case 6:
        {
            printf("moner poriman din:\n");
            scanf("%lf",&mon);
            ser=(mon*40);
            printf("%.3lf mone %.3lf ser hoy.\n",mon,ser);
        }
        break;
    }
    }
    break;
    }
    printf("\n");
    printf("Thank you for using Farmer's calculator.\n");
    printf("programed by Sagor Chandro Sarker\n");
}
    return 0;
}
