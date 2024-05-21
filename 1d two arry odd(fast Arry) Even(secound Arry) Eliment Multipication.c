#include<stdio.h>
void main()
{   int o=0,e=0;
    int num[]={1,2,3,4,5,6,8,7,9};
    int num1[]={1,2,3,4,5,6,7,8};
    int length = sizeof(num) / sizeof(num[0]);
    int length1 = sizeof(num1) / sizeof(num1[0]);
    
    for(int i=0; i<length;i++){
        if(num[i]%2!=0){
            o++;
        }
    }
    for(int i=0; i<length1;i++){
        if(num1[i]%2==0){
            e++;
        }
    }
    int l=o<e?e:o;
    //printf("%d odd, %d Even,%d\n",o,e,l);
    int gnum[l];
    int o1=0,e1=0,o2,e2,o3,e3;
    for(int i=0; i<(l); i++){
        for(int j=o1;j<length;j++){
            if(num[j]%2!=0){
                o1++;
                o2=j;
                o3++;
                //printf("%d odd\n",num[j]);
                break;
            }   
        }
        for(int j=e1;j<length1;j++){
            if(num1[j]%2==0){
                e1++;
                e2=j;
                e3++;
                //printf("%d even\n",num1[j]);
                break;
            }   
        }
        if(o3==e3){
        gnum[i]=num[o2]*num1[e2];
        }else if(o3<e3){
            gnum[i]=num1[e2];
        }else{
            gnum[i]=num[o2];
        }
        o1++;
        e1++;
    }
    for(int i=0; i<l; i++){
        printf("%d ",gnum[i]);
    }
}