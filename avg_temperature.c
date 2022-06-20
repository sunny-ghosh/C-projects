#include<stdio.h>
#include<conio.h>
int main()
{
    float Kolkata();
    float Bangalore();
    float Mumbai();
    float Delhi();
    float Hyderabad();
    float a = Kolkata();
    float b = Bangalore();
    float c = Mumbai();
    float d = Delhi();
    float e = Hyderabad();
    float arr[5]={a,b,c,d,e},temp;
    int x,y;
    for(x=0;x<4;x++)
    {
        for(y=0;y<4-x;y++)
        {
            if(arr[y]>arr[y+1])
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }
    printf("Sorted list of elements present in the array :-\n");
    for(x=0;x<5;x++)
    {
        printf(""The average temperature at   in 7 days of the week is"")
        printf("%f\t",arr[x]);
    }
    return 0;
}        
float Kolkata()
{
    int i;
    float k[7],sum = 0,avg;
    for(i=0;i<7;i++)
    {
        printf("Enter the maximum temperature reading at Kolkata in day %d of this week :- ",i+1);
        scanf("%f",&k[i]);
        sum = sum + k[i];
    }
    avg = sum/7.0;
    return avg;
    printf("The average temperature at Kolkata in 7 days of the week is %f",avg);
}
float Bangalore()
{
    int j;
    float b[7],sum1 = 0,avg1;
    for(j=0;j<7;j++)
    {
        printf("Enter the maximum temperature reading at Bangalore in day %d of this week :- ",j+1);
        scanf("%f",&b[j]);
        sum1 = sum1 + b[j];
    }
    avg1 = sum1/7.0;
    return avg1;
    printf("The average temperature at Bangalore in 7 days of the week is %f",avg1);
}
float Mumbai()
{
    int k;
    float m[7],sum2 = 0,avg2;
    for(k=0;k<7;k++)
    {
        printf("Enter the maximum temperature reading at Mumbai in day %d of this week :- ",k+1);
        scanf("%f",&m[k]);
        sum2 = sum2 + m[k];
    }
    avg2 = sum2/7.0;
    return avg2;
    printf("The average temperature at Mumbai in 7 days of the week is %f",avg2);
}
float Delhi()
{
    int l;
    float d[7],sum3 = 0,avg3;
    for(l=0;l<7;l++)
    {
        printf("Enter the maximum temperature reading at Delhi in day %d of this week :- ",l+1);
        scanf("%f",&d[l]);
        sum3 = sum3 + d[l];
    }
    avg3 = sum3/7.0;
    return avg3;
    printf("The average temperature at Delhi in 7 days of the week is %f",avg3);
}
float Hyderabad()
{
    int p;
    float h[7],sum4 = 0,avg4;
    for(p=0;p<7;p++)
    {
        printf("Enter the maximum temperature reading at Hyderabad in day %d of this week :- ",p+1);
        scanf("%f",&h[p]);
        sum4 = sum4 + h[p];
    }
    avg4 = sum4/7.0;
    return avg4;
    printf("The average temperature at Hyderabad in 7 days of the week is %f",avg4);
}



#include<stdio.h>
#include <stdlib.h>
typedef struct key_value
{
   int key;
   char value[30];
}List;

int  main()
{
    int i,j,m,n,temp;
 
    printf("Enter the number of cities: ") ;
    scanf("%d",&n) ;
    
    List arr[n + 1];
    
    for(m = 0;m<=n;m++){
        printf("Enter city number %d: ", m+1);
        scanf("%s",arr[m].value);
        
        printf("Enter temperature number %d: ", m+1);
        scanf("%d", &arr[m].key);
    }
 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i].key>arr[j].key)
            {
                temp=arr[i].key;
                arr[i].key=arr[j].key;
                arr[j].key=temp;
            }
        }
    }

    printf("\nTemperature sorted in ascending order are:\n\n");

    for(i=0;i<n;i++)
    {
        printf("%s - %d\n", arr[i].value ,arr[i].key) ;
    }
    
    return 0;
}