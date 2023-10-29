#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"");
//border
rectangle(10,10,630,470);
//base
rectangle(20,420,620,430);
//main building
rectangle(40,280,120,420);
line(40,282,120,282);
rectangle(520,280,600,420);
line(520,282,600,282);
//building lines
line(120,290,520,290);
line(120,288,520,288);
line(120,300,520,300);
//colomn lines
line(40,295,120,295);
line(520,295,600,295);
//door
rectangle(295,320,340,420);
//center
line(120,360,295,360);
line(340,360,520,360);
//windows
//1st
rectangle(130,325,140,345);
rectangle(155,325,165,345);
rectangle(180,325,190,345);
rectangle(205,325,215,345);
rectangle(230,325,240,345);
rectangle(255,325,265,345);
//2nd
rectangle(370,325,380,345);
rectangle(395,325,405,345);
rectangle(420,325,430,345);
rectangle(445,325,455,345);
rectangle(470,325,480,345);
rectangle(495,325,505,345);
//3rd
rectangle(130,380,140,400);
rectangle(155,380,165,400);
rectangle(180,380,190,400);
rectangle(205,380,215,400);
rectangle(230,380,240,400);
rectangle(255,380,265,400);
//4th
rectangle(370,380,380,400);
rectangle(395,380,405,400);
rectangle(420,380,430,400);
rectangle(445,380,455,400);
rectangle(470,380,480,400);
rectangle(495,380,505,400);
//colomn box 1
rectangle(50,305,55,360);
rectangle(70,305,75,360);
rectangle(90,305,95,360);
rectangle(105,305,110,360);
//colomn box 2
rectangle(530,305,535,360);
rectangle(550,305,555,360);
rectangle(570,305,575,360);
rectangle(587,305,592,360);
//COLOMN CENTER LINE
line(40,365,120,365);
line(520,365,600,365);
//inner door
rectangle(297,322,338,420);
line(305,360,305,420);
line(331,360,331,420);
ellipse(318,360,0,180,13,15);
//dome
ellipse(318,215,0,180,20,20);
ellipse(318,220,0,180,23,9);
ellipse(318,234,0,180,30,9);
ellipse(318,242,0,180,30,9);
//rect
line(288,232,288,260);
line(347,260,347,232);
//upper
line(295,220,295,229);
line(341,220,341,229);
//side 2
rectangle(280,270,295,288);
rectangle(339,270,354,288);
ellipse(287,270,0,180,7,11);
ellipse(347,270,0,180,7,11);
ellipse(318,275,0,180,21,7);
ellipse(318,273,0,180,21,6);
//dome window
rectangle(295,245,300,260);
rectangle(335,245,340,260);
rectangle(313,240,322,260);
//flag pole
rectangle(314,187,321,195);
rectangle(310,184,325,187);
rectangle(317,160,318,184);
//flag
rectangle(318,160,346,175);
line(318,165,346,165);
line(318,170,346,170);
circle(332,168,3);
//column dome
line(65,255,65,280);
line(95,280,95,255);

line(545,255,545,280);
line(575,280,575,255);

ellipse(80,259,0,180,18,12);
ellipse(80,249,0,180,13,15);
ellipse(560,259,0,180,18,12);
ellipse(560,249,0,180,13,15);
rectangle(79,227,81,233);
rectangle(559,227,561,233);

//column window
rectangle(85,375,105,405);
line(95,375,95,405);
line(85,385,105,385);
line(85,395,105,395);
rectangle(55,375,75,405);
line(65,375,65,405);
line(55,385,75,385);
line(55,395,75,395);

rectangle(565,375,585,405);
line(575,375,575,405);
line(565,385,585,385);
line(565,395,585,395);
rectangle(535,375,555,405);
line(545,375,545,405);
line(535,385,555,385);
line(535,395,555,395);

//side dome window
rectangle(78,255,82,280);
rectangle(87,260,90,280);
rectangle(70,260,73,280);

rectangle(558,255,562,280);
rectangle(567,260,570,280);
rectangle(550,260,553,280);
getch();
closegraph();
}