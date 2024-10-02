#include<stdio.h>
void main()
{
int h,ts, grade;
float cc;
printf("enter the value of hardness,carbon content and tensile strength.\n");
scanf("%d%f%d",&h,&cc,&ts);
if(h>50&&cc>0.7&&ts>5600){
grade=10;}
else if(h>50&&cc>0.7){
grade=9;}
else if(cc>0.7&&ts>5600){
grade=8;}
else if(h>50&&ts>5600){
grade=7;}
else if(h>50||cc>0.7||ts>5600){
grade=6;}
else if (!(h>50||cc>0.7||ts>5600)){
grade=5;}
printf("\ngrade = %d",grade);
}
