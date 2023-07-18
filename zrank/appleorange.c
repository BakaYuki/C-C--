#include <stdio.h>


int main(){
    int s,t,a,o;           // s = sams house starting & t = ending .. a = apple tree location .. o = orange tree location
    int m,n,muke;
    int apples,oranges;   //  with the location of fall
    int app=0,oran=0;  // amount that falls on sams house
    int i,temp=0;

    printf("\nEnter location of Sam's House\n");
    scanf("%d %d",&s,&t);

    printf("Enter locations of apple tree and orange tree\n");
    scanf("%d %d",&a,&o);
    printf("Enter the number of apples and oranges that will fall\n");
    scanf("%d %d",&m,&n);

    printf("Enter location of apples\n");
    for(i=0;i<m;i++){
        scanf("%d",&apples);
        temp = a + apples;
        if(temp>=s && temp <=t){
            app++;
        }
    }
    printf("Enter location of oranges\n");
    for(i=0;i<n;i++){
        scanf("%d",&oranges);
        temp = oranges + a;
        if(temp>=s && temp <=t){
            oran++;
        }
    }
    printf("%d\n",app);
    printf("%d",oran);
}

/*
Sam's house has an apple tree and an orange tree that yield an abundance of fruit. 
Using the information given below, determine the number of apples and oranges that land on Sam's house.



# House location in X-Axis: 's' is the start point, and 't' is the endpoint. 
The apple tree is to the left of the house, and the orange tree is to its right.
Assume the trees are located on a single point, where the apple tree is at point 'a', 
and the orange tree is at point 'o'.
When a fruit falls from its tree, it lands 'd' units of distance from its tree of origin along the X-axis. 
*A negative value of 'd' means the fruit fell 'd' units to the tree's left, and a positive value of 'd' means it falls 'd' 
units to the tree's right. *

For example, 
Sam's house is between s=7 and t=10 . 
The apple tree is located at a=4 and 
the orange at o = 12. 
There are m=3 apples and n=3 oranges. 
Apples are thrown apples[2,3,-4] units distance from a, and
oranges[3,-2,-4] units distance from 0. 
Adding each apple distance to the position of the tree, Apples land at [2+4,3+4,-4+4] = [6,7,0]. 
Oranges land at [3+12,-2+12,-4+12] = [15,10,8]. 
One apple and two oranges land in the inclusive range  so we print
1
2
*/
