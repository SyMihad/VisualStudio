#include<stdio.h>
#include<string.h>

float getPoint(float point, float credit){
    return point*credit;
}

int main(){
    printf("Enter total number of courses: ");
    int n;
    scanf("%d", &n);
    float credit[n];
    char result[n][n];
    int totalCredit=0;
    for(int i=0;i<n;i++){
        printf("Enter course %d credit: ",i+1);
        scanf("%f",&credit[i]);
        totalCredit+=credit[i];
        printf("Enter course %d result: ",i+1);
        scanf("%s",result[i]);
    }

    float totalPoint=0;
    for(int i=0; i<n; i++){

        if(!strcmp(result[i],"A+")){
            totalPoint+=getPoint(4.00, credit[i]);
        }
        else if(!strcmp(result[i],"A")){
            totalPoint+=getPoint(3.75, credit[i]);
        }
        else if(!strcmp(result[i],"A-")){
            totalPoint+=getPoint(3.50, credit[i]);
        }
        else if(!strcmp(result[i],"B+")){
            totalPoint+=getPoint(3.25, credit[i]);
        }
        else if(!strcmp(result[i],"B")){
            totalPoint+=getPoint(3.00, credit[i]);
        }
        else if(!strcmp(result[i],"B-")){
            totalPoint+=getPoint(2.75, credit[i]);
        }
        else if(!strcmp(result[i],"C+")){
            totalPoint+=getPoint(2.50, credit[i]);
        }
        else if(!strcmp(result[i],"C")){
            totalPoint+=getPoint(2.25, credit[i]);
        }
        else if(!strcmp(result[i],"D")){
            totalPoint+=getPoint(2.00, credit[i]);
        }
        else if(!strcmp(result[i],"F")){
            totalPoint+=getPoint(0.00, credit[i]);
        }
        
        
    }

    printf("Total CGPA: %f", totalPoint/totalCredit);

    return 0;
}