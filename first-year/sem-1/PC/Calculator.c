#include<stdio.h>
int main(void)
{
    int a,b,c,x,y,opt,opt2,delta,x1,x2,o,p,l,k,z,n,i,p2;
    printf("Meniu:\n1.Adunare\n2.Scadere\n3.Inmultire\n4.Impartire\n5.Meniul II\n6.Iesire\n");
    scanf("%d", &opt);
    if(opt>6)
        printf("Aceasta nu este o optiune!");
    if(opt==6)
    {
        return 0;
    }
    if(opt<5)
    {
        printf("Introduceti numerele: ");
        scanf("%d", &x);
        scanf("%d", &y);
        if(opt==1)
        {
            printf("Suma este: %d", x+y);
        }
        if(opt==2)
        {
            printf("Diferenta este: %d", x-y);
        }
        if(opt==3)
        {
            printf("Produsul este: %d", x*y);
        }
        if(opt==4)
        {
            printf("Catul este: %d", x/y);
        }
    }
    if(opt==5)
    {
        printf("Meniu II:\n7.Ecuatie de gradul II\n8.Minimul\n9.Maximul\n10.Puteri\n11.Iesire\n");
        scanf("%d", &opt2);
        if(opt2>11)
            printf("Aceasta nu este o optiune!");
        if(opt2==11)
            return 0;
        if(opt2==7)
        {
            printf("Introduceti coeficientii: ");
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            printf("Ecuatia este:  ");
            printf("%d", a);
            printf("x^2+(%d", b);
            printf(")x+(%d", c);
            printf(")=0\n");
            delta=b*b-4*a*c;
            printf("delta=%d\n");
            if(delta<0)
            {
                printf("Aceasta ecuatie nu are solutii reale!");
            }
            else
            {
                x1=(-b+sqrt(delta))/(2*a);
                x2=(-b-sqrt(delta))/(2*a);
                if(delta=0)
                    printf("x=%d", x1);
                else
                {
                    printf("x1=%d\n", x1);
                    printf("x2=%d\n", x2);
                }
            }
        }
        if(opt2==8)
        {
            printf("Introduceti numerele: ");
            scanf("%d", &o);
            scanf("%d", &p);
            if(p>=o)
                printf("Minimul este %d", o);
            else
                printf("Minimul este %d", p);
        }
        if(opt2==9)
        {
            printf("Introduceti numerele: ");
            scanf("%d", &l);
            scanf("%d", &k);
            if(l>=k)
                printf("Maximul este %d", l);
            else
                printf("Maximul este %d", k);
        }
        if(opt2==10)
        {
            i=1;
            p2=1;
            printf("Numarul ", z);
            scanf("%d", &z);
            printf("La puterea ", n);
            scanf("%d", &n);
            while(i<=n)
            {
                p2=p2*z;
                i++;
            }
            printf("Rezultatul este:%d", p2);
        }
    }
    return 0;
}
