#include <Windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI        3.14159265358979323846
#include<stdio.h>
using namespace std;

int moonStatus = 1;
float moonX = 0;
float moonY = 0;
float moonSpeed = 1;

int rainStatus = 1;
float rainX = 0;
float rainY = 500;
float rainSpeed = 4;

int carStatus1 = 1;
float car1X = 0;
float car1Y = 0;
float carSpeed1 = 3;

int busStatus1 = 1;
float busX = 0;
float busY = 0;
float busSpeed1 = 3;

int ship1Status = 1;
float ship1X = 0;
float ship1Y = 0;
float ship1Speed1 = 2;

int ship2Status = 1;
float ship2X = 0;
float ship2Y = 0;
float ship2Speed = 2;

int ship3Status = 1;
float ship3X = 0;
float ship3Y = 0;
float ship3Speed = 2;

int car2Status = 1;
float car2X = 0;
float car2Y = 0;
float car2Speed = 4;

int trackStatus = 1;
float trackX = 0;
float trackY = 0;
float trackSpeed = 3;

int cloud1Status = 1;
float cloud1X = 0;
float cloud1Y = 0;
float cloud1Speed = 1;

int cloud2Status = 1;
float cloud2X = 0;
float cloud2Y = 0;
float cloud2Speed = 1;

int cloud3Status = 1;
float cloud3X = 0;
float cloud3Y = 0;
float cloud3Speed = 1;

int sunStatus = 1;
float sunX = 0;
float sunY = 0;
float sunSpeed = 1;

int planStatus = 1;
float planX = 0;
float planY = 0;
float planSpeed = 4;

void rain()
{
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(192,199,225);

glVertex2i(10,10);
glVertex2i(15,5);
glVertex2i(10,30);
glVertex2i(15,25);
glVertex2i(10,50);
glVertex2i(15,45);
glVertex2i(10,70);
glVertex2i(15,65);
glVertex2i(10,90);
glVertex2i(15,85);
glVertex2i(10,110);
glVertex2i(15,105);
glVertex2i(10,130);
glVertex2i(15,125);
glVertex2i(10,150);
glVertex2i(15,145);
glVertex2i(10,170);
glVertex2i(15,165);
glVertex2i(10,190);
glVertex2i(15,185);
glVertex2i(10,210);
glVertex2i(15,205);
glVertex2i(10,230);
glVertex2i(15,225);
glVertex2i(10,250);
glVertex2i(15,245);
glVertex2i(10,270);
glVertex2i(15,265);
glVertex2i(10,290);
glVertex2i(15,285);
glVertex2i(10,310);
glVertex2i(15,305);
glVertex2i(10,330);
glVertex2i(15,325);
glVertex2i(10,350);
glVertex2i(15,345);
glVertex2i(10,370);
glVertex2i(15,365);
glVertex2i(10,390);
glVertex2i(15,385);
glVertex2i(10,410);
glVertex2i(15,405);
glVertex2i(10,410);
glVertex2i(15,405);
glVertex2i(10,430);
glVertex2i(15,425);
glVertex2i(10,450);
glVertex2i(15,445);
glVertex2i(10,470);
glVertex2i(15,465);
glVertex2i(10,490);
glVertex2i(15,485);
glVertex2i(40,10);
glVertex2i(45,5);
glVertex2i(40,30);
glVertex2i(45,25);
glVertex2i(40,50);
glVertex2i(45,45);
glVertex2i(40,70);
glVertex2i(45,65);
glVertex2i(40,90);
glVertex2i(45,85);
glVertex2i(40,110);
glVertex2i(45,105);
glVertex2i(40,130);
glVertex2i(45,125);
glVertex2i(40,150);
glVertex2i(45,145);
glVertex2i(40,170);
glVertex2i(45,165);
glVertex2i(40,190);
glVertex2i(45,185);
glVertex2i(40,210);
glVertex2i(45,205);
glVertex2i(40,230);
glVertex2i(45,225);
glVertex2i(40,250);
glVertex2i(45,245);
glVertex2i(40,270);
glVertex2i(45,265);
glVertex2i(40,290);
glVertex2i(45,285);
glVertex2i(40,310);
glVertex2i(45,305);
glVertex2i(40,330);
glVertex2i(45,325);
glVertex2i(40,350);
glVertex2i(45,345);
glVertex2i(40,370);
glVertex2i(45,365);
glVertex2i(40,390);
glVertex2i(45,385);
glVertex2i(40,410);
glVertex2i(45,405);
glVertex2i(40,410);
glVertex2i(45,405);
glVertex2i(40,430);
glVertex2i(45,425);
glVertex2i(40,450);
glVertex2i(45,445);
glVertex2i(40,470);
glVertex2i(45,465);
glVertex2i(40,490);
glVertex2i(45,485);
glVertex2i(70,10);
glVertex2i(75,5);
glVertex2i(70,30);
glVertex2i(75,25);
glVertex2i(70,50);
glVertex2i(75,45);
glVertex2i(70,70);
glVertex2i(75,65);
glVertex2i(70,90);
glVertex2i(75,85);
glVertex2i(70,110);
glVertex2i(75,105);
glVertex2i(70,130);
glVertex2i(75,125);
glVertex2i(70,150);
glVertex2i(75,145);
glVertex2i(70,170);
glVertex2i(75,165);
glVertex2i(70,190);
glVertex2i(75,185);
glVertex2i(70,210);
glVertex2i(75,205);
glVertex2i(70,230);
glVertex2i(75,225);
glVertex2i(70,250);
glVertex2i(75,245);
glVertex2i(70,270);
glVertex2i(75,265);
glVertex2i(70,290);
glVertex2i(75,285);
glVertex2i(70,310);
glVertex2i(75,305);
glVertex2i(70,330);
glVertex2i(75,325);
glVertex2i(70,350);
glVertex2i(75,345);
glVertex2i(70,370);
glVertex2i(75,365);
glVertex2i(70,390);
glVertex2i(75,385);
glVertex2i(70,410);
glVertex2i(75,405);
glVertex2i(70,410);
glVertex2i(75,405);
glVertex2i(70,430);
glVertex2i(75,425);
glVertex2i(70,450);
glVertex2i(75,445);
glVertex2i(70,470);
glVertex2i(75,465);
glVertex2i(70,490);
glVertex2i(75,485);
glVertex2i(100,10);
glVertex2i(105,5);
glVertex2i(100,30);
glVertex2i(105,25);
glVertex2i(100,50);
glVertex2i(105,45);
glVertex2i(100,70);
glVertex2i(105,65);
glVertex2i(100,90);
glVertex2i(105,85);
glVertex2i(100,110);
glVertex2i(105,105);
glVertex2i(100,130);
glVertex2i(105,125);
glVertex2i(100,150);
glVertex2i(105,145);
glVertex2i(100,170);
glVertex2i(105,165);
glVertex2i(100,190);
glVertex2i(105,185);
glVertex2i(100,210);
glVertex2i(105,205);
glVertex2i(100,230);
glVertex2i(105,225);
glVertex2i(100,250);
glVertex2i(105,245);
glVertex2i(100,270);
glVertex2i(105,265);
glVertex2i(100,290);
glVertex2i(105,285);
glVertex2i(100,310);
glVertex2i(105,305);
glVertex2i(100,330);
glVertex2i(105,325);
glVertex2i(100,350);
glVertex2i(105,345);
glVertex2i(100,370);
glVertex2i(105,365);
glVertex2i(100,390);
glVertex2i(105,385);
glVertex2i(100,410);
glVertex2i(105,405);
glVertex2i(100,410);
glVertex2i(105,405);
glVertex2i(100,430);
glVertex2i(105,425);
glVertex2i(100,450);
glVertex2i(105,445);
glVertex2i(100,470);
glVertex2i(105,465);
glVertex2i(100,490);
glVertex2i(105,485);
glVertex2i(130,10);
glVertex2i(135,5);
glVertex2i(130,30);
glVertex2i(135,25);
glVertex2i(130,50);
glVertex2i(135,45);
glVertex2i(130,70);
glVertex2i(135,65);
glVertex2i(130,90);
glVertex2i(135,85);
glVertex2i(130,110);
glVertex2i(135,105);
glVertex2i(130,130);
glVertex2i(135,125);
glVertex2i(130,150);
glVertex2i(135,145);
glVertex2i(130,170);
glVertex2i(135,165);
glVertex2i(130,190);
glVertex2i(135,185);
glVertex2i(130,210);
glVertex2i(135,205);
glVertex2i(130,230);
glVertex2i(135,225);
glVertex2i(130,250);
glVertex2i(135,245);
glVertex2i(130,270);
glVertex2i(135,265);
glVertex2i(130,290);
glVertex2i(135,285);
glVertex2i(130,310);
glVertex2i(135,305);
glVertex2i(130,330);
glVertex2i(135,325);
glVertex2i(130,350);
glVertex2i(135,345);
glVertex2i(130,370);
glVertex2i(135,365);
glVertex2i(130,390);
glVertex2i(135,385);
glVertex2i(130,410);
glVertex2i(135,405);
glVertex2i(130,410);
glVertex2i(135,405);
glVertex2i(130,430);
glVertex2i(135,425);
glVertex2i(130,450);
glVertex2i(135,445);
glVertex2i(130,470);
glVertex2i(135,465);
glVertex2i(130,490);
glVertex2i(135,485);
glVertex2i(160,10);
glVertex2i(165,5);
glVertex2i(160,30);
glVertex2i(165,25);
glVertex2i(160,50);
glVertex2i(165,45);
glVertex2i(160,70);
glVertex2i(165,65);
glVertex2i(160,90);
glVertex2i(165,85);
glVertex2i(160,110);
glVertex2i(165,105);
glVertex2i(160,130);
glVertex2i(165,125);
glVertex2i(160,150);
glVertex2i(165,145);
glVertex2i(160,170);
glVertex2i(165,165);
glVertex2i(160,190);
glVertex2i(165,185);
glVertex2i(160,210);
glVertex2i(165,205);
glVertex2i(160,230);
glVertex2i(165,225);
glVertex2i(160,250);
glVertex2i(165,245);
glVertex2i(160,270);
glVertex2i(165,265);
glVertex2i(160,290);
glVertex2i(165,285);
glVertex2i(160,310);
glVertex2i(165,305);
glVertex2i(160,330);
glVertex2i(165,325);
glVertex2i(160,350);
glVertex2i(165,345);
glVertex2i(160,370);
glVertex2i(165,365);
glVertex2i(160,390);
glVertex2i(165,385);
glVertex2i(160,410);
glVertex2i(165,405);
glVertex2i(160,410);
glVertex2i(165,405);
glVertex2i(160,430);
glVertex2i(165,425);
glVertex2i(160,450);
glVertex2i(165,445);
glVertex2i(160,470);
glVertex2i(165,465);
glVertex2i(160,490);
glVertex2i(165,485);
glVertex2i(190,10);
glVertex2i(195,5);
glVertex2i(190,30);
glVertex2i(195,25);
glVertex2i(190,50);
glVertex2i(195,45);
glVertex2i(190,70);
glVertex2i(195,65);
glVertex2i(190,90);
glVertex2i(195,85);
glVertex2i(190,110);
glVertex2i(195,105);
glVertex2i(190,130);
glVertex2i(195,125);
glVertex2i(190,150);
glVertex2i(195,145);
glVertex2i(190,170);
glVertex2i(195,165);
glVertex2i(190,190);
glVertex2i(195,185);
glVertex2i(190,210);
glVertex2i(195,205);
glVertex2i(190,230);
glVertex2i(195,225);
glVertex2i(190,250);
glVertex2i(195,245);
glVertex2i(190,270);
glVertex2i(195,265);
glVertex2i(190,290);
glVertex2i(195,285);
glVertex2i(190,310);
glVertex2i(195,305);
glVertex2i(190,330);
glVertex2i(195,325);
glVertex2i(190,350);
glVertex2i(195,345);
glVertex2i(190,370);
glVertex2i(195,365);
glVertex2i(190,390);
glVertex2i(195,385);
glVertex2i(190,410);
glVertex2i(195,405);
glVertex2i(190,410);
glVertex2i(195,405);
glVertex2i(190,430);
glVertex2i(195,425);
glVertex2i(190,450);
glVertex2i(195,445);
glVertex2i(190,470);
glVertex2i(195,465);
glVertex2i(190,490);
glVertex2i(195,485);
glVertex2i(220,10);
glVertex2i(225,5);
glVertex2i(220,30);
glVertex2i(225,25);
glVertex2i(220,50);
glVertex2i(225,45);
glVertex2i(220,70);
glVertex2i(225,65);
glVertex2i(220,90);
glVertex2i(225,85);
glVertex2i(220,110);
glVertex2i(225,105);
glVertex2i(220,130);
glVertex2i(225,125);
glVertex2i(220,150);
glVertex2i(225,145);
glVertex2i(220,170);
glVertex2i(225,165);
glVertex2i(220,190);
glVertex2i(225,185);
glVertex2i(220,210);
glVertex2i(225,205);
glVertex2i(220,230);
glVertex2i(225,225);
glVertex2i(220,250);
glVertex2i(225,245);
glVertex2i(220,270);
glVertex2i(225,265);
glVertex2i(220,290);
glVertex2i(225,285);
glVertex2i(220,310);
glVertex2i(225,305);
glVertex2i(220,330);
glVertex2i(225,325);
glVertex2i(220,350);
glVertex2i(225,345);
glVertex2i(220,370);
glVertex2i(225,365);
glVertex2i(220,390);
glVertex2i(225,385);
glVertex2i(220,410);
glVertex2i(225,405);
glVertex2i(220,410);
glVertex2i(225,405);
glVertex2i(220,430);
glVertex2i(225,425);
glVertex2i(220,450);
glVertex2i(225,445);
glVertex2i(220,470);
glVertex2i(225,465);
glVertex2i(220,490);
glVertex2i(225,485);
glVertex2i(250,10);
glVertex2i(255,5);
glVertex2i(250,30);
glVertex2i(255,25);
glVertex2i(250,50);
glVertex2i(255,45);
glVertex2i(250,70);
glVertex2i(255,65);
glVertex2i(250,90);
glVertex2i(255,85);
glVertex2i(250,110);
glVertex2i(255,105);
glVertex2i(250,130);
glVertex2i(255,125);
glVertex2i(250,150);
glVertex2i(255,145);
glVertex2i(250,170);
glVertex2i(255,165);
glVertex2i(250,190);
glVertex2i(255,185);
glVertex2i(250,210);
glVertex2i(255,205);
glVertex2i(250,230);
glVertex2i(255,225);
glVertex2i(250,250);
glVertex2i(255,245);
glVertex2i(250,270);
glVertex2i(255,265);
glVertex2i(250,290);
glVertex2i(255,285);
glVertex2i(250,310);
glVertex2i(255,305);
glVertex2i(250,330);
glVertex2i(255,325);
glVertex2i(250,350);
glVertex2i(255,345);
glVertex2i(250,370);
glVertex2i(255,365);
glVertex2i(250,390);
glVertex2i(255,385);
glVertex2i(250,410);
glVertex2i(255,405);
glVertex2i(250,410);
glVertex2i(255,405);
glVertex2i(250,430);
glVertex2i(255,425);
glVertex2i(250,450);
glVertex2i(255,445);
glVertex2i(250,470);
glVertex2i(255,465);
glVertex2i(250,490);
glVertex2i(255,485);
glVertex2i(280,10);
glVertex2i(285,5);
glVertex2i(280,30);
glVertex2i(285,25);
glVertex2i(280,50);
glVertex2i(285,45);
glVertex2i(280,70);
glVertex2i(285,65);
glVertex2i(280,90);
glVertex2i(285,85);
glVertex2i(280,110);
glVertex2i(285,105);
glVertex2i(280,130);
glVertex2i(285,125);
glVertex2i(280,150);
glVertex2i(285,145);
glVertex2i(280,170);
glVertex2i(285,165);
glVertex2i(280,190);
glVertex2i(285,185);
glVertex2i(280,210);
glVertex2i(285,205);
glVertex2i(280,230);
glVertex2i(285,225);
glVertex2i(280,250);
glVertex2i(285,245);
glVertex2i(280,270);
glVertex2i(285,265);
glVertex2i(280,290);
glVertex2i(285,285);
glVertex2i(280,310);
glVertex2i(285,305);
glVertex2i(280,330);
glVertex2i(285,325);
glVertex2i(280,350);
glVertex2i(285,345);
glVertex2i(280,370);
glVertex2i(285,365);
glVertex2i(280,390);
glVertex2i(285,385);
glVertex2i(280,410);
glVertex2i(285,405);
glVertex2i(280,410);
glVertex2i(285,405);
glVertex2i(280,430);
glVertex2i(285,425);
glVertex2i(280,450);
glVertex2i(285,445);
glVertex2i(280,470);
glVertex2i(285,465);
glVertex2i(280,490);
glVertex2i(285,485);
glVertex2i(310,10);
glVertex2i(315,5);
glVertex2i(310,30);
glVertex2i(315,25);
glVertex2i(310,50);
glVertex2i(315,45);
glVertex2i(310,70);
glVertex2i(315,65);
glVertex2i(310,90);
glVertex2i(315,85);
glVertex2i(310,110);
glVertex2i(315,105);
glVertex2i(310,130);
glVertex2i(315,125);
glVertex2i(310,150);
glVertex2i(315,145);
glVertex2i(310,170);
glVertex2i(315,165);
glVertex2i(310,190);
glVertex2i(315,185);
glVertex2i(310,210);
glVertex2i(315,205);
glVertex2i(310,230);
glVertex2i(315,225);
glVertex2i(310,250);
glVertex2i(315,245);
glVertex2i(310,270);
glVertex2i(315,265);
glVertex2i(310,290);
glVertex2i(315,285);
glVertex2i(310,310);
glVertex2i(315,305);
glVertex2i(310,330);
glVertex2i(315,325);
glVertex2i(310,350);
glVertex2i(315,345);
glVertex2i(310,370);
glVertex2i(315,365);
glVertex2i(310,390);
glVertex2i(315,385);
glVertex2i(310,410);
glVertex2i(315,405);
glVertex2i(310,410);
glVertex2i(315,405);
glVertex2i(310,430);
glVertex2i(315,425);
glVertex2i(310,450);
glVertex2i(315,445);
glVertex2i(310,470);
glVertex2i(315,465);
glVertex2i(310,490);
glVertex2i(315,485);
glVertex2i(340,10);
glVertex2i(345,5);
glVertex2i(340,30);
glVertex2i(345,25);
glVertex2i(340,50);
glVertex2i(345,45);
glVertex2i(340,70);
glVertex2i(345,65);
glVertex2i(340,90);
glVertex2i(345,85);
glVertex2i(340,110);
glVertex2i(345,105);
glVertex2i(340,130);
glVertex2i(345,125);
glVertex2i(340,150);
glVertex2i(345,145);
glVertex2i(340,170);
glVertex2i(345,165);
glVertex2i(340,190);
glVertex2i(345,185);
glVertex2i(340,210);
glVertex2i(345,205);
glVertex2i(340,230);
glVertex2i(345,225);
glVertex2i(340,250);
glVertex2i(345,245);
glVertex2i(340,270);
glVertex2i(345,265);
glVertex2i(340,290);
glVertex2i(345,285);
glVertex2i(340,310);
glVertex2i(345,305);
glVertex2i(340,330);
glVertex2i(345,325);
glVertex2i(340,350);
glVertex2i(345,345);
glVertex2i(340,370);
glVertex2i(345,365);
glVertex2i(340,390);
glVertex2i(345,385);
glVertex2i(340,410);
glVertex2i(345,405);
glVertex2i(340,410);
glVertex2i(345,405);
glVertex2i(340,430);
glVertex2i(345,425);
glVertex2i(340,450);
glVertex2i(345,445);
glVertex2i(340,470);
glVertex2i(345,465);
glVertex2i(340,490);
glVertex2i(345,485);
glVertex2i(370,10);
glVertex2i(375,5);
glVertex2i(370,30);
glVertex2i(375,25);
glVertex2i(370,50);
glVertex2i(375,45);
glVertex2i(370,70);
glVertex2i(375,65);
glVertex2i(370,90);
glVertex2i(375,85);
glVertex2i(370,110);
glVertex2i(375,105);
glVertex2i(370,130);
glVertex2i(375,125);
glVertex2i(370,150);
glVertex2i(375,145);
glVertex2i(370,170);
glVertex2i(375,165);
glVertex2i(370,190);
glVertex2i(375,185);
glVertex2i(370,210);
glVertex2i(375,205);
glVertex2i(370,230);
glVertex2i(375,225);
glVertex2i(370,250);
glVertex2i(375,245);
glVertex2i(370,270);
glVertex2i(375,265);
glVertex2i(370,290);
glVertex2i(375,285);
glVertex2i(370,310);
glVertex2i(375,305);
glVertex2i(370,330);
glVertex2i(375,325);
glVertex2i(370,350);
glVertex2i(375,345);
glVertex2i(370,370);
glVertex2i(375,365);
glVertex2i(370,390);
glVertex2i(375,385);
glVertex2i(370,410);
glVertex2i(375,405);
glVertex2i(370,410);
glVertex2i(375,405);
glVertex2i(370,430);
glVertex2i(375,425);
glVertex2i(370,450);
glVertex2i(375,445);
glVertex2i(370,470);
glVertex2i(375,465);
glVertex2i(370,490);
glVertex2i(375,485);

glVertex2i(400,10);
glVertex2i(405,5);
glVertex2i(400,30);
glVertex2i(405,25);
glVertex2i(400,50);
glVertex2i(405,45);
glVertex2i(400,70);
glVertex2i(405,65);
glVertex2i(400,90);
glVertex2i(405,85);
glVertex2i(400,110);
glVertex2i(405,105);
glVertex2i(400,130);
glVertex2i(405,125);
glVertex2i(400,150);
glVertex2i(405,145);
glVertex2i(400,170);
glVertex2i(405,165);
glVertex2i(400,190);
glVertex2i(405,185);
glVertex2i(400,210);
glVertex2i(405,205);
glVertex2i(400,230);
glVertex2i(405,225);
glVertex2i(400,250);
glVertex2i(405,245);
glVertex2i(400,270);
glVertex2i(405,265);
glVertex2i(400,290);
glVertex2i(405,285);
glVertex2i(400,310);
glVertex2i(405,305);
glVertex2i(400,330);
glVertex2i(405,325);
glVertex2i(400,350);
glVertex2i(405,345);
glVertex2i(400,370);
glVertex2i(405,365);
glVertex2i(400,390);
glVertex2i(405,385);
glVertex2i(400,410);
glVertex2i(405,405);
glVertex2i(400,410);
glVertex2i(405,405);
glVertex2i(400,430);
glVertex2i(405,425);
glVertex2i(400,450);
glVertex2i(405,445);
glVertex2i(400,470);
glVertex2i(405,465);
glVertex2i(400,490);
glVertex2i(405,485);

glVertex2i(430,10);
glVertex2i(435,5);
glVertex2i(430,30);
glVertex2i(435,25);
glVertex2i(430,50);
glVertex2i(435,45);
glVertex2i(430,70);
glVertex2i(435,65);
glVertex2i(430,90);
glVertex2i(435,85);
glVertex2i(430,110);
glVertex2i(435,105);
glVertex2i(430,130);
glVertex2i(435,125);
glVertex2i(430,150);
glVertex2i(435,145);
glVertex2i(430,170);
glVertex2i(435,165);
glVertex2i(430,190);
glVertex2i(435,185);
glVertex2i(430,210);
glVertex2i(435,205);
glVertex2i(430,230);
glVertex2i(435,225);
glVertex2i(430,250);
glVertex2i(435,245);
glVertex2i(430,270);
glVertex2i(435,265);
glVertex2i(430,290);
glVertex2i(435,285);
glVertex2i(430,310);
glVertex2i(435,305);
glVertex2i(430,330);
glVertex2i(435,325);
glVertex2i(430,350);
glVertex2i(435,345);
glVertex2i(430,370);
glVertex2i(435,365);
glVertex2i(430,390);
glVertex2i(435,385);
glVertex2i(430,410);
glVertex2i(435,405);
glVertex2i(430,410);
glVertex2i(435,405);
glVertex2i(430,430);
glVertex2i(435,425);
glVertex2i(430,450);
glVertex2i(435,445);
glVertex2i(430,470);
glVertex2i(435,465);
glVertex2i(430,490);
glVertex2i(435,485);

glVertex2i(460,10);
glVertex2i(465,5);
glVertex2i(460,30);
glVertex2i(465,25);
glVertex2i(460,50);
glVertex2i(465,45);
glVertex2i(460,70);
glVertex2i(465,65);
glVertex2i(460,90);
glVertex2i(465,85);
glVertex2i(460,110);
glVertex2i(465,105);
glVertex2i(460,130);
glVertex2i(465,125);
glVertex2i(460,150);
glVertex2i(465,145);
glVertex2i(460,170);
glVertex2i(465,165);
glVertex2i(460,190);
glVertex2i(465,185);
glVertex2i(460,210);
glVertex2i(465,205);
glVertex2i(460,230);
glVertex2i(465,225);
glVertex2i(460,250);
glVertex2i(465,245);
glVertex2i(460,270);
glVertex2i(465,265);
glVertex2i(460,290);
glVertex2i(465,285);
glVertex2i(460,310);
glVertex2i(465,305);
glVertex2i(460,330);
glVertex2i(465,325);
glVertex2i(460,350);
glVertex2i(465,345);
glVertex2i(460,370);
glVertex2i(465,365);
glVertex2i(460,390);
glVertex2i(465,385);
glVertex2i(460,410);
glVertex2i(465,405);
glVertex2i(460,410);
glVertex2i(465,405);
glVertex2i(460,430);
glVertex2i(465,425);
glVertex2i(460,450);
glVertex2i(465,445);
glVertex2i(460,470);
glVertex2i(465,465);
glVertex2i(460,490);
glVertex2i(465,485);

glVertex2i(490,10);
glVertex2i(495,5);
glVertex2i(490,30);
glVertex2i(495,25);
glVertex2i(490,50);
glVertex2i(495,45);
glVertex2i(490,70);
glVertex2i(495,65);
glVertex2i(490,90);
glVertex2i(495,85);
glVertex2i(490,110);
glVertex2i(495,105);
glVertex2i(490,130);
glVertex2i(495,125);
glVertex2i(490,150);
glVertex2i(495,145);
glVertex2i(490,170);
glVertex2i(495,165);
glVertex2i(490,190);
glVertex2i(495,185);
glVertex2i(490,210);
glVertex2i(495,205);
glVertex2i(490,230);
glVertex2i(495,225);
glVertex2i(490,250);
glVertex2i(495,245);
glVertex2i(490,270);
glVertex2i(495,265);
glVertex2i(490,290);
glVertex2i(495,285);
glVertex2i(490,310);
glVertex2i(495,305);
glVertex2i(490,330);
glVertex2i(495,325);
glVertex2i(490,350);
glVertex2i(495,345);
glVertex2i(490,370);
glVertex2i(495,365);
glVertex2i(490,390);
glVertex2i(495,385);
glVertex2i(490,410);
glVertex2i(495,405);
glVertex2i(490,410);
glVertex2i(495,405);
glVertex2i(490,430);
glVertex2i(495,425);
glVertex2i(490,450);
glVertex2i(495,445);
glVertex2i(490,470);
glVertex2i(495,465);
glVertex2i(490,490);
glVertex2i(495,485);

glVertex2i(520,10);
glVertex2i(525,5);
glVertex2i(520,30);
glVertex2i(525,25);
glVertex2i(520,50);
glVertex2i(525,45);
glVertex2i(520,70);
glVertex2i(525,65);
glVertex2i(520,90);
glVertex2i(525,85);
glVertex2i(520,110);
glVertex2i(525,105);
glVertex2i(520,130);
glVertex2i(525,125);
glVertex2i(520,150);
glVertex2i(525,145);
glVertex2i(520,170);
glVertex2i(525,165);
glVertex2i(520,190);
glVertex2i(525,185);
glVertex2i(520,210);
glVertex2i(525,205);
glVertex2i(520,230);
glVertex2i(525,225);
glVertex2i(520,250);
glVertex2i(525,245);
glVertex2i(520,270);
glVertex2i(525,265);
glVertex2i(520,290);
glVertex2i(525,285);
glVertex2i(520,310);
glVertex2i(525,305);
glVertex2i(520,330);
glVertex2i(525,325);
glVertex2i(520,350);
glVertex2i(525,345);
glVertex2i(520,370);
glVertex2i(525,365);
glVertex2i(520,390);
glVertex2i(525,385);
glVertex2i(520,410);
glVertex2i(525,405);
glVertex2i(520,410);
glVertex2i(525,405);
glVertex2i(520,430);
glVertex2i(525,425);
glVertex2i(520,450);
glVertex2i(525,445);
glVertex2i(520,470);
glVertex2i(525,465);
glVertex2i(520,490);
glVertex2i(525,485);

glVertex2i(550,10);
glVertex2i(555,5);
glVertex2i(550,30);
glVertex2i(555,25);
glVertex2i(550,50);
glVertex2i(555,45);
glVertex2i(550,70);
glVertex2i(555,65);
glVertex2i(550,90);
glVertex2i(555,85);
glVertex2i(550,110);
glVertex2i(555,105);
glVertex2i(550,130);
glVertex2i(555,125);
glVertex2i(550,150);
glVertex2i(555,145);
glVertex2i(550,170);
glVertex2i(555,165);
glVertex2i(550,190);
glVertex2i(555,185);
glVertex2i(550,210);
glVertex2i(555,205);
glVertex2i(550,230);
glVertex2i(555,225);
glVertex2i(550,250);
glVertex2i(555,245);
glVertex2i(550,270);
glVertex2i(555,265);
glVertex2i(550,290);
glVertex2i(555,285);
glVertex2i(550,310);
glVertex2i(555,305);
glVertex2i(550,330);
glVertex2i(555,325);
glVertex2i(550,350);
glVertex2i(555,345);
glVertex2i(550,370);
glVertex2i(555,365);
glVertex2i(550,390);
glVertex2i(555,385);
glVertex2i(550,410);
glVertex2i(555,405);
glVertex2i(550,410);
glVertex2i(555,405);
glVertex2i(550,430);
glVertex2i(555,425);
glVertex2i(550,450);
glVertex2i(555,445);
glVertex2i(550,470);
glVertex2i(555,465);
glVertex2i(550,490);
glVertex2i(555,485);

glVertex2i(580,10);
glVertex2i(585,5);
glVertex2i(580,30);
glVertex2i(585,25);
glVertex2i(580,50);
glVertex2i(585,45);
glVertex2i(580,70);
glVertex2i(585,65);
glVertex2i(580,90);
glVertex2i(585,85);
glVertex2i(580,110);
glVertex2i(585,105);
glVertex2i(580,130);
glVertex2i(585,125);
glVertex2i(580,150);
glVertex2i(585,145);
glVertex2i(580,170);
glVertex2i(585,165);
glVertex2i(580,190);
glVertex2i(585,185);
glVertex2i(580,210);
glVertex2i(585,205);
glVertex2i(580,230);
glVertex2i(585,225);
glVertex2i(580,250);
glVertex2i(585,245);
glVertex2i(580,270);
glVertex2i(585,265);
glVertex2i(580,290);
glVertex2i(585,285);
glVertex2i(580,310);
glVertex2i(585,305);
glVertex2i(580,330);
glVertex2i(585,325);
glVertex2i(580,350);
glVertex2i(585,345);
glVertex2i(580,370);
glVertex2i(585,365);
glVertex2i(580,390);
glVertex2i(585,385);
glVertex2i(580,410);
glVertex2i(585,405);
glVertex2i(580,410);
glVertex2i(585,405);
glVertex2i(580,430);
glVertex2i(585,425);
glVertex2i(580,450);
glVertex2i(585,445);
glVertex2i(580,470);
glVertex2i(585,465);
glVertex2i(580,490);
glVertex2i(585,485);


glVertex2i(610,10);
glVertex2i(615,5);
glVertex2i(610,30);
glVertex2i(615,25);
glVertex2i(610,50);
glVertex2i(615,45);
glVertex2i(610,70);
glVertex2i(615,65);
glVertex2i(610,90);
glVertex2i(615,85);
glVertex2i(610,110);
glVertex2i(615,105);
glVertex2i(610,130);
glVertex2i(615,125);
glVertex2i(610,150);
glVertex2i(615,145);
glVertex2i(610,170);
glVertex2i(615,165);
glVertex2i(610,190);
glVertex2i(615,185);
glVertex2i(610,210);
glVertex2i(615,205);
glVertex2i(610,230);
glVertex2i(615,225);
glVertex2i(610,250);
glVertex2i(615,245);
glVertex2i(610,270);
glVertex2i(615,265);
glVertex2i(610,290);
glVertex2i(615,285);
glVertex2i(610,310);
glVertex2i(615,305);
glVertex2i(610,330);
glVertex2i(615,325);
glVertex2i(610,350);
glVertex2i(615,345);
glVertex2i(610,370);
glVertex2i(615,365);
glVertex2i(610,390);
glVertex2i(615,385);
glVertex2i(610,410);
glVertex2i(615,405);
glVertex2i(610,410);
glVertex2i(615,405);
glVertex2i(610,430);
glVertex2i(615,425);
glVertex2i(610,450);
glVertex2i(615,445);
glVertex2i(610,470);
glVertex2i(615,465);
glVertex2i(610,490);
glVertex2i(615,485);

glVertex2i(640,10);
glVertex2i(645,5);
glVertex2i(640,30);
glVertex2i(645,25);
glVertex2i(640,50);
glVertex2i(645,45);
glVertex2i(640,70);
glVertex2i(645,65);
glVertex2i(640,90);
glVertex2i(645,85);
glVertex2i(640,110);
glVertex2i(645,105);
glVertex2i(640,130);
glVertex2i(645,125);
glVertex2i(640,150);
glVertex2i(645,145);
glVertex2i(640,170);
glVertex2i(645,165);
glVertex2i(640,190);
glVertex2i(645,185);
glVertex2i(640,210);
glVertex2i(645,205);
glVertex2i(640,230);
glVertex2i(645,225);
glVertex2i(640,250);
glVertex2i(645,245);
glVertex2i(640,270);
glVertex2i(645,265);
glVertex2i(640,290);
glVertex2i(645,285);
glVertex2i(640,310);
glVertex2i(645,305);
glVertex2i(640,330);
glVertex2i(645,325);
glVertex2i(640,350);
glVertex2i(645,345);
glVertex2i(640,370);
glVertex2i(645,365);
glVertex2i(640,390);
glVertex2i(645,385);
glVertex2i(640,410);
glVertex2i(645,405);
glVertex2i(640,410);
glVertex2i(645,405);
glVertex2i(640,430);
glVertex2i(645,425);
glVertex2i(640,450);
glVertex2i(645,445);
glVertex2i(640,470);
glVertex2i(645,465);
glVertex2i(640,490);
glVertex2i(645,485);

glVertex2i(670,10);
glVertex2i(675,5);
glVertex2i(670,30);
glVertex2i(675,25);
glVertex2i(670,50);
glVertex2i(675,45);
glVertex2i(670,70);
glVertex2i(675,65);
glVertex2i(670,90);
glVertex2i(675,85);
glVertex2i(670,110);
glVertex2i(675,105);
glVertex2i(670,130);
glVertex2i(675,125);
glVertex2i(670,150);
glVertex2i(675,145);
glVertex2i(670,170);
glVertex2i(675,165);
glVertex2i(670,190);
glVertex2i(675,185);
glVertex2i(670,210);
glVertex2i(675,205);
glVertex2i(670,230);
glVertex2i(675,225);
glVertex2i(670,250);
glVertex2i(675,245);
glVertex2i(670,270);
glVertex2i(675,265);
glVertex2i(670,290);
glVertex2i(675,285);
glVertex2i(670,310);
glVertex2i(675,305);
glVertex2i(670,330);
glVertex2i(675,325);
glVertex2i(670,350);
glVertex2i(675,345);
glVertex2i(670,370);
glVertex2i(675,365);
glVertex2i(670,390);
glVertex2i(675,385);
glVertex2i(670,410);
glVertex2i(675,405);
glVertex2i(670,410);
glVertex2i(675,405);
glVertex2i(670,430);
glVertex2i(675,425);
glVertex2i(670,450);
glVertex2i(675,445);
glVertex2i(670,470);
glVertex2i(675,465);
glVertex2i(670,490);
glVertex2i(675,485);


glEnd();
}


void updaterain()
	{
		if (rainStatus == 1)
		{
			rainY -=rainSpeed;
		}
        if (rainY<0)
		{
			rainY =20;
		}
		glPushMatrix();
		glTranslatef(rainX, rainY, 0);
		rain();
		glPopMatrix();
	}









void DrawCircle(float cx, float cy, float r, int num_segments)
		{
		 glBegin(GL_TRIANGLE_FAN);
		 for (int i = 0; i < num_segments; i++)
            {
            float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

            float x = r * cosf(theta);//calculate the x component
            float y = r * sinf(theta);//calculate the y component

            glVertex2f(x + cx, y + cy);//output vertex

            }
		 glEnd();
	}

	void ship1(){

glBegin(GL_QUADS); //
glColor3ub(242,165,23);
glVertex2f(430,160);
glVertex2f(540,160);
glVertex2f(570,180);
glVertex2f(400,180);
glEnd();

glBegin(GL_QUADS);
glColor3ub(137,137,137);
glVertex2f(420,180);
glVertex2f(550,180);
glVertex2f(550,195);
glVertex2f(420,195);
glEnd();

glBegin(GL_QUADS);
glColor3ub(178,178,178);
glVertex2f(430,195);
glVertex2f(550,195);
glVertex2f(540,210);
glVertex2f(430,210);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(520,200-2);
glVertex2f(550-2,200-2);
glVertex2f(542,205+2);
glVertex2f(520,205+2);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450,210);
glVertex2f(470,210);
glVertex2f(470,227);
glVertex2f(450,227);
glEnd();
glBegin(GL_QUADS);
glColor3ub(242,165,23);
glVertex2f(450,227);
glVertex2f(470,227);
glVertex2f(470,230);
glVertex2f(450,230);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450+30,210);
glVertex2f(470+30,210);
glVertex2f(470+30,227);
glVertex2f(450+30,227);
glEnd();
glBegin(GL_QUADS);
glColor3ub(242,165,23);
glVertex2f(450+30,227);
glVertex2f(470+30,227);
glVertex2f(470+30,230);
glVertex2f(450+30,230);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450+30+30,210);
glVertex2f(470+30+30,210);
glVertex2f(470+30+30,227);
glVertex2f(450+30+30,227);
glEnd();
glBegin(GL_QUADS);
glColor3ub(242,165,23);
glVertex2f(450+30+30,227);
glVertex2f(470+30+30,227);
glVertex2f(470+30+30,230);
glVertex2f(450+30+30,230);
glEnd();



glColor3ub(255,255,255);
DrawCircle(435, 170, 5, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25, 170, 5, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25+25, 170, 5, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25+25+25, 170, 5, 10000);

glColor3ub(255,255,255);
DrawCircle(435+25+25+25+25, 170, 5, 10000);

glColor3ub(255,255,255);
DrawCircle(447, 187, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(447+25, 187, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(447+25+25, 187, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(447+25+25+25, 187, 4, 1000);


glColor3ub(255,255,255);
DrawCircle(445, 202, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(455, 202, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(455+10, 202, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(455+10+10, 202, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(455+10+10+10, 202, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(455+10+10+10+10, 202, 4, 1000);

glColor3ub(255,255,255);
DrawCircle(455+10+10+10+10+10, 202, 4, 1000);

}

	void updateship1()
	{
		if (ship1Status == 1)
		{
			ship1X +=ship1Speed1;
		}
        if (ship1X>350)
		{
			ship1X =-550 ;
		}
		glPushMatrix();
		glTranslatef(ship1X, ship1Y, 0);
		ship1();
		glPopMatrix();
	}

void ship2()
{

glBegin(GL_QUADS); //
glColor3ub(167,167,167);
glVertex2f(20,160);
glVertex2f(80,160);
glVertex2f(100,180);
glVertex2f(20,180);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128,129,236);
glVertex2f(30,180);
glVertex2f(90,180);
glVertex2f(80,195);
glVertex2f(30,195);
glEnd();

glBegin(GL_QUADS);
glColor3ub(200,100,200);
glVertex2f(40,195);
glVertex2f(73,195);
glVertex2f(73,210);
glVertex2f(40,210);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(40,182);
glVertex2f(50,182);
glVertex2f(50,193);
glVertex2f(40,193);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,255,255);
glVertex2f(40+15,182);
glVertex2f(50+15,182);
glVertex2f(50+15,193);
glVertex2f(40+15,193);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(40+15+15,182);
glVertex2f(50+15+15,182);
glVertex2f(50+15+15,193);
glVertex2f(40+15+15,193);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(45,197);
glVertex2f(55,197);
glVertex2f(55,208);
glVertex2f(45,208);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(45+15,197);
glVertex2f(55+15,197);
glVertex2f(55+15,208);
glVertex2f(45+15,208);
glEnd();

}

void updateship2()
	{
		if (ship2Status == 1)
		{
			ship2X +=ship2Speed;
		}
        if (ship2X>700)
		{
			ship2X =-150 ;
		}
		glPushMatrix();
		glTranslatef(ship2X, ship2Y, 0);
		ship2();
		glPopMatrix();
	}


void ship3()
{

glBegin(GL_QUADS); //
glColor3ub(167,167,167);
glVertex2f(320,240);
glVertex2f(380,240);
glVertex2f(380,260);
glVertex2f(300,260);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128,129,236);
glVertex2f(320,260);
glVertex2f(375,260);
glVertex2f(375,275);
glVertex2f(330,275);
glEnd();

glBegin(GL_QUADS);
glColor3ub(200,100,200);
glVertex2f(335,275);
glVertex2f(370,275);
glVertex2f(370,290);
glVertex2f(335,290);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(330,262);
glVertex2f(340,262);
glVertex2f(340,273);
glVertex2f(330,273);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,255,255);
glVertex2f(330+15,262);
glVertex2f(340+15,262);
glVertex2f(340+15,273);
glVertex2f(330+15,273);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(330+15+15,262);
glVertex2f(340+15+15,262);
glVertex2f(340+15+15,273);
glVertex2f(330+15+15,273);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(340,277);
glVertex2f(350,277);
glVertex2f(350,288);
glVertex2f(340,288);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(355,277);
glVertex2f(365,277);
glVertex2f(365,288);
glVertex2f(355,288);
glEnd();

}

	void updateship3()
	{
		if (ship3Status == 1)
		{
			ship3X -=ship3Speed;
		}
        if (ship3X<-400)
		{
			ship3X =400 ;
		}
		glPushMatrix();
		glTranslatef(ship3X, ship3Y, 0);
		ship3();
		glPopMatrix();
	}


void Road(){
 glBegin(GL_QUADS); //Road
glColor3ub(157,159,157);
glVertex2f(0,150 ); // x, y
glVertex2f(700,150);
glVertex2f(700,0); // x, y
glVertex2f(0,0);
glEnd();



glLineWidth(7.5);
glBegin(GL_LINES);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(30,80 );
glVertex2f(70,80 );



glVertex2f(110,80 );
glVertex2f(150,80 );



glVertex2f(190,80 );
glVertex2f(230,80 );



glVertex2f(270,80 );
glVertex2f(310, 80 );



glVertex2f(350,80 );
glVertex2f(390,80 );



glVertex2f(430,80 );
glVertex2f(470,80 );



glVertex2f(510,80 );
glVertex2f(550,80 );



glVertex2f(590,80 );
glVertex2f(630,80 );
glEnd();



 glBegin(GL_QUADS);    //1ST BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(0,140 ); // x, y
glVertex2f(0,150);
glVertex2f(40,150); // x, y
glVertex2f(40,140);
glEnd();
 glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(40,140 ); // x, y
glVertex2f(40,150);
glVertex2f(80,150); // x, y
glVertex2f(80,140);
glEnd();



glBegin(GL_QUADS);    //3RD BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(80,140 ); // x, y
glVertex2f(80,150);
glVertex2f(120,150); // x, y
glVertex2f(120,140);
glEnd();



glBegin(GL_QUADS);    //4 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(120,140 ); // x, y
glVertex2f(120,150);
glVertex2f(160,150); // x, y
glVertex2f(160,140);
glEnd();



glBegin(GL_QUADS);    //5 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(160,140 ); // x, y
glVertex2f(160,150);
glVertex2f(200,150); // x, y
glVertex2f(200,140);
glEnd();



glBegin(GL_QUADS);    //6 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(200,140 ); // x, y
glVertex2f(200,150);
glVertex2f(240,150); // x, y
glVertex2f(240,140);
glEnd();



glBegin(GL_QUADS);    //7 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(240,140 ); // x, y
glVertex2f(240,150);
glVertex2f(280,150); // x, y
glVertex2f(280,140);
glEnd();



glBegin(GL_QUADS);    //8 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(280,140 ); // x, y
glVertex2f(280,150);
glVertex2f(320,150); // x, y
glVertex2f(320,140);
glEnd();



glBegin(GL_QUADS);    //9 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(320,140 ); // x, y
glVertex2f(320,150);
glVertex2f(360,150); // x, y
glVertex2f(360,140);
glEnd();



glBegin(GL_QUADS);    //10 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(360,140 ); // x, y
glVertex2f(360,150);
glVertex2f(400,150); // x, y
glVertex2f(400,140);
glEnd();



glBegin(GL_QUADS);    //11 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(400,140 ); // x, y
glVertex2f(400,150);
glVertex2f(440,150); // x, y
glVertex2f(440,140);
glEnd();



glBegin(GL_QUADS);    //12 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(440,140 ); // x, y
glVertex2f(440,150);
glVertex2f(480,150); // x, y
glVertex2f(480,140);
glEnd();
glBegin(GL_QUADS);    //13 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(480,140 ); // x, y
glVertex2f(480,150);
glVertex2f(520,150); // x, y
glVertex2f(520,140);
glEnd();



glBegin(GL_QUADS);    //14 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(520,140 ); // x, y
glVertex2f(520,150);
glVertex2f(560,150); // x, y
glVertex2f(560,140);
glEnd();



glBegin(GL_QUADS);    //15 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(560,140 ); // x, y
glVertex2f(560,150);
glVertex2f(600,150); // x, y
glVertex2f(600,140);
glEnd();



glBegin(GL_QUADS);    //16 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(600,140 ); // x, y
glVertex2f(600,150);
glVertex2f(640,150); // x, y
glVertex2f(640,140);
glEnd();



glBegin(GL_QUADS);    //17 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(640,140 ); // x, y
glVertex2f(640,150);
glVertex2f(680,150); // x, y
glVertex2f(680,140);
glEnd();



glBegin(GL_QUADS);    //18 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(680,140 ); // x, y
glVertex2f(680,150);
glVertex2f(700,150); // x, y
glVertex2f(700,140);
glEnd();

}







void Lamp()
{


glBegin(GL_QUADS);    //1st lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(90,150 ); // x, y
glVertex2f(90,200);
glVertex2f(95,200); // x, y
glVertex2f(95,150);
glEnd();

glColor3ub(255,255,255);
DrawCircle(92, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(75,180 );
glVertex2f(110,180 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(76,180 );
glVertex2f(76,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(76, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(109,180 );
glVertex2f(109,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(109, 194, 7, 10000);





glBegin(GL_QUADS);    //2nd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(250,150 ); // x, y
glVertex2f(250,200);
glVertex2f(255,200); // x, y
glVertex2f(255,150);
glEnd();

glColor3ub(255,255,255);
DrawCircle(253, 202, 9, 10000);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(235,180 );
glVertex2f(270,180 );
glEnd();
glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(236,180 );
glVertex2f(236,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(236, 194, 7, 10000);


glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(269,180 );
glVertex2f(269,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(269, 194, 7, 10000);



glBegin(GL_QUADS);    //3rd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(410,150 ); // x, y
glVertex2f(410,200);
glVertex2f(415,200); // x, y
glVertex2f(415,150);
glEnd();

glColor3ub(255,255,255);
DrawCircle(413, 202, 9, 10000);


glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(395,180 );
glVertex2f(430,180 );
glEnd();



glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(396,180 );
glVertex2f(396,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(396, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(429,180 );
glVertex2f(429,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(429, 194, 7, 10000);

glBegin(GL_QUADS);    //4th lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(570,150 ); // x, y
glVertex2f(570,200);
glVertex2f(575,200); // x, y
glVertex2f(575,150);
glEnd();

glColor3ub(255,255,255);
DrawCircle(573, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(555,180 );
glVertex2f(590,180 );
glEnd();



glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(556,180 );
glVertex2f(556,190 );
glEnd();

glColor3ub(255,255,255);
DrawCircle(556, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(589,180 );
glVertex2f(589,190 );
glEnd();
glColor3ub(255,255,255);
DrawCircle(589, 194, 7, 10000);
}

void car1()
{




	glBegin(GL_POLYGON);            // These vertices form a closed polygon
glColor3ub(0,128,0);
glVertex2f(40,118);
glVertex2f(40,150 ); // x, y
glVertex2f(160,150);
glVertex2f(160,118);// x, y

	glEnd();



   glBegin(GL_QUADS); //car

glColor3ub(0,128,0);
glVertex2f(57,150);
glVertex2f(80,175 ); // x, y
glVertex2f(120,175);
glVertex2f(142,150);// x, y
glEnd();
 glBegin(GL_QUADS); //glass

glColor3ub(0,0,102);
glVertex2f(65,152);
glVertex2f(80,170 ); // x, y
glVertex2f(98,170);
glVertex2f(98,152);// x, y
glEnd();
 glBegin(GL_QUADS); //glass

glColor3ub(0,0,102);
glVertex2f(102,170);
glVertex2f(120,170 ); // x, y
glVertex2f(134,152);
glVertex2f(102,152);// x, y
glEnd();

glColor3ub(0,0,0);
DrawCircle(80, 125, 15, 10000);

glColor3ub(255,255,255);
DrawCircle(80, 125, 11, 10000);


glColor3ub(0,0,0);
DrawCircle(120, 125, 15, 10000);

glColor3ub(255,255,255);
DrawCircle(120, 125, 11, 10000);



glEnd();
}

  	void updatecar1()
	{
		if (carStatus1 == 1)
		{
			car1X +=carSpeed1;
		}
        if (car1X>700)
		{
			car1X =-150 ;
		}
		glPushMatrix();
		glTranslatef(car1X, car1Y, 0);
		car1();
		glPopMatrix();
	}

	void car2()
    {
    glBegin(GL_POLYGON);            // body
    glColor3f(0,0,100);
    glVertex2f(100,20);
    glVertex2f(200,20);
    glVertex2f(200,40);
    glVertex2f(190,60);
    glVertex2f(150,60);
    glVertex2f(120,40);
    glVertex2f(110,40);
    glVertex2f(100,30);
    glEnd();



    glBegin(GL_POLYGON);            // front glass
    glColor3f(0,0,0);
    glVertex2f(150,57);
    glVertex2f(145,50);
    glVertex2f(130,40);
    glVertex2f(160,40);
    glVertex2f(160,57);
    glEnd();




    glBegin(GL_POLYGON);            // back glass
    glColor3f(0,0,0);
    glVertex2f(165,57);
    glVertex2f(165,40);
    glVertex2f(187,40);
    glVertex2f(187,57);
    glEnd();



    glColor3ub(0,0,0);
    DrawCircle(130, 23, 11, 10000);



    glColor3ub(224,224,224);
    DrawCircle(130, 23, 7, 10000);



    glColor3ub(0,0,0);
    DrawCircle(180, 23, 11, 10000);



    glColor3ub(224,224,224);
    DrawCircle(180, 23, 7, 10000);



   glEnd();
}

		void updatecar2()
	{
		if (car2Status == 1)
		{
			car2X -=car2Speed;
		}
        if (car2X<-200)
		{
			car2X =600 ;
		}
		glPushMatrix();
		glTranslatef(car2X, car2Y, 0);
		car2();
		glPopMatrix();
	}

	void bus()
	{
	   glBegin(GL_QUADS); //glass

       glColor3ub(255,0,0);;
       glVertex2f(620,20);
       glVertex2f(450,20 ); // x, y
       glVertex2f(450,60);
       glVertex2f(620,60);// x, y
       glEnd();

       	glBegin(GL_POLYGON);
        glColor3ub(255,0,0);
        glVertex2f(620,60);
        glVertex2f(620,100 );
        glVertex2f(470,100);
        glVertex2f(450,60);

	   glEnd();

	   glBegin(GL_POLYGON);            // samner glass
        glColor3ub(192,192,192);
        glVertex2f(470,100);
        glVertex2f(450,60);// x, y
        glVertex2f(470,60);
	   glEnd();

	    glBegin(GL_POLYGON);            // big glass
        glColor3ub(192,192,192);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

        glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // big glass
        glColor3ub(192,192,192);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

	    glBegin(GL_POLYGON);            // door
        glColor3ub(255,255,255);
        glVertex2f(495,90);// x, y
        glVertex2f(495,40);
        glVertex2f(510,40);
        glVertex2f(510,90);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // glass
        glColor3ub(192,192,192);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // glass
        glColor3ub(192,192,192);
        glVertex2f(572,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(580,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(580,60);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);            // glass
        glColor3ub(192,192,192);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

        glColor3ub(0,0,0);
        DrawCircle(485, 23, 15, 10000);

        glColor3ub(0,0,0);
        DrawCircle(485, 23, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(595, 23, 15, 10000);

        glColor3ub(0,0,0);
        DrawCircle(595, 23, 11, 10000);



	}


		void updatebus()
	{
		if (busStatus1 == 1)
		{
			busX -=busSpeed1;
		}
        if (busX<-620)
		{
			busX =320 ;
		}
		glPushMatrix();
		glTranslatef(busX, busY, 0);
		bus();
		glPopMatrix();
	}
void track()
{
        glBegin(GL_POLYGON);            // back part
        glColor3ub(139,69,19);
        glVertex2f(300,95);
        glVertex2f(300,160);// x, y
        glVertex2f(400,160);
        glVertex2f(400,95);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);            // front part
        glColor3ub(186,85,211);
        glVertex2f(400,95);
        glVertex2f(400,150);// x, y
        glVertex2f(430,150);
        glVertex2f(450,120);// x, y
        glVertex2f(450,95);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // front part
        glColor3ub(192,192,192);
        glVertex2f(405,120);
        glVertex2f(405,145);// x, y
        glVertex2f(428,145);
        glVertex2f(445,120);// x, y
        glVertex2f(440,120);// x, y
	    glEnd();

	     glColor3ub(0,0,0);
        DrawCircle(420, 97, 15, 10000);//front chaka

        glColor3ub(224,224,224);
        DrawCircle(420, 97, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(420, 97, 9, 10000);//end

         glColor3ub(0,0,0);
        DrawCircle(330, 97, 15, 10000);//back chaka

        glColor3ub(224,224,224);
        DrawCircle(330, 97, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(330, 97, 9, 10000);

}

void updatetrack()
	{
		if (trackStatus == 1)
		{
			trackX +=trackSpeed;
		}
        if (trackX>400)
		{
			trackX =-500 ;
		}
		glPushMatrix();
		glTranslatef(trackX, trackY, 0);
		track();
		glPopMatrix();
	}


void river()//River
{


glBegin(GL_QUADS); //River

glColor3ub(30,144,255);
glVertex2f(0,150);
glColor3ub(135,206,250);
glVertex2f(0,298 ); // x, y
glColor3ub(135,206,250);
glVertex2f(700,298);
glColor3ub(30,144,255);
glVertex2f(700,150);// x, y
glEnd();


 glBegin(GL_QUADS); //sky
    glColor3ub(105,105,105); // Red
    glVertex2f(0,285 ); // x, y
    glVertex2f(700,285);
    glVertex2f(700,298); // x, y
    glVertex2f(0,298);
    glEnd();
}



void cloud1()
{
    glColor3ub(255,255,255);
    DrawCircle(100,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(115,450, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(120,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(133,465, 18, 10000);

    glColor3ub(255,255,255);
    DrawCircle(140,447, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(153,455, 15, 10000);

}

void updatecloud1()
	{
		if (cloud1Status == 1)
		{
			cloud1X +=cloud1Speed;
		}
        if (cloud1X>600)
		{
			cloud1X =-150 ;
		}
		glPushMatrix();
		glTranslatef(cloud1X, cloud1Y, 0);
		cloud1();
		glPopMatrix();
	}

void cloud2()
{
    glColor3ub(255,255,255);
    DrawCircle(100+200,440+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(115+200,450+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(120+200,440+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(133+200,465+20, 18, 10000);

    glColor3ub(255,255,255);
    DrawCircle(140+200,447+20, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(153+200,455+20, 15, 10000);

}

void updatecloud2()
	{
		if (cloud2Status == 1)
		{
			cloud2X +=cloud2Speed;
		}
        if (cloud2X>400)
		{
			cloud2X =-340 ;
		}
		glPushMatrix();
		glTranslatef(cloud2X, cloud2Y, 0);
		cloud2();
		glPopMatrix();
	}

void cloud3()
{
    glColor3ub(255,255,255);
    DrawCircle(100+400,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(115+400,450, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(120+400,440, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(133+400,465, 18, 10000);

    glColor3ub(255,255,255);
    DrawCircle(140+400,447, 15, 10000);

    glColor3ub(255,255,255);
    DrawCircle(153+400,455, 15, 10000);

}

void updatecloud3()
	{
		if (cloud3Status == 1)
		{
			cloud3X +=cloud3Speed;
		}
        if (cloud3X>200)
		{
			cloud3X =-550 ;
		}
		glPushMatrix();
		glTranslatef(cloud3X, cloud3Y, 0);
		cloud3();
		glPopMatrix();
	}


void grass()
{
    glBegin(GL_QUADS); //sky
    glColor3ub(0,128,0); // Red
    glVertex2f(0,350 ); // x, y
    glColor3ub(0,128,0); // Red
    glVertex2f(700,350);
      glColor3ub(0,255,0); // Red
    glVertex2f(700,295); // x, y
    glColor3ub(0,255,0);// Red
    glVertex2f(0,295);
    glEnd();
}



void sky()
{


 glBegin(GL_QUADS); //sky
 glColor3ub(0,191,255); // Red
glVertex2f(0,500 ); // x, y
glVertex2f(700,500);
glVertex2f(700,350); // x, y
glVertex2f(0,350);
glEnd();
}


void Tree(int x_axis)
{


glLineWidth(7.0);
glBegin(GL_LINES);
glColor3ub(255,155,0);
glVertex2i(240+x_axis,300);
glVertex2i(240+x_axis,320);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(145+80+x_axis,320);
glVertex2i(175+80+x_axis,320);
glVertex2i(160+80+x_axis,340);
glEnd();
glBegin(GL_TRIANGLES);//
glColor3ub(51,152,102);
glVertex2i(66+80+80+x_axis,325);
glVertex2i(94+80+80+x_axis,325);
glVertex2i(80+80+80+x_axis,350);
glEnd();
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(67+80+80+x_axis,330);
glVertex2i(93+80+80+x_axis,330);
glVertex2i(80+80+80+x_axis,355);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(69+80+80+x_axis,336);
glVertex2i(91+80+80+x_axis,336);
glVertex2i(80+80+80+x_axis,360);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(0,244,0);
glVertex2i(70+80+80+x_axis,342);
glVertex2i(90+80+80+x_axis,342);
glVertex2i(80+80+80+x_axis,365);
glEnd();

}
void house(){

//////////////////middle 1&2/////////////

glBegin(GL_POLYGON);//1st & 2nd middle building
glColor3f(0.686 ,0.766, 0.246); // Red
glVertex2i(45,325);
glVertex2i(115,325);
glVertex2i(115,410);
glVertex2i(80,425);//middle
glVertex2i(45,410);
glVertex2i(45,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(40,410);
glVertex2i(80,425);
glVertex2i(80,425);
glVertex2i(120,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(55,380);
glVertex2i(70,380);
glVertex2i(70,400);
glVertex2i(55,400);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(55,380);
glVertex2i(70,380);
glVertex2i(70,400);
glVertex2i(55,400);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

/////////////////////////11111111111111////////////////////////

glBegin(GL_POLYGON);//1st building
glColor3f(0.937, 0.243, 0.517); // Red
glVertex2i(5,310);
glVertex2i(75,310);
glVertex2i(75,370);
glVertex2i(40,385);//middle
glVertex2i(5,370);
glVertex2i(5,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(0,370);
glVertex2i(40,385);
glVertex2i(40,385);
glVertex2i(80,370);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();
glLineWidth(2);
 glBegin(GL_LINE_LOOP); //3rd window
glColor3ub(255,255,255);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

////////////////////////2222222222222222////////////////////////////////



glBegin(GL_POLYGON);//2nd building
glColor3f(.937, 0.243, 1.517); // Red
glVertex2i(85,308);
glVertex2i(155,308);
glVertex2i(155,385);
glVertex2i(120,400);//middle
glVertex2i(85,385);
glVertex2i(85,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(80,385);
glVertex2i(120,400);
glVertex2i(120,400);
glVertex2i(160,385);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();
//////////////////33333333333333//////////


glBegin(GL_POLYGON);//3rd building
glColor3f(.937, 1.243, .517); // Red
glVertex2i(165,310);
glVertex2i(235,310);
glVertex2i(235,400);
glVertex2i(200,415);//middle
glVertex2i(165,400);
glVertex2i(165,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(160,400);
glVertex2i(200,415);
glVertex2i(200,415);
glVertex2i(240,400);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();
///////////////////////444444444444444444///////////////////////////

glBegin(GL_POLYGON);//4th building
glColor3f(.737, 1.843, 1.817); // Red
glVertex2i(240,320);
glVertex2i(310,320);
glVertex2i(310,410);
glVertex2i(275,425);//middle
glVertex2i(240,410);
glVertex2i(240,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(235,410);
glVertex2i(275,425);
glVertex2i(275,425);
glVertex2i(315,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3f(.290, 0.662, 0.850);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();


 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();


////////////////////////////////////////////////
/////////////////////////////////////////////////

glBegin(GL_QUADS); //middle house
glColor3ub(138,43,226);
glVertex2i(300,315);
glVertex2i(300,380);
glVertex2i(380,380);
glVertex2i(380,315);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(255,255,255);
glVertex2i(300,315);
glVertex2i(300,380);
glVertex2i(380,380);
glVertex2i(380,315);
glEnd();
glBegin(GL_QUADS); //2 tola
glColor3ub(138,43,226);
glVertex2i(305,380);
glVertex2i(305,430);
glVertex2i(375,430);
glVertex2i(375,380);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(255,255,255);
glVertex2i(305,380);
glVertex2i(305,430);
glVertex2i(375,430);
glVertex2i(375,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(138,43,226);
glVertex2i(310,430);
glVertex2i(310,480);
glVertex2i(370,480);
glVertex2i(370,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(255,255,255);
glVertex2i(310,430);
glVertex2i(310,480);
glVertex2i(370,480);
glVertex2i(370,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(138,43,226);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(255,255,255);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();
glLineWidth(7);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(255,255,255);
glVertex2i(320,315);
glVertex2i(320,340);
glVertex2i(360,340);
glVertex2i(360,315);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(330,315 );
glVertex2f(330,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(340,315 );
glVertex2f(340,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(350,315 );
glVertex2f(350,340 );
glEnd();







///////////////// right side 1st bulding............


glBegin(GL_POLYGON);//6th building
glColor3ub(255, 165, 0);
int x1=155;
int x2=148;
glVertex2i(390,320);
glVertex2i(460,320);
glVertex2i(460,410);
glVertex2i(390,410);
glEnd();
///////////chaad
glLineWidth(9.0);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2i(388,410);
glVertex2i(463,410);
glEnd();

//------panir tanki
glLineWidth(25.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(430,423);
glVertex2i(460,423);
glEnd();
glLineWidth(29.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(444,438);
glVertex2i(460,438);
glEnd();

////////// mid line in house 6th building

glLineWidth(5.0);
glBegin(GL_LINES);
int l=427;
glColor3ub(255,255,255);
glVertex2i(l,380);
glVertex2i(l,400);

glVertex2i(l,330);
glVertex2i(l,350);

glVertex2i(l,355);
glVertex2i(l,375);

glEnd();


 glBegin(GL_QUADS); //1s window
glColor3f(.290, 0.662, 0.850);
glVertex2i(255+x2,330);
glVertex2i(270+x2,330);
glVertex2i(270+x2,350);
glVertex2i(255+x2,350);
glEnd();
 glBegin(GL_QUADS); //2nd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280+x1,330);
glVertex2i(295+x1,330);
glVertex2i(295+x1,350);
glVertex2i(280+x1,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280+x1,355);
glVertex2i(295+x1,355);
glVertex2i(295+x1,375);
glVertex2i(280+x1,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255+x2,355);
glVertex2i(270+x2,355);
glVertex2i(270+x2,375);
glVertex2i(255+x2,375);
glEnd();
 glBegin(GL_QUADS); //5th window (top left)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(255+x2,380);
glVertex2i(270+x2,380);
glVertex2i(270+x2,400);
glVertex2i(255+x2,400);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3f(0.290, 0.662, 0.850);
glVertex2i(280+x1,380);
glVertex2i(295+x1,380);
glVertex2i(295+x1,400);
glVertex2i(280+x1,400);
glEnd();

/////////8 bulding .....2 tala .. blue one __________________________________


glBegin(GL_POLYGON);//8th building
glColor3ub(0, 0 ,139);
glVertex2i(565,460);
glVertex2i(635,460);
glVertex2i(635,310);
glVertex2i(565,310);

glEnd();

/////// top to bottom 1st 1ine sky blue

glLineWidth(10.0);
glBegin(GL_LINES);
glColor3ub(0 ,191 ,255);
glVertex2i(571,448);
glVertex2i(629,448);

/////// top to bottom 3rd 1ine sky blue
glVertex2i(571,370);
glVertex2i(629,370);
glEnd();

/////// top to bottom 2nd box yallow

glBegin(GL_QUADS);
glColor3ub(238, 238, 0);
glVertex2i(571,435);
glVertex2i(629,435);
glVertex2i(629,390);
glVertex2i(571,390);
/////// top to bottom 4th box yallow
glVertex2i(571,358);
glVertex2i(629,358);
glVertex2i(629,315);
glVertex2i(571,315);
glEnd();




//___________7 nth right middle 3 tala house_____________

glBegin(GL_QUADS); //1st floor house
glColor3ub(255, 110, 180);
glVertex2i(470,320);
glVertex2i(470,380);
glVertex2i(550,380);
glVertex2i(550,320);
glEnd();


glLineWidth(8);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(152 ,245, 255);
glVertex2i(470,320);
glVertex2i(470,380);
glVertex2i(550,380);
glVertex2i(550,320);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(255, 110, 180);
glVertex2i(475,380);
glVertex2i(475,430);
glVertex2i(545,430);
glVertex2i(545,380);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(152 ,245, 255);
glVertex2i(475,380);
glVertex2i(475,430);
glVertex2i(545,430);
glVertex2i(545,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(255, 110, 180);
glVertex2i(480,430);
glVertex2i(480,470);
glVertex2i(540,470);
glVertex2i(540,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(152 ,245, 255);
glVertex2i(480,430);
glVertex2i(480,470);
glVertex2i(540,470);
glVertex2i(540,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(255, 110, 180);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(152 ,245, 255);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();
glLineWidth(7);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(152 ,245, 255);
glVertex2i(490,320);
glVertex2i(490,340);
glVertex2i(530,340);
glVertex2i(530,320);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(152 ,245, 255);
glVertex2f(500,320 );
glVertex2f(500,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(152 ,245, 255);
glVertex2f(510,320 );
glVertex2f(510,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(152 ,245, 255);
glVertex2f(520,320 );
glVertex2f(520,340 );
glEnd();




//___________right last 3 tala house_____________

glBegin(GL_QUADS); //middle house
glColor3ub(0, 255, 255);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(255,255,240);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();


glBegin(GL_QUADS); //2 tola
glColor3ub(0, 255, 255);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(255,255,240);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(0, 255, 255);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(255,255,240);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();


glBegin(GL_QUADS); //front door type
glColor3ub(138,255,255);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door line
glColor3ub(255,255,240);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();
glLineWidth(7);
glBegin(GL_LINE_LOOP); //front door line
glColor3ub(255,255,240);
glVertex2i(670,315);
glVertex2i(670,340);
glVertex2i(710,340);
glVertex2i(710,315);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(255,255,240);
glVertex2f(680,315 );
glVertex2f(680,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(255,255,240);
glVertex2f(690,315 );
glVertex2f(690,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(255,255,240);
glVertex2f(700,315 );
glVertex2f(700,340 );
glEnd();


//.............................................................
////tree control ....by same x -axis

Tree(150);
Tree(230);
Tree(315);
Tree(400);



}

void Left_tree()
{

    ///////////////////////////-------TREE(1)---------////////////////----------->>>>>>>>

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3ub(2550,155,0);
glVertex2i(80,300);
glVertex2i(80,320);
glEnd();

//void tree(){
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(65,320);
glVertex2i(95,320);
glVertex2i(80,340);
glEnd();
glBegin(GL_TRIANGLES);//
glColor3ub(51,152,102);
glVertex2i(66,325);
glVertex2i(94,325);
glVertex2i(80,350);
glEnd();
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(68,332);
glVertex2i(92,332);
glVertex2i(80,355);
glEnd();
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(70,337);
glVertex2i(90,337);
glVertex2i(80,360);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(0,244,0);
glVertex2i(70,343);
glVertex2i(90,343);
glVertex2i(80,365);
glEnd();


//////////////////////////-------TREE(2)---------////////////////----------->>>>>>>>

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3ub(255,155,0);
glVertex2i(160,300);
glVertex2i(160,320);
glEnd();

//void tree(){
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(145,320);
glVertex2i(175,320);
glVertex2i(160,340);
glEnd();
glBegin(GL_TRIANGLES);//
glColor3ub(51,152,102);
glVertex2i(66+80,325);
glVertex2i(94+80,325);
glVertex2i(80+80,350);
glEnd();
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(67+80,330);
glVertex2i(93+80,330);
glVertex2i(80+80,355);
glEnd();
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(69+80,336);
glVertex2i(91+80,336);
glVertex2i(80+80,360);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(0,244,0);
glVertex2i(70+80,342);
glVertex2i(90+80,342);
glVertex2i(80+80,365);
glEnd();

//////////////////////////-------TREE(3)---------////////////////----------->>>>>>>>

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3ub(255,155,0);
glVertex2i(240,300);
glVertex2i(240,320);
glEnd();

//void tree(){
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(145+80,320);
glVertex2i(175+80,320);
glVertex2i(160+80,340);
glEnd();
glBegin(GL_TRIANGLES);//
glColor3ub(51,152,102);
glVertex2i(66+80+80,325);
glVertex2i(94+80+80,325);
glVertex2i(80+80+80,350);
glEnd();
glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(67+80+80,330);
glVertex2i(93+80+80,330);
glVertex2i(80+80+80,355);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(51,152,102);
glVertex2i(69+80+80,336);
glVertex2i(91+80+80,336);
glVertex2i(80+80+80,360);
glEnd();

glBegin(GL_TRIANGLES);//Bottom
glColor3ub(0,244,0);
glVertex2i(70+80+80,342);
glVertex2i(90+80+80,342);
glVertex2i(80+80+80,365);
glEnd();

}



void sun(){

    glColor3ub(249,215,28);
    DrawCircle(100,380, 25, 10000);

}

void updatesun()
{
		if (sunStatus == 1)
		{
			if (sunY>=80)
		{
			sunY=80;
		}
		else sunY+=0.5;
		}

		glPushMatrix();
		glTranslatef(sunX, sunY, 0);
		sun();
		glPopMatrix();
	}




/////////////////////-------------PLAN--------------//////////////////
void plan(){
glBegin(GL_QUADS);//Plan
glColor3f(0, 0, 0);
glVertex2i(120,470);
glVertex2i(190,470);
glVertex2i(182,485);
glVertex2i(140,483);//middle
glEnd();

glBegin(GL_TRIANGLES);//Plan
glColor3f(1, 0, 0); // Red
glVertex2i(148,480);
glVertex2i(152,483);
glVertex2i(140,490);
glEnd();

glBegin(GL_TRIANGLES);//Plan
glColor3f(1, 0, 0); // Red
glVertex2i(150,472);
glVertex2i(162,470);
glVertex2i(142,460);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1, 0, 0);
glVertex2i(165,477);
glVertex2i(175,477);
glEnd();
}


void updateplan()
	{
		if (planStatus == 1)
		{
			planX +=planSpeed;
		}
        if (planX>600)
		{
			planX =-150 ;
		}
		glPushMatrix();
		glTranslatef(planX, planY, 0);
		plan();
		glPopMatrix();
	}
void display() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


grass();
sky();
updatesun();

updatecloud1();
updatecloud2();
updatecloud3();
updateplan();

house();

Left_tree();
Road();
river();
updateship3();
updateship1();
updateship2();

Lamp();
updatecar1();
updatecar2();
updatetrack();
updatebus();




glFlush(); // Render now
glutPostRedisplay();
glutSwapBuffers();


}





/////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////MIDNIGHT//////////////////////////////


void midnightship1(){



glBegin(GL_QUADS); //
glColor3ub(155,100,0);
glVertex2f(430,160);
glVertex2f(540,160);
glVertex2f(570,180);
glVertex2f(400,180);
glEnd();



glBegin(GL_QUADS);
glColor3ub(100,100,100);
glVertex2f(420,180);
glVertex2f(550,180);
glVertex2f(550,195);
glVertex2f(420,195);
glEnd();



glBegin(GL_QUADS);
glColor3ub(120,140,140);
glVertex2f(430,195);
glVertex2f(550,195);
glVertex2f(540,210);
glVertex2f(430,210);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(520,200-2);
glVertex2f(550-2,200-2);
glVertex2f(542,205+2);
glVertex2f(520,205+2);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450,210);
glVertex2f(470,210);
glVertex2f(470,227);
glVertex2f(450,227);
glEnd();
glBegin(GL_QUADS);
glColor3ub(142,65,23);
glVertex2f(450,227);
glVertex2f(470,227);
glVertex2f(470,230);
glVertex2f(450,230);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450+30,210);
glVertex2f(470+30,210);
glVertex2f(470+30,227);
glVertex2f(450+30,227);
glEnd();
glBegin(GL_QUADS);
glColor3ub(142,65,23);
glVertex2f(450+30,227);
glVertex2f(470+30,227);
glVertex2f(470+30,230);
glVertex2f(450+30,230);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(450+30+30,210);
glVertex2f(470+30+30,210);
glVertex2f(470+30+30,227);
glVertex2f(450+30+30,227);
glEnd();
glBegin(GL_QUADS);
glColor3ub(142,65,23);
glVertex2f(450+30+30,227);
glVertex2f(470+30+30,227);
glVertex2f(470+30+30,230);
glVertex2f(450+30+30,230);
glEnd();





glColor3ub(255,255,0);
DrawCircle(435, 170, 5, 10000);



glColor3ub(255,255,0);
DrawCircle(435+25, 170, 5, 10000);



glColor3ub(255,255,0);
DrawCircle(435+25+25, 170, 5, 10000);



glColor3ub(255,255,0);
DrawCircle(435+25+25+25, 170, 5, 10000);



glColor3ub(255,255,0);
DrawCircle(435+25+25+25+25, 170, 5, 10000);



glColor3ub(255,255,0);
DrawCircle(447, 187, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(447+25, 187, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(447+25+25, 187, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(447+25+25+25, 187, 4, 1000);




glColor3ub(255,255,0);
DrawCircle(445, 202, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(455, 202, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(455+10, 202, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(455+10+10, 202, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(455+10+10+10, 202, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(455+10+10+10+10, 202, 4, 1000);



glColor3ub(255,255,0);
DrawCircle(455+10+10+10+10+10, 202, 4, 1000);



}



    void updatemidnightship1()
    {
        if (ship1Status == 1)
        {
            ship1X +=ship1Speed1;
        }
        if (ship1X>350)
        {
            ship1X =-550 ;
        }
        glPushMatrix();
        glTranslatef(ship1X, ship1Y, 0);
        midnightship1();
        glPopMatrix();
    }



void midnightship2()
{



glBegin(GL_QUADS); //
glColor3ub(67,67,67);
glVertex2f(20,160);
glVertex2f(80,160);
glVertex2f(100,180);
glVertex2f(20,180);
glEnd();



glBegin(GL_QUADS);
glColor3ub(28,29,136);
glVertex2f(30,180);
glVertex2f(90,180);
glVertex2f(80,195);
glVertex2f(30,195);
glEnd();



glBegin(GL_QUADS);
glColor3ub(100,00,100);
glVertex2f(40,195);
glVertex2f(73,195);
glVertex2f(73,210);
glVertex2f(40,210);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(40,182);
glVertex2f(50,182);
glVertex2f(50,193);
glVertex2f(40,193);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,255,255);
glVertex2f(40+15,182);
glVertex2f(50+15,182);
glVertex2f(50+15,193);
glVertex2f(40+15,193);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(40+15+15,182);
glVertex2f(50+15+15,182);
glVertex2f(50+15+15,193);
glVertex2f(40+15+15,193);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(45,197);
glVertex2f(55,197);
glVertex2f(55,208);
glVertex2f(45,208);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(45+15,197);
glVertex2f(55+15,197);
glVertex2f(55+15,208);
glVertex2f(45+15,208);
glEnd();



}



void updatemidnightship2()
    {
        if (ship2Status == 1)
        {
            ship2X +=ship2Speed;
        }
        if (ship2X>700)
        {
            ship2X =-150 ;
        }
        glPushMatrix();
        glTranslatef(ship2X, ship2Y, 0);
        midnightship2();
        glPopMatrix();
    }




void midnightship3()
{



glBegin(GL_QUADS); //
glColor3ub(67,67,67);
glVertex2f(320,240);
glVertex2f(380,240);
glVertex2f(380,260);
glVertex2f(300,260);
glEnd();



glBegin(GL_QUADS);
glColor3ub(28,29,136);
glVertex2f(320,260);
glVertex2f(375,260);
glVertex2f(375,275);
glVertex2f(330,275);
glEnd();



glBegin(GL_QUADS);
glColor3ub(100,00,100);
glVertex2f(335,275);
glVertex2f(370,275);
glVertex2f(370,290);
glVertex2f(335,290);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(330,262);
glVertex2f(340,262);
glVertex2f(340,273);
glVertex2f(330,273);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,255,255);
glVertex2f(330+15,262);
glVertex2f(340+15,262);
glVertex2f(340+15,273);
glVertex2f(330+15,273);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(330+15+15,262);
glVertex2f(340+15+15,262);
glVertex2f(340+15+15,273);
glVertex2f(330+15+15,273);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(340,277);
glVertex2f(350,277);
glVertex2f(350,288);
glVertex2f(340,288);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0,255,0);
glVertex2f(355,277);
glVertex2f(365,277);
glVertex2f(365,288);
glVertex2f(355,288);
glEnd();



}



    void updatemidnightship3()
    {
        if (ship3Status == 1)
        {
            ship3X -=ship3Speed;
        }
        if (ship3X<-400)
        {
            ship3X =400 ;
        }
        glPushMatrix();
        glTranslatef(ship3X, ship3Y, 0);
        midnightship3();
        glPopMatrix();
    }

void midnightRoad(){
 glBegin(GL_QUADS); //Road
glColor3ub(64,64,64);
glVertex2f(0,150 ); // x, y
glVertex2f(700,150);
glVertex2f(700,0); // x, y
glVertex2f(0,0);
glEnd();



glLineWidth(7.5);
glBegin(GL_LINES);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(30,80 );
glVertex2f(70,80 );



glVertex2f(110,80 );
glVertex2f(150,80 );



glVertex2f(190,80 );
glVertex2f(230,80 );



glVertex2f(270,80 );
glVertex2f(310, 80 );



glVertex2f(350,80 );
glVertex2f(390,80 );



glVertex2f(430,80 );
glVertex2f(470,80 );



glVertex2f(510,80 );
glVertex2f(550,80 );



glVertex2f(590,80 );
glVertex2f(630,80 );
glEnd();



 glBegin(GL_QUADS);    //1ST BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(0,140 ); // x, y
glVertex2f(0,150);
glVertex2f(40,150); // x, y
glVertex2f(40,140);
glEnd();
 glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(40,140 ); // x, y
glVertex2f(40,150);
glVertex2f(80,150); // x, y
glVertex2f(80,140);
glEnd();



glBegin(GL_QUADS);    //3RD BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(80,140 ); // x, y
glVertex2f(80,150);
glVertex2f(120,150); // x, y
glVertex2f(120,140);
glEnd();



glBegin(GL_QUADS);    //4 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(120,140 ); // x, y
glVertex2f(120,150);
glVertex2f(160,150); // x, y
glVertex2f(160,140);
glEnd();



glBegin(GL_QUADS);    //5 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(160,140 ); // x, y
glVertex2f(160,150);
glVertex2f(200,150); // x, y
glVertex2f(200,140);
glEnd();



glBegin(GL_QUADS);    //6 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(200,140 ); // x, y
glVertex2f(200,150);
glVertex2f(240,150); // x, y
glVertex2f(240,140);
glEnd();



glBegin(GL_QUADS);    //7 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(240,140 ); // x, y
glVertex2f(240,150);
glVertex2f(280,150); // x, y
glVertex2f(280,140);
glEnd();



glBegin(GL_QUADS);    //8 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(280,140 ); // x, y
glVertex2f(280,150);
glVertex2f(320,150); // x, y
glVertex2f(320,140);
glEnd();



glBegin(GL_QUADS);    //9 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(320,140 ); // x, y
glVertex2f(320,150);
glVertex2f(360,150); // x, y
glVertex2f(360,140);
glEnd();



glBegin(GL_QUADS);    //10 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(360,140 ); // x, y
glVertex2f(360,150);
glVertex2f(400,150); // x, y
glVertex2f(400,140);
glEnd();



glBegin(GL_QUADS);    //11 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(400,140 ); // x, y
glVertex2f(400,150);
glVertex2f(440,150); // x, y
glVertex2f(440,140);
glEnd();



glBegin(GL_QUADS);    //12 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(440,140 ); // x, y
glVertex2f(440,150);
glVertex2f(480,150); // x, y
glVertex2f(480,140);
glEnd();
glBegin(GL_QUADS);    //13 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(480,140 ); // x, y
glVertex2f(480,150);
glVertex2f(520,150); // x, y
glVertex2f(520,140);
glEnd();



glBegin(GL_QUADS);    //14 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(520,140 ); // x, y
glVertex2f(520,150);
glVertex2f(560,150); // x, y
glVertex2f(560,140);
glEnd();



glBegin(GL_QUADS);    //15 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(560,140 ); // x, y
glVertex2f(560,150);
glVertex2f(600,150); // x, y
glVertex2f(600,140);
glEnd();



glBegin(GL_QUADS);    //16 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(600,140 ); // x, y
glVertex2f(600,150);
glVertex2f(640,150); // x, y
glVertex2f(640,140);
glEnd();



glBegin(GL_QUADS);    //17 BOX
glColor3f(1.0, 1.0, 1.0);
glVertex2f(640,140 ); // x, y
glVertex2f(640,150);
glVertex2f(680,150); // x, y
glVertex2f(680,140);
glEnd();



glBegin(GL_QUADS);    //18 BOX
glColor3f(0.0, 0.0, 0.0);
glVertex2f(680,140 ); // x, y
glVertex2f(680,150);
glVertex2f(700,150); // x, y
glVertex2f(700,140);
glEnd();

}






void midnightLamp()
{


glBegin(GL_QUADS);    //1st lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(90,150 ); // x, y
glVertex2f(90,200);
glVertex2f(95,200); // x, y
glVertex2f(95,150);
glEnd();

glColor3ub(255,255,0);
DrawCircle(92, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(75,180 );
glVertex2f(110,180 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(76,180 );
glVertex2f(76,190 );
glEnd();

glColor3ub(255,0,0);
DrawCircle(76, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(109,180 );
glVertex2f(109,190 );
glEnd();

glColor3ub(128,255,0);
DrawCircle(109, 194, 7, 10000);





glBegin(GL_QUADS);    //2nd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(250,150 ); // x, y
glVertex2f(250,200);
glVertex2f(255,200); // x, y
glVertex2f(255,150);
glEnd();

glColor3ub(255,0,255);
DrawCircle(253, 202, 9, 10000);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(235,180 );
glVertex2f(270,180 );
glEnd();
glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(236,180 );
glVertex2f(236,190 );
glEnd();

glColor3ub(102,255,255);
DrawCircle(236, 194, 7, 10000);


glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(269,180 );
glVertex2f(269,190 );
glEnd();

glColor3ub(255,0,127);
DrawCircle(269, 194, 7, 10000);



glBegin(GL_QUADS);    //3rd lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(410,150 ); // x, y
glVertex2f(410,200);
glVertex2f(415,200); // x, y
glVertex2f(415,150);
glEnd();

glColor3ub(255,255,0);
DrawCircle(413, 202, 9, 10000);


glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(395,180 );
glVertex2f(430,180 );
glEnd();



glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(396,180 );
glVertex2f(396,190 );
glEnd();

glColor3ub(255,0,0);
DrawCircle(396, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(429,180 );
glVertex2f(429,190 );
glEnd();

glColor3ub(128,255,0);
DrawCircle(429, 194, 7, 10000);

glBegin(GL_QUADS);    //4th lamp
glColor3f(0.0, 0.0, 0.0);
glVertex2f(570,150 ); // x, y
glVertex2f(570,200);
glVertex2f(575,200); // x, y
glVertex2f(575,150);
glEnd();

glColor3ub(255,0,255);
DrawCircle(573, 202, 9, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(555,180 );
glVertex2f(590,180 );
glEnd();



glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(556,180 );
glVertex2f(556,190 );
glEnd();

glColor3ub(102,255,255);
DrawCircle(556, 194, 7, 10000);

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(589,180 );
glVertex2f(589,190 );
glEnd();
glColor3ub(255,0,127);
DrawCircle(589, 194, 7, 10000);
}

void midnightcar1()
{




	glBegin(GL_POLYGON);            // These vertices form a closed polygon
glColor3ub(102,0,0);
glVertex2f(40,118);
glVertex2f(40,150 ); // x, y
glVertex2f(160,150);
glVertex2f(160,118);// x, y

	glEnd();



   glBegin(GL_QUADS); //car

glColor3ub(102,0,0);
glVertex2f(57,150);
glVertex2f(80,175 ); // x, y
glVertex2f(120,175);
glVertex2f(142,150);// x, y
glEnd();
 glBegin(GL_QUADS); //glass

glColor3ub(255,255,51);
glVertex2f(65,152);
glVertex2f(80,170 ); // x, y
glVertex2f(98,170);
glVertex2f(98,152);// x, y
glEnd();
 glBegin(GL_QUADS); //glass

glColor3ub(255,255,51);
glVertex2f(102,170);
glVertex2f(120,170 ); // x, y
glVertex2f(134,152);
glVertex2f(102,152);// x, y
glEnd();

glColor3ub(0,0,0);
DrawCircle(80, 125, 15, 10000);

glColor3ub(255,255,255);
DrawCircle(80, 125, 11, 10000);


glColor3ub(0,0,0);
DrawCircle(120, 125, 15, 10000);

glColor3ub(255,255,255);
DrawCircle(120, 125, 11, 10000);



glEnd();
}

  	void updatemidnightcar1()
	{
		if (carStatus1 == 1)
		{
			car1X +=carSpeed1;
		}
        if (car1X>700)
		{
			car1X =-150 ;
		}
		glPushMatrix();
		glTranslatef(car1X, car1Y, 0);
		midnightcar1();
		glPopMatrix();
	}

	void midnightcar2()
    {
    glBegin(GL_POLYGON);            // body
    glColor3f(0,0,51);
    glVertex2f(100,20);
    glVertex2f(200,20);
    glVertex2f(200,40);
    glVertex2f(190,60);
    glVertex2f(150,60);
    glVertex2f(120,40);
    glVertex2f(110,40);
    glVertex2f(100,30);
    glEnd();



    glBegin(GL_POLYGON);            // front glass
    glColor3f(255,255,153);
    glVertex2f(150,57);
    glVertex2f(145,50);
    glVertex2f(130,40);
    glVertex2f(160,40);
    glVertex2f(160,57);
    glEnd();




    glBegin(GL_POLYGON);            // back glass
   glColor3f(255,255,153);
    glVertex2f(165,57);
    glVertex2f(165,40);
    glVertex2f(187,40);
    glVertex2f(187,57);
    glEnd();



    glColor3ub(0,0,0);
    DrawCircle(130, 23, 11, 10000);



    glColor3ub(224,224,224);
    DrawCircle(130, 23, 7, 10000);



    glColor3ub(0,0,0);
    DrawCircle(180, 23, 11, 10000);



    glColor3ub(224,224,224);
    DrawCircle(180, 23, 7, 10000);



   glEnd();
}

		void updatemidnightcar2()
	{
		if (car2Status == 1)
		{
			car2X -=car2Speed;
		}
        if (car2X<-200)
		{
			car2X =600 ;
		}
		glPushMatrix();
		glTranslatef(car2X, car2Y, 0);
		midnightcar2();
		glPopMatrix();
	}

	void midnightbus()
	{
	   glBegin(GL_QUADS); //glass

       glColor3ub(51,0,0);
       glVertex2f(620,20);
       glVertex2f(450,20 ); // x, y
       glVertex2f(450,60);
       glVertex2f(620,60);// x, y
       glEnd();

       	glBegin(GL_POLYGON);
       glColor3ub(51,0,0);
        glVertex2f(620,60);
        glVertex2f(620,100 );
        glVertex2f(470,100);
        glVertex2f(450,60);

	   glEnd();

	   glBegin(GL_POLYGON);            // samner glass
        glColor3ub(255,255,51);
        glVertex2f(470,100);
        glVertex2f(450,60);// x, y
        glVertex2f(470,60);
	   glEnd();

	    glBegin(GL_POLYGON);            // big glass
        glColor3ub(255,255,51);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

        glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // big glass
        glColor3ub(0,0,0);
        glVertex2f(475,90);
        glVertex2f(495,90);// x, y
        glVertex2f(495,45);
        glVertex2f(475,45);
	    glEnd();

	    glBegin(GL_POLYGON);            // door
        glColor3ub(255,255,255);
        glVertex2f(495,90);// x, y
        glVertex2f(495,40);
        glVertex2f(510,40);
        glVertex2f(510,90);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // glass
        glColor3ub(255,255,51);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(510,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(510,60);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // glass
         glColor3ub(255,255,51);
        glVertex2f(572,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(580,90);
        glVertex2f(542,90);// x, y
        glVertex2f(542,60);
        glVertex2f(580,60);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);            // glass
        glColor3ub(255,255,51);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

	    glLineWidth(1);
	    glBegin(GL_LINE_LOOP);            // glass
        glColor3ub(0,0,0);
        glVertex2f(572,90);
        glVertex2f(610,90);// x, y
        glVertex2f(610,60);
        glVertex2f(572,60);// x, y
	    glEnd();

        glColor3ub(0,0,0);
        DrawCircle(485, 23, 15, 10000);

        glColor3ub(224,224,224);
        DrawCircle(485, 23, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(595, 23, 15, 10000);

        glColor3ub(224,224,224);
        DrawCircle(595, 23, 11, 10000);



	}


		void updatemidnightbus()
	{
		if (busStatus1 == 1)
		{
			busX -=busSpeed1;
		}
        if (busX<-620)
		{
			busX =320 ;
		}
		glPushMatrix();
		glTranslatef(busX, busY, 0);
		midnightbus();
		glPopMatrix();
	}
void midnighttrack()
{
        glBegin(GL_POLYGON);            // back part
        glColor3ub(139,69,19);
        glVertex2f(300,95);
        glVertex2f(300,160);// x, y
        glVertex2f(400,160);
        glVertex2f(400,95);// x, y
	    glEnd();

	    glBegin(GL_POLYGON);            // front part
        glColor3ub(186,85,211);
        glVertex2f(400,95);
        glVertex2f(400,150);// x, y
        glVertex2f(430,150);
        glVertex2f(450,120);// x, y
        glVertex2f(450,95);// x, y
	    glEnd();

	     glBegin(GL_POLYGON);            // front part
        glColor3ub(192,192,192);
        glVertex2f(405,120);
        glVertex2f(405,145);// x, y
        glVertex2f(428,145);
        glVertex2f(445,120);// x, y
        glVertex2f(440,120);// x, y
	    glEnd();

	     glColor3ub(0,0,0);
        DrawCircle(420, 97, 15, 10000);//front chaka

        glColor3ub(224,224,224);
        DrawCircle(420, 97, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(420, 97, 9, 10000);//end

         glColor3ub(0,0,0);
        DrawCircle(330, 97, 15, 10000);//back chaka

        glColor3ub(224,224,224);
        DrawCircle(330, 97, 11, 10000);

         glColor3ub(0,0,0);
        DrawCircle(330, 97, 9, 10000);

}

void updatemidnighttrack()
	{
		if (trackStatus == 1)
		{
			trackX +=trackSpeed;
		}
        if (trackX>400)
		{
			trackX =-500 ;
		}
		glPushMatrix();
		glTranslatef(trackX, trackY, 0);
		midnighttrack();
		glPopMatrix();
	}

void midnightriver()//River
{


glBegin(GL_QUADS); //River

glColor3ub(0,0,0);
glVertex2f(0,150);
glColor3ub(0,0,0);
glVertex2f(0,298 ); // x, y
glColor3ub(0,0,0);
glVertex2f(700,298);
glColor3ub(30,144,255);
glVertex2f(700,150);// x, y
glEnd();


 glBegin(GL_QUADS); //sky
    glColor3ub(105,105,105); // Red
    glVertex2f(0,285 ); // x, y
    glVertex2f(700,285);
    glVertex2f(700,298); // x, y
    glVertex2f(0,298);
    glEnd();
}



void midnightgrass()
{
    glBegin(GL_QUADS); //sky
    glColor3ub(0,102,0); // Red
    glVertex2f(0,350 ); // x, y
    glColor3ub(0,102,0); // Red
    glVertex2f(700,350);
      glColor3ub(0,102,51); // Red
    glVertex2f(700,295); // x, y
    glColor3ub(0,102,51);// Red
    glVertex2f(0,295);
    glEnd();
}

void midnightsky()
{


 glBegin(GL_QUADS); //sky
 glColor3ub(0,0,0); // Red
glVertex2f(0,500 );
glColor3ub(0,0,0); // Red // x, y
glVertex2f(700,500);
glColor3ub(160,160,160); // Red
glVertex2f(700,350); // x, y
glColor3ub(160,160,160); // Red
glVertex2f(0,350);
glEnd();
}void star()
{
glPointSize(4.0);
glBegin(GL_POINTS);
glColor3f(190,194,203);
glVertex2f(5,490);
glVertex2f(30,450);
glVertex2f(50,490);
glVertex2f(95,480);
glVertex2f(100,400);
glVertex2f(145,430);
glVertex2f(175,420);
glVertex2f(160,480);
glVertex2f(200,470);
glVertex2f(260,470);
glVertex2f(310,480);
glVertex2f(340,490);
glVertex2f(380,460);
glVertex2f(405,450);
glVertex2f(405,485);
glVertex2f(430,490);
glVertex2f(455,465);
glVertex2f(475,480);
glVertex2f(490,485);
glVertex2f(510,450);
glVertex2f(530,480);
glVertex2f(560,490);
glVertex2f(565,450);
glVertex2f(590,475);
glVertex2f(620,480);
glVertex2f(645,445);
glVertex2f(665,488);
glVertex2f(670,465);
glVertex2f(695,490);
 glEnd();
}


void midnighthouse(){

//////////////////middle 1&2/////////////

glBegin(GL_POLYGON);//1st & 2nd middle building
glColor3ub(25,51,0); // Red
glVertex2i(45,325);
glVertex2i(115,325);
glVertex2i(115,410);
glVertex2i(80,425);//middle
glVertex2i(45,410);
glVertex2i(45,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(40,410);
glVertex2i(80,425);
glVertex2i(80,425);
glVertex2i(120,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(160,160,160);
glVertex2i(55,380);
glColor3ub(160,160,160);
glVertex2i(70,380);
glColor3ub(255,255,0);
glVertex2i(70,400);
glColor3ub(255,255,0);
glVertex2i(55,400);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(55,380);
glVertex2i(70,380);
glVertex2i(70,400);
glVertex2i(55,400);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(90,380);
glVertex2i(105,380);
glVertex2i(105,400);
glVertex2i(90,400);
glEnd();

/////////////////////////11111111111111////////////////////////

glBegin(GL_POLYGON);//1st building
glColor3ub(51,0,0); // Red
glVertex2i(5,310);
glVertex2i(75,310);
glVertex2i(75,370);
glVertex2i(40,385);//middle
glVertex2i(5,370);
glVertex2i(5,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(0,370);
glVertex2i(40,385);
glVertex2i(40,385);
glVertex2i(80,370);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(160,160,160);
glVertex2i(15,320);
glVertex2i(30,320);
glVertex2i(30,340);
glVertex2i(15,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(45,320);
glVertex2i(60,320);
glVertex2i(60,340);
glVertex2i(45,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(45,345);
glVertex2i(60,345);
glVertex2i(60,365);
glVertex2i(45,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(15,345);
glVertex2i(30,345);
glVertex2i(30,365);
glVertex2i(15,365);
glEnd();

////////////////////////2222222222222222////////////////////////////////



glBegin(GL_POLYGON);//2nd building
glColor3ub(51,0,51); // Red
glVertex2i(85,308);
glVertex2i(155,308);
glVertex2i(155,385);
glVertex2i(120,400);//middle
glVertex2i(85,385);
glVertex2i(85,360);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(80,385);
glVertex2i(120,400);
glVertex2i(120,400);
glVertex2i(160,385);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,320);
glVertex2i(115,320);
glVertex2i(115,340);
glVertex2i(100,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,320);
glVertex2i(145,320);
glVertex2i(145,340);
glVertex2i(130,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(130,345);
glVertex2i(145,345);
glVertex2i(145,365);
glVertex2i(130,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(100,345);
glVertex2i(115,345);
glVertex2i(115,365);
glVertex2i(100,365);
glEnd();
//////////////////33333333333333//////////


glBegin(GL_POLYGON);//3rd building
glColor3ub(51,51,0); // Red
glVertex2i(165,310);
glVertex2i(235,310);
glVertex2i(235,400);
glVertex2i(200,415);//middle
glVertex2i(165,400);
glVertex2i(165,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(160,400);
glVertex2i(200,415);
glVertex2i(200,415);
glVertex2i(240,400);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,320);
glVertex2i(190,320);
glVertex2i(190,340);
glVertex2i(175,340);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,320);
glVertex2i(220,320);
glVertex2i(220,340);
glVertex2i(205,340);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,345);
glVertex2i(220,345);
glVertex2i(220,365);
glVertex2i(205,365);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,345);
glVertex2i(190,345);
glVertex2i(190,365);
glVertex2i(175,365);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3ub(255,255,0);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(175,370);
glVertex2i(190,370);
glVertex2i(190,390);
glVertex2i(175,390);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3ub(255,255,0);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(205,370);
glVertex2i(220,370);
glVertex2i(220,390);
glVertex2i(205,390);
glEnd();
///////////////////////444444444444444444///////////////////////////

glBegin(GL_POLYGON);//4th building
glColor3ub(0,25,51); // Red
glVertex2i(240,320);
glVertex2i(310,320);
glVertex2i(310,410);
glVertex2i(275,425);//middle
glVertex2i(240,410);
glVertex2i(240,390);
glEnd();

glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2i(235,410);
glVertex2i(275,425);
glVertex2i(275,425);
glVertex2i(315,410);
glEnd();

 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,330);
glVertex2i(270,330);
glVertex2i(270,350);
glVertex2i(255,350);
glEnd();

 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,330);
glVertex2i(295,330);
glVertex2i(295,350);
glVertex2i(280,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,355);
glVertex2i(295,355);
glVertex2i(295,375);
glVertex2i(280,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,355);
glVertex2i(270,355);
glVertex2i(270,375);
glVertex2i(255,375);
glEnd();

 glBegin(GL_QUADS); //5th window (top left)
glColor3ub(255,255,0);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(255,380);
glVertex2i(270,380);
glVertex2i(270,400);
glVertex2i(255,400);
glEnd();


 glBegin(GL_QUADS); //6th window (top right)
glColor3ub(255,255,0);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();


glLineWidth(2);
glBegin(GL_LINE_LOOP); //loop
glColor3ub(255,255,255);
glVertex2i(280,380);
glVertex2i(295,380);
glVertex2i(295,400);
glVertex2i(280,400);
glEnd();


////////////////////////////////////////////////
/////////////////////////////////////////////////

glBegin(GL_QUADS); //middle house
glColor3ub(128,128,128);
glVertex2i(300,315);
glColor3ub(255,255,0);
glVertex2i(300,380);
glColor3ub(255,255,0);
glVertex2i(380,380);
glColor3ub(128,128,128);
glVertex2i(380,315);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(128,128,128);
glVertex2i(300,315);
glVertex2i(300,380);
glVertex2i(380,380);
glVertex2i(380,315);
glEnd();
glBegin(GL_QUADS); //2 tola
glColor3ub(128,128,128);
glVertex2i(305,380);
glColor3ub(255,255,0);
glVertex2i(305,430);
glColor3ub(255,255,0);
glVertex2i(375,430);
glColor3ub(128,128,128);
glVertex2i(375,380);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(128,128,128);
glVertex2i(305,380);
glVertex2i(305,430);
glVertex2i(375,430);
glVertex2i(375,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(128,128,128);
glVertex2i(310,430);
glColor3ub(255,255,0);
glVertex2i(310,480);
glColor3ub(255,255,0);
glVertex2i(370,480);
glColor3ub(128,128,128);
glVertex2i(370,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(128,128,128);
glVertex2i(310,430);
glVertex2i(310,480);
glVertex2i(370,480);
glVertex2i(370,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(255,255,0);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(128,128,128);
glVertex2i(320,315);
glVertex2i(320,410);
glVertex2i(360,410);
glVertex2i(360,315);
glEnd();
glLineWidth(7);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(128,128,128);
glVertex2i(320,315);
glVertex2i(320,340);
glVertex2i(360,340);
glVertex2i(360,315);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(128,128,128);
glVertex2f(330,315 );
glVertex2f(330,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(128,128,128);
glVertex2f(340,315 );
glVertex2f(340,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(128,128,128);
glVertex2f(350,315 );
glVertex2f(350,340 );
glEnd();






///////////////// right side 1st bulding............


glBegin(GL_POLYGON);//6th building
glColor3ub(102,51, 0);
int x1=155;
int x2=148;
glVertex2i(390,320);
glVertex2i(460,320);
glVertex2i(460,410);
glVertex2i(390,410);
glEnd();
///////////chaad
glLineWidth(9.0);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2i(388,410);
glVertex2i(463,410);
glEnd();

//------panir tanki
glLineWidth(25.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(430,423);
glVertex2i(460,423);
glEnd();
glLineWidth(29.0);
glBegin(GL_LINES);
glColor3ub(222,222,222);
glVertex2i(444,438);
glVertex2i(460,438);
glEnd();

////////// mid line in house 6th building

glLineWidth(5.0);
glBegin(GL_LINES);
int l=427;
glColor3ub(255,255,0);
glVertex2i(l,380);
glVertex2i(l,400);

glVertex2i(l,330);
glVertex2i(l,350);

glVertex2i(l,355);
glVertex2i(l,375);

glEnd();


 glBegin(GL_QUADS); //1s window
glColor3ub(255,255,0);
glVertex2i(255+x2,330);
glVertex2i(270+x2,330);
glVertex2i(270+x2,350);
glVertex2i(255+x2,350);
glEnd();
 glBegin(GL_QUADS); //2nd window
glColor3ub(255,255,0);
glVertex2i(280+x1,330);
glVertex2i(295+x1,330);
glVertex2i(295+x1,350);
glVertex2i(280+x1,350);
glEnd();

 glBegin(GL_QUADS); //3rd window
glColor3ub(255,255,0);
glVertex2i(280+x1,355);
glVertex2i(295+x1,355);
glVertex2i(295+x1,375);
glVertex2i(280+x1,375);
glEnd();

 glBegin(GL_QUADS); //4th window
glColor3ub(255,255,0);
glVertex2i(255+x2,355);
glVertex2i(270+x2,355);
glVertex2i(270+x2,375);
glVertex2i(255+x2,375);
glEnd();
 glBegin(GL_QUADS); //5th window (top left)
glColor3ub(255,255,0);
glVertex2i(255+x2,380);
glVertex2i(270+x2,380);
glVertex2i(270+x2,400);
glVertex2i(255+x2,400);
glEnd();

 glBegin(GL_QUADS); //6th window (top right)
glColor3ub(255,255,0);
glVertex2i(280+x1,380);
glVertex2i(295+x1,380);
glVertex2i(295+x1,400);
glVertex2i(280+x1,400);
glEnd();

/////////8 bulding .....2 tala .. blue one __________________________________


glBegin(GL_POLYGON);//8th building
glColor3ub(0, 0 ,51);
glVertex2i(565,460);
glVertex2i(635,460);
glVertex2i(635,310);
glVertex2i(565,310);

glEnd();

/////// top to bottom 1st 1ine sky blue

glLineWidth(10.0);
glBegin(GL_LINES);
glColor3ub(0 ,191 ,255);
glVertex2i(571,448);
glVertex2i(629,448);

/////// top to bottom 3rd 1ine sky blue
glVertex2i(571,370);
glVertex2i(629,370);
glEnd();

/////// top to bottom 2nd box yallow

glBegin(GL_QUADS);
glColor3ub(238, 238, 0);
glVertex2i(571,435);
glColor3ub(238, 238, 0);
glVertex2i(629,435);
glColor3ub(160, 160, 160);
glVertex2i(629,390);
glColor3ub(160, 160, 160);
glVertex2i(571,390);
glEnd();
/////// top to bottom 4th box yallow
glBegin(GL_QUADS);
glColor3ub(238, 238, 0);
glVertex2i(571,358);
glColor3ub(238, 238, 0);
glVertex2i(629,358);
glColor3ub(160, 160, 160);
glVertex2i(629,315);
glColor3ub(160, 160, 160);
glVertex2i(571,315);
glEnd();




//___________7 nth right middle 3 tala house_____________

glBegin(GL_QUADS); //1st floor house
glColor3ub(160,160, 160);
glVertex2i(470,320);
glColor3ub(255,0,0);
glVertex2i(470,380);
glColor3ub(255,0,0);
glVertex2i(550,380);
glColor3ub(160,160, 160);
glVertex2i(550,320);
glEnd();


glLineWidth(8);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(160,160, 160);
glVertex2i(470,320);
glVertex2i(470,380);
glVertex2i(550,380);
glVertex2i(550,320);
glEnd();

glBegin(GL_QUADS); //2 tola
glColor3ub(160,160, 160);
glVertex2i(475,380);
glColor3ub(255,0,0);
glVertex2i(475,430);
glColor3ub(255,0,0);
glVertex2i(545,430);
glColor3ub(160,160, 160);
glVertex2i(545,380);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(160,160, 160);
glVertex2i(475,380);
glVertex2i(475,430);
glVertex2i(545,430);
glVertex2i(545,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(160,160, 160);
glVertex2i(480,430);
glColor3ub(255,0,0);
glVertex2i(480,470);
glColor3ub(255,0,0);
glVertex2i(540,470);
glColor3ub(160,160, 160);
glVertex2i(540,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(160,160, 160);
glVertex2i(480,430);
glVertex2i(480,470);
glVertex2i(540,470);
glVertex2i(540,430);
glEnd();

glBegin(GL_QUADS); //front door type
glColor3ub(255, 0, 0);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();

glBegin(GL_LINE_LOOP); //front door type
glColor3ub(160,160, 160);
glVertex2i(490,320);
glVertex2i(490,410);
glVertex2i(530,410);
glVertex2i(530,320);
glEnd();
glLineWidth(7);
glBegin(GL_LINE_LOOP); //front door type
glColor3ub(160,160, 160);
glVertex2i(490,320);
glVertex2i(490,340);
glVertex2i(530,340);
glVertex2i(530,320);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(500,320 );
glVertex2f(500,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(510,320 );
glVertex2f(510,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(520,320 );
glVertex2f(520,340 );
glEnd();




//___________right last 3 tala house_____________

glBegin(GL_QUADS); //middle house
glColor3ub(0, 255, 255);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //middle house
glColor3ub(160,160, 160);
glVertex2i(650,315);
glVertex2i(650,380);
glVertex2i(730,380);
glVertex2i(730,315);
glEnd();


glBegin(GL_QUADS); //2 tola
glColor3ub(0, 255, 255);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glLineWidth(8);
glBegin(GL_LINE_LOOP); //2 tola
glColor3ub(160,160, 160);
glVertex2i(655,380);
glVertex2i(655,430);
glVertex2i(725,430);
glVertex2i(725,380);
glEnd();

glBegin(GL_QUADS); //3 tola
glColor3ub(0, 255, 255);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();

glBegin(GL_LINE_LOOP); //3 tola
glColor3ub(160,160, 160);
glVertex2i(660,430);
glVertex2i(660,480);
glVertex2i(720,480);
glVertex2i(720,430);
glEnd();


glBegin(GL_QUADS); //front door type
glColor3ub(138,255,255);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();

glBegin(GL_LINE_LOOP); //front door line
glColor3ub(160,160, 160);
glVertex2i(670,315);
glVertex2i(670,410);
glVertex2i(710,410);
glVertex2i(710,315);
glEnd();
glLineWidth(7);
glBegin(GL_LINE_LOOP); //front door line
glColor3ub(160,160, 160);
glVertex2i(670,315);
glVertex2i(670,340);
glVertex2i(710,340);
glVertex2i(710,315);
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(680,315 );
glVertex2f(680,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(690,315 );
glVertex2f(690,340 );
glEnd();

glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(160,160, 160);
glVertex2f(700,315 );
glVertex2f(700,340 );
glEnd();


//.............................................................
////tree control ....by same x -axis

Tree(150);
Tree(230);
Tree(315);
Tree(400);



}


void moon(){



    glColor3ub(254, 252, 215);
    DrawCircle(100,380, 20, 10000);



}



void updatemoon()
{
        if (moonStatus == 1)
        {
            if (moonY>=80)
        {
            moonY=80;
        }
        else moonY+=0.5;
        }



        glPushMatrix();
        glTranslatef(moonX, moonY, 0);
        moon();
        glPopMatrix();
    }


void midnightdisplay() {
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);


midnightgrass();
midnightsky();
star();
updatemoon();

midnighthouse();
Left_tree();
midnightRoad();
midnightriver();
updatemidnightship3();
updatemidnightship1();
updatemidnightship2();

midnightLamp();
updatemidnightcar1();
updatemidnightcar2();
updatemidnighttrack();
updatemidnightbus();




glFlush(); // Render now
glutPostRedisplay();
glutSwapBuffers();


}


/////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////////////
/////////////Day rain view/////////////////////////////////

void day_raincloud1()
{
    glColor3ub(160,160,160);
    DrawCircle(100,440, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(115,450, 15, 10000);

   glColor3ub(160,160,160);
    DrawCircle(120,440, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(133,465, 18, 10000);

   glColor3ub(160,160,160);
    DrawCircle(140,447, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(153,455, 15, 10000);

}

void update_day_raincloud1()
	{
		if (cloud1Status == 1)
		{
			cloud1X +=cloud1Speed;
		}
        if (cloud1X>600)
		{
			cloud1X =-150 ;
		}
		glPushMatrix();
		glTranslatef(cloud1X, cloud1Y, 0);
		day_raincloud1();
		glPopMatrix();
	}

void day_raincloud2()
{
  glColor3ub(160,160,160);
    DrawCircle(100+200,440+20, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(115+200,450+20, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(120+200,440+20, 15, 10000);

   glColor3ub(160,160,160);
    DrawCircle(133+200,465+20, 18, 10000);

   glColor3ub(160,160,160);
    DrawCircle(140+200,447+20, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(153+200,455+20, 15, 10000);

}

void update_day_raincloud2()
	{
		if (cloud2Status == 1)
		{
			cloud2X +=cloud2Speed;
		}
        if (cloud2X>400)
		{
			cloud2X =-340 ;
		}
		glPushMatrix();
		glTranslatef(cloud2X, cloud2Y, 0);
		day_raincloud2();
		glPopMatrix();
	}

void day_raincloud3()
{
  glColor3ub(160,160,160);
    DrawCircle(100+400,440, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(115+400,450, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(120+400,440, 15, 10000);

    glColor3ub(160,160,160);
    DrawCircle(133+400,465, 18, 10000);

    glColor3ub(160,160,160);
    DrawCircle(140+400,447, 15, 10000);

     glColor3ub(160,160,160);
    DrawCircle(153+400,455, 15, 10000);

}

void update_day_raincloud3()
	{
		if (cloud3Status == 1)
		{
			cloud3X +=cloud3Speed;
		}
        if (cloud3X>200)
		{
			cloud3X =-550 ;
		}
		glPushMatrix();
		glTranslatef(cloud3X, cloud3Y, 0);
		day_raincloud3();
		glPopMatrix();
	}
	void display_day_rain()

{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    midnightsky();
    update_day_raincloud1();
    update_day_raincloud2();
    update_day_raincloud3();
    midnightgrass();

    house();

Left_tree();
Road();
river();
updateship3();
updateship1();
updateship2();

Lamp();
updatecar1();
updatecar2();
updatetrack();
updatebus();




    updaterain();
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}



void handleKeypress(unsigned char key, int x, int y) {



    switch (key) {



case 'a':
    carStatus1=0;
    glutPostRedisplay();

    break;
case 'b':
    carStatus1=1;

    glutPostRedisplay();
    break;

case 'c':
    busStatus1=0;
    glutPostRedisplay();

    break;
case 'd':
    busStatus1=1;

    glutPostRedisplay();
    break;

case 'e':
    ship1Status=1;
    glutPostRedisplay();
    break;

case 'f':
    ship1Status=0;
    glutPostRedisplay();
    break;

case 'A':
    ship2Status=1;
    glutPostRedisplay();
    break;

case 'B':
    ship2Status=0;
    glutPostRedisplay();
    break;

case 'C':
    ship3Status=1;
    glutPostRedisplay();
    break;

case 'D':
    ship3Status=0;
    glutPostRedisplay();
    break;

case 'E':
    car2Status=1;
    glutPostRedisplay();
    break;

case 'F':
    car2Status=0;
    glutPostRedisplay();
    break;
case 'G':
    cloud1Status=1;
    glutPostRedisplay();
    break;

case 'H':
    cloud1Status=0;
    glutPostRedisplay();
    break;

case 'I':
    cloud2Status=1;
    glutPostRedisplay();
    break;

case 'J':
    cloud2Status=0;
    glutPostRedisplay();
    break;

case 'K':
    cloud3Status=1;
    glutPostRedisplay();
    break;

case 'L':
    cloud3Status=0;
    glutPostRedisplay();
    break;
case '1':
    glutDisplayFunc(midnightdisplay);
    glutPostRedisplay();
    break;
case '2':
    glutDisplayFunc(display_day_rain);
    glutPostRedisplay();
    break;
case '3':
    glutDisplayFunc(display);
    glutPostRedisplay();
    break;



    }
    glutPostRedisplay();




}
void position(void) {
glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // white and opaque 0.309, 0.788, 0.545
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,500);
}



int main(int argc, char** argv) {
                                                                            printf("-->Enter a for stop the red car:\n");
printf("-->Enter b for start the red car:\n");
printf("-->Enter c for stop the bus:\n");
printf("-->Enter b for start the bus:\n");
printf("-->Enter e for stop the big ship:\n");
printf("-->Enter f for start the big ship:\n");
printf("-->Enter A for stop  ship2:\n");
printf("-->Enter B for start ship2:\n");
printf("-->Enter C for stop  ship3:\n");
printf("-->Enter D for start ship3:\n");
printf("-->Enter E for stop blue car:\n");
printf("-->Enter F for start blue car:\n");
printf("-->Enter g for stop truck:\n");
printf("-->Enter h for start truck:\n");
printf("-->Enter G for start cloud 1:\n");
printf("-->Enter H for stop the cloud 1:\n");
printf("-->Enter I for start the cloud 2:\n");
printf("-->Enter J for stop the cloud 2:\n");
printf("-->Enter K for start the cloud 3:\n");
printf("-->Enter L for stop the cloud 3:\n");
printf("-->Enter 1 for Midnight:\n");
printf("-->Enter 2 for Day rain:\n");
printf("-->Enter 3 for Day view:\n");
glutInit(&argc, argv);
glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(1000,700);
//glutInitWindowPosition(100,90);
glutCreateWindow("Final Project");
glutDisplayFunc(display);
// glutDisplayFunc(batman);
position();
glutKeyboardFunc(handleKeypress);



glutMainLoop();
}
