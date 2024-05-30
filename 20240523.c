#include <stdio.h>
#define AL 5    
int main(){
    int s_list[AL]={5,4,1,3,2};//// {1, 4, 5, 3, 2}
    int a,b,temp,sort;
    for(a=0;a<AL-1;a++)
    {
        sort=a; //sort = 0 / 1
        for(b=a+1;b<AL;b++){ // b=1, 2, 3, 4 / b=2, 3, 4
            if(s_list[b]<s_list[sort]) // s_list[1]<s_list[0], s_list[2]<s_list[1], s_list[3]<s_list[2], s_list[4]<s_list[2], 
                                        // s_list[2]<s_list[1], s_list[3]<s_list[1], s_list[4]<s_list[3], 
                sort=b;//sort=1, 2, -, - / sort=1, 3, 4
        }
        temp=s_list[a];//temp = 5 / 4
        s_list[a]=s_list[sort];// {1, 4, 1, 3, 2} / {1, 2, 5, 3, 2} /
        s_list[sort]=temp;// {1, 4, 5, 3, 2} / {1, 2, 5, 3, 4} /
        for(int z=0;z<AL;z++)
        {
            printf("%d",s_list[z]);   
        }
        printf("\n");

    }
    for(a=0;a<AL;a++)
        printf("%d",s_list[a]);

    return 0;
}