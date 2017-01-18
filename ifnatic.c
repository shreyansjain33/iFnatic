#
include < stdio.h > #include < conio.h > #include < graphics.h > #include < dos.h > #include < math.h >
  ////////EYE OUTLINE & BROWS
  void eye(void) {
    int p[] = {
      270,
      190,
      120,
      150,
      90,
      120,
      230,
      140,
      270,
      190
    };
    int q[] = {
      370,
      190,
      520,
      150,
      550,
      120,
      400,
      140,
      370,
      190
    };
    line(0, 110, 640, 110); //topborder
    line(0, 360, 640, 360); //botborder
    line(270, 210, 270, 240); //eye L
    line(120, 170, 120, 270); //eye L
    line(270, 210, 120, 170); //eye L
    line(270, 240, 120, 270); //eye L
    line(370, 210, 370, 240); //eye R
    line(520, 170, 520, 270); //eye R
    line(370, 210, 520, 170); //eye R
    line(370, 240, 520, 270); //eye R
    sound(20);
    delay(500);
    fillpoly(5, p); //leftbrow
    fillpoly(5, q); //rightbrow
    outtextxy(100, 20, "It begins like this, it always does..");
    outtextxy(100, 60, "My story is one of sweet, sweet corruption.");
    outtextxy(100, 100, "However inevitably...");
    sleep(4);
    nosound();
  }
  ////////////SLITTED IRIS
void iris(void) {
    setfillstyle(1, 4);
    fillellipse(185, 220, 25, 30);
    setfillstyle(1, 0);
    fillellipse(185, 220, 5, 30);
    setfillstyle(1, 4);
    fillellipse(455, 220, 25, 30);
    setfillstyle(1, 0);
    fillellipse(455, 220, 5, 30);
    line(270, 240, 170, 300);
    line(370, 240, 470, 300);
    settextstyle(0, 0, 4);
    setcolor(4);
    outtextxy(50, 380, "IT SHALL BE MINE!");
    setcolor(15);
    settextstyle(0, 0, 1);
    sound(1200);
    delay(50);
    sound(900);
    delay(50);
    sound(2400);
    delay(150);
    sound(1200);
    delay(80);
    sound(600);
    delay(50);
    sound(1800);
    sleep(3);
    nosound();
  }
  ///////////////HAPPY EYE SMILE IX
void smile() {
    int c, d = 10;
    setcolor(WHITE);
    line(0, 110, 640, 110); //topborder
    line(0, 360, 640, 360); //botborder
    arc(200, 200, 0, 180, 60); //leftark
    arc(200, 200, 0, 180, 59);
    arc(200, 200, 0, 180, 58);
    arc(200, 200, 0, 180, 57);
    arc(200, 200, 0, 180, 56);
    arc(420, 200, 0, 180, 60); //rightark
    arc(420, 200, 0, 180, 59);
    arc(420, 200, 0, 180, 58);
    arc(420, 200, 0, 180, 57);
    arc(420, 200, 0, 180, 56);
    arc(290, 300, 180, 360, 20); //leftlip
    arc(290, 300, 180, 360, 19);
    arc(290, 300, 180, 360, 18);
    arc(330, 300, 180, 360, 20); //rightlip
    arc(330, 300, 180, 360, 19);
    arc(330, 300, 180, 360, 18);
    for (c = 0; c <= 5; c++) {
      setfillstyle(1, 14);
      settextstyle(1, 0, 3);
      outtextxy(40, 20, "D.S. Roberto is at KAALA-PANI");
      settextstyle(7, 0, 2);
      setcolor(1);
      outtextxy(250, 50, "-posted via iFONE-6piASS");
      setcolor(15);
      setfillstyle(1, 15);
      settextstyle(0, 0, 1);
      setcolor(WHITE);
      d = 10;
      arc(310, 310 + d, 210, 330, 15); //lowlip
      arc(310, 310 + d, 210, 330, 16);
      arc(310, 310 + d, 210, 330, 17);
      sound(1200);
      sleep(1);
      setfillstyle(1, 14);
      settextstyle(1, 0, 3);
      outtextxy(40, 20, "D.S. Roberto is at KAALA-PANI");
      settextstyle(7, 0, 2);
      setcolor(1);
      outtextxy(250, 50, "-posted via iFONE-6piASS");
      setcolor(15);
      setfillstyle(1, 15);
      settextstyle(0, 0, 1);
      setcolor(BLACK);
      arc(310, 310 + d, 210, 330, 15); //lowlip
      arc(310, 310 + d, 210, 330, 16);
      arc(310, 310 + d, 210, 330, 17);
      setcolor(WHITE);
      d = d - 10;
      arc(310, 310 + d, 210, 330, 15); //lowlip
      arc(310, 310 + d, 210, 330, 16);
      arc(310, 310 + d, 210, 330, 17);
      sound(2400);
      sleep(1);
      setcolor(BLACK);
      arc(310, 310 + d, 210, 330, 15); //lowlip
      arc(310, 310 + d, 210, 330, 16);
      arc(310, 310 + d, 210, 330, 17);
    }
    sound(1500);
    delay(50);
    nosound();
  }
  ///////////HUG ZE iPHON6piASS
void hug() {
  int e, f, t;
  settextstyle(7, 0, 4);
  setcolor(4);
  outtextxy(10, 150, "And I finally have what I craved..");
  setcolor(15);
  settextstyle(0, 0, 1);
  sound(40);
  sleep(4);
  nosound();
  cleardevice();
  setcolor(14);
  settextstyle(0, 0, 1);
  setfillstyle(1, 15);
  outtextxy(305, 115, "iFONE-6piASS");
  circle(350, 387, 8);
  rectangle(345, 382, 355, 393);
  bar(275, 125, 425, 375);
  setcolor(15);
  rectangle(250, 100, 450, 400); //fonebody
  outtextxy(440, 340, "*static* ... *static*");
  setfillstyle(1, 12);
  bar(225, 230, 245, 300); //body
  bar(245, 233, 295, 240); //hand
  setcolor(12);
  outtextxy(100, 150, "WHO LOVES MY DEAR iPONY?! <3");
  outtextxy(100, 200, "*ruB* *rUb* *Rub*  *giggle*");
  for (e = 0; e <= 5; e++) {
    f = 0;
    t = 12;
    setcolor(15);
    line(250, 197, 250, 223);
    circle(230 + f, 210, 20);
    setlinestyle(1, 0, 10);
    line(227, 300, 232 + f, 350);
    line(237, 300, 242 + f, 350);
    hrt(f, t);
    sound(2200);
    delay(200);
    sound(2400);
    delay(200);
    sound(2000);
    delay(200);
    sound(1800);
    delay(200);
    sound(1400);
    delay(200);
    nosound();
    setcolor(0);
    t = 0;
    line(250, 197, 250, 223);
    circle(230 + f, 210, 20);
    setlinestyle(1, 0, 10);
    line(227, 300, 232 + f, 350);
    line(237, 300, 242 + f, 350);
    hrt(f, t);
    f += 7;
    t = 12;
    circle(230 + f, 210, 20);
    setlinestyle(1, 0, 10);
    line(227, 300, 232 + f, 350);
    line(237, 300, 242 + f, 350);
    hrt(f, t);
    sound(1600);
    delay(200);
    sound(1700);
    delay(200);
    sound(1800);
    delay(200);
    sound(1900);
    delay(200);
    sound(2000);
    delay(200);
    sleep(1);
    nosound();
    setcolor(0);
    t = 0;
    circle(230 + f, 210, 20);
    setlinestyle(1, 0, 10);
    line(227, 300, 232 + f, 350);
    line(237, 300, 242 + f, 350);
    hrt(f, t);
  }
  setcolor(15);
  circle(230, 210, 20);
  hrt(0, 12);
}

int hrt(int f, int t) {
  setcolor(t);
  line(200 + f, 190, 185 + f, 170); //heartlow
  line(200 + f, 190, 215 + f, 170);
  arc(194 + f, 170, 0, 180, 8);
  arc(207 + f, 170, 0, 180, 7);
  line(220 + f, 150, 210 + f, 130); //heartmid
  line(220 + f, 150, 230 + f, 130);
  arc(215 + f, 130, 0, 180, 5);
  arc(225 + f, 130, 0, 180, 5);
  line(190 + f, 120, 185 + f, 110); //hearthigh
  line(190 + f, 120, 195 + f, 110);
  arc(187 + f, 110, 0, 180, 3);
  arc(193 + f, 110, 0, 180, 3);
  setcolor(15);
  return 0;
}

/////////////////EXPLOSION
int blast() {
    int i, j;
    for (i = 0; i < 10; i++) {
      setfillstyle(SOLID_FILL, RED);
      floodfill(0, 0, RED);
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
      outtextxy(210, 180, "BAZINGA");

      for (j = 20; j < 500; j += 40) {
        sound(j);
        delay(10);
      }

      setfillstyle(SOLID_FILL, YELLOW);
      floodfill(0, 0, YELLOW);
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 8);
      outtextxy(60, 180, "BAZINGA!!");

      for (j = 500; j > 200; j -= 40) {
        sound(j);
        setfillstyle(1, 10);
        settextstyle(8, 1, 4);
        outtextxy(20, 40, "M A T H N E S S");
        setfillstyle(1, 15);
        settextstyle(0, 0, 1);
        delay(15);
      }
    }
    nosound();
    return 0;
  }
  //////////ATTACK ON PARLMNT///////////

int parlmnt() {
    int k = 0;
    setfillstyle(1, 14);
    settextstyle(4, 0, 5);
    outtextxy(40, 170, "Gradually, exponentially,");
    outtextxy(110, 250, "the deeds get more virulent.");
    setfillstyle(1, 15);
    settextstyle(0, 0, 1);
    sound(2843);
    sleep(1);
    sound(837);
    sleep(2);
    sound(1077);
    sleep(1);
    sound(2385);
    sleep(2);
    nosound();
    while (k < 100) {
      setcolor(15);
      arc(600, 120, 0, 180, 120);
      rectangle(350, 120, 700, 380); //building
      setcolor(14);
      settextstyle(8, 0, 4);
      outtextxy(370, 150, "PARLIAMENT");
      setcolor(15);
      fillellipse(88, 168, 6, 2); //eyeleft
      fillellipse(120, 168, 6, 2); //eyeright
      circle(100, 170, 30); //face
      line(100, 200, 100, 290); //body
      line(100, 215, 50, 250); //armleft
      line(100, 215, 150, 215); //armrightBAZOOKA
      line(100, 290, 40, 380); //leftleg
      line(100, 290, 120, 380); //rightleg
      line(70, 160, 130, 160); //topband
      line(69, 177, 130, 175); //botband
      line(100, 185, 120, 185); //lips
      line(100, 185, 95, 182); //lipquirk
      line(108, 190, 114, 185); //liplift
      line(0, 380, 1000, 380); //ground
      rectangle(80, 200, 170, 216); //bazuka body
      rectangle(145, 215, 155, 240); //handle
      ellipse(195 + k, 208, 210, 150, 30, 10); //missile
      line(170 + k, 201, 170 + k, 215); //missileASS
      rectangle(140 + k, 204, 170 + k, 212);
      sound(3000);
      delay(50);
      k++;
      nosound();
      cleardevice();
    }
    return 0;
  }
  /////////ZONING IN ON ZE MISSILE
int zoom() {
    int o;

    for (o = 0; o < 200; o++) {
      setfillstyle(1, 14);
      bar((100 + o - (o / 45.0)), 235, 125 + o, 265);
      bar((50 + o - (o / 35.0)), 240, 100 + o, 260);
      bar((20 + o - (o / 15.0)), 245, 50 + o, 255);
      setfillstyle(1, 4);
      bar((118 + o - (o / 45.0)), 237, 125 + o, 263);

      sound(500 - (o * 2));
      setfillstyle(1, 15);
      fillellipse(200 + o, 250, 70, 20);
      setfillstyle(2, 14);
      bar(130 + o, 230, 170 + o, 270);
      setfillstyle(1, 4);
      fillellipse(150 + o, 220, 20, 10);
      fillellipse(150 + o, 280, 20, 10);
      setfillstyle(1, 14);
      settextstyle(1, 0, 3);
      outtextxy(20, 40, "Each act another crack in my sanity.");
      outtextxy(100, 400, "Each plea for mercy becoming just another..");
      setfillstyle(1, 15);
      settextstyle(0, 0, 1);
      delay(20);
      sound(50);
      cleardevice();
    }
    nosound();
    return 0;
  }
  /////////SACK too HARD
int sack(int i) {
  sound(250);
  delay(35);
  sound(500);
  setfillstyle(1, 14);
  settextstyle(1, 0, 3);
  outtextxy(18, 40, "..just a minor heist.");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);

  setfillstyle(1, 14);
  settextstyle(2, 0, 9);
  outtextxy(433, 90, "ST0P! THIEF!");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);

  setfillstyle(1, 2);
  bar(150 + i, 200, 170 + i, 250);
  setfillstyle(1, 0);
  settextstyle(0, 1, 1);
  outtextxy(160 + i, 205, "LOOT");
  settextstyle(0, 0, 1);
  setfillstyle(1, 15);
  return 0;
}

////////// //BUILDING A BANK
int build(void) {
  setfillstyle(1, 15);
  bar(150, 120, 250, 380); //door
  bar(270, 50, 430, 100); //roof
  bar(270, 140, 440, 380); //wall
  rectangle(250, 50, 420, 380); //building
  line(0, 380, 1000, 380); //ground
  setcolor(2);
  settextstyle(8, 0, 4);
  outtextxy(260, 100, "BANK");
  return 0;
}

////////////////STICK FUNCTION
int lmp = 100;

int stick(int i, int j, int po, int steps) {
  int pj, m, n, l = 0;

  if (po) lmp += 89;
  setfillstyle(1, 14);
  settextstyle(4, 0, 7);
  outtextxy(50, 250, "It starts off slow..");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  sound(200);
  delay(200);
  nosound();
  sound(80);
  sleep(3);
  sound(200);
  delay(250);
  nosound();
  sound(65);
  sleep(2);
  nosound();
  for (n = 0; n < steps; n++) {
    for (m = 0; m < 80; m++) {
      setfillstyle(1, 14);
      settextstyle(1, 0, 3);
      outtextxy(30, 90, "*whistle~whistle~*");
      setfillstyle(1, 15);
      settextstyle(0, 0, 1);

      if (po) sack(i);
      else if (lmp > 390) break;

      line(lmp, 290, j + l + m, 380); //leftleg
      line(lmp, 290, j + 80 + l - m, 380); //rightleg
      build();
      setcolor(15);
      fillellipse(88 + i, 168, 6, 2); //eyeleft
      fillellipse(120 + i, 168, 6, 2); //eyeright
      circle(100 + i, 170, 30); //face
      line(100 + i, 200, 100 + i, 290); //body
      line(100 + i, 215, 50 + i + m, 275); //armleft
      line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
      line(70 + i, 160, 130 + i, 160); //topband
      line(69 + i, 177, 130 + i, 175); //botband
      line(100 + i, 185, 120 + i, 185); //lips
      line(100 + i, 185, 95 + i, 182); //lipquirk
      line(108 + i, 190, 114 + i, 185); //liplift
      line(0, 380, 1000, 380); //ground
      i++;
      l++;
      lmp++;
      sound(2400 * (i * 2));
      delay(50);
      nosound();
      cleardevice();
    }
  }
  return 0;
}

///////////splitkick
int kick() {
  int j = 0, k = 0;
  setfillstyle(1, 14);
  settextstyle(4, 0, 5);
  outtextxy(0, 160, "And amongst all this,");
  sound(1800);
  sleep(2);
  outtextxy(05, 220, "only my quest drives me to endure..");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  sound(2200);
  sleep(3);
  nosound();
  while (k < 60) {
    setfillstyle(7, 15);
    bar(140, 185 - j, 160, 190 - j);
    circle(150, 170 - j, 30); //face
    circle(150, 170 - j, 29);
    circle(150, 170 - j, 28);
    circle(150, 170 - j, 27);
    line(140, 200 - j, 120, 230 - j); //upperarm
    line(120, 230 - j, 150, 230 - j); //forearm
    setcolor(4);
    rectangle(147, 230 - j, 153, 215 - j); //glove
    rectangle(147, 215 - j, 149, 209 - j); //finger
    rectangle(149, 215 - j, 152, 208 - j);
    setfillstyle(4, 15); //leye
    fillellipse(130, 170 - j, 8, 4);
    setfillstyle(5, 15); //reye
    fillellipse(170, 170 - j, 8, 4);
    setcolor(15);
    rectangle(138, 200 - j, 162, 300 - j); //body
    line(150, 300 - j, 130 - (2 * k), 420 - (3 * j)); //leftleg
    line(149, 300 - j, 129 - (2 * k), 419 - (3 * j));
    line(148, 300 - j, 128 - (2 * k), 418 - (3 * j));
    line(147, 300 - j, 127 - (2 * k), 417 - (3 * j));
    line(150, 300 - j, 170 + (2 * k), 420 - (3 * j)); //rightleg
    line(149, 300 - j, 169 + (2 * k), 419 - (3 * j));
    line(148, 300 - j, 168 + (2 * k), 418 - (3 * j));
    line(147, 300 - j, 167 + (2 * k), 417 - (3 * j));
    j++;
    k++;
    sound(100);
    delay(40);
    sound(800);
    delay(10);
    nosound();
    cleardevice();
  }
  setfillstyle(7, 15);
  bar(140, 185 - j, 160, 190 - j);
  circle(150, 170 - j, 30); //face
  circle(150, 170 - j, 29);
  circle(150, 170 - j, 28);
  circle(150, 170 - j, 27);
  line(140, 200 - j, 120, 230 - j); //upperarm
  line(120, 230 - j, 150, 230 - j); //forearm
  setcolor(4);
  rectangle(147, 230 - j, 153, 215 - j); //glove
  rectangle(147, 215 - j, 149, 209 - j); //finger
  rectangle(149, 215 - j, 152, 208 - j);
  setfillstyle(4, 15); //leye
  fillellipse(130, 170 - j, 8, 4);
  setfillstyle(5, 15); //reye
  fillellipse(170, 170 - j, 8, 4);
  setcolor(15);
  rectangle(138, 200 - j, 162, 300 - j); //body
  line(150, 300 - j, 130 - (2 * k), 420 - (3 * j)); //leftleg
  line(149, 300 - j, 129 - (2 * k), 419 - (3 * j));
  line(148, 300 - j, 128 - (2 * k), 418 - (3 * j));
  line(147, 300 - j, 127 - (2 * k), 417 - (3 * j));
  line(150, 300 - j, 170 + (2 * k), 420 - (3 * j)); //rightleg
  line(149, 300 - j, 169 + (2 * k), 419 - (3 * j));
  line(148, 300 - j, 168 + (2 * k), 418 - (3 * j));
  line(147, 300 - j, 167 + (2 * k), 417 - (3 * j));
  setcolor(GREEN);
  settextstyle(0, 0, 10);
  outtextxy(350, 20, "H");
  outtextxy(400, 110, "Y");
  outtextxy(440, 200, "A");
  outtextxy(500, 300, "H");
  sound(500);
  delay(20);
  sound(400);
  delay(20);
  sound(300);
  sleep(1);
  outtextxy(450, 380, "!");
  sound(2500);
  delay(20);
  sound(500);
  sleep(1);
  outtextxy(500, 380, "!");
  sound(2500);
  delay(20);
  sound(400);
  sleep(1);
  outtextxy(550, 380, "!");
  sound(2500);
  delay(20);
  sound(300);
  sleep(2);
  nosound();
  setcolor(15);
  sleep(4);
  return 1;
}

/////////WALKING IN L'HOSPITAL
int kidney() {
  setcolor(15); //reception desk
  setfillstyle(1, 6);
  bar3d(400, 320, 450, 480, 200, 1);
  setcolor(4);
  settextstyle(0, 0, 1);
  outtextxy(403, 350, "ORGANS");
  settextstyle(0, 0, 5);
  outtextxy(410, 320, "+");
  setfillstyle(1, 6);
  floodfill(520, 260, 15);
  setcolor(15);
  line(555, 275, 570, 270);
  setfillstyle(9, 15);
  fillellipse(565, 250, 8, 3);
  setfillstyle(1, 10);
  circle(580, 260, 30);
  bar(560, 290, 600, 380);
  setfillstyle(1, 1);
  bar(565, 380, 575, 440);
  bar(580, 380, 590, 440);
  return 0;
}

int shop() {
  setcolor(15); //iSTORE reception desk
  setfillstyle(1, 6);
  bar3d(400, 320, 450, 480, 200, 1);
  setcolor(7);
  settextstyle(0, 0, 1);
  outtextxy(403, 350, "iSTORE");
  settextstyle(0, 0, 3);
  outtextxy(410, 325, "@'");
  setfillstyle(1, 6);
  floodfill(520, 260, 15);
  setcolor(15);
  line(555, 275, 570, 270);
  setfillstyle(9, 15);
  fillellipse(565, 250, 8, 3);
  setfillstyle(1, 10);
  circle(580, 260, 30);
  bar(560, 290, 600, 380);
  setfillstyle(1, 1);
  bar(565, 380, 575, 440);
  bar(580, 380, 590, 440);
  return 0;
}

/////////STEALING CANDY

int candy(int i) {
    int m = 0, n, gp = 15;
    setfillstyle(1, 14);
    settextstyle(4, 0, 5);
    outtextxy(0, 200, "Then, I forsook my humanity...");
    setfillstyle(1, 15);
    settextstyle(0, 0, 1);
    sound(2000);
    sleep(2);
    sound(1200);
    sleep(3);
    while (m < 50) {
      if ((m % 2) == 0 && !kbhit()) {
        circle(150, 290, 25); //crying kid
        bar(130, 370, 140, 380);
        bar(160, 370, 170, 380);
        setcolor(3);
        arc(140, 320, 90, 210, 30);
        arc(140, 320, 90, 210, 29);
        arc(140, 320, 90, 210, 31);
        arc(140, 320, 90, 210, 28);
        arc(160, 320, 330, 90, 30);
        arc(160, 320, 330, 90, 29);
        arc(160, 320, 330, 90, 28);
        arc(160, 320, 330, 90, 31);
        setcolor(15);
        setfillstyle(1, 13);
        bar(125, 310, 175, 370);
        line(0, 380, 1000, 380); //ground
        line(100 + i, 290, 80 + i, 380); //leftleg
        line(100 + i, 290, 120 + i, 380); //rightleg
        setcolor(15);
        setfillstyle(5, 15);
        fillellipse(88 + i, 168, 6, 2); //eyeleft
        fillellipse(120 + i, 168, 6, 2); //eyeright
        circle(100 + i, 170, 30); //face
        line(100 + i, 200, 100 + i, 290); //body
        line(100 + i, 215, 50 + i, 275); //armleft
        line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
        line(70 + i, 160, 130 + i, 160); //topband
        line(69 + i, 177, 130 + i, 175); //botband
        line(100 + i, 185, 120 + i, 185); //lips
        line(100 + i, 185, 95 + i, 182); //lipquirk
        line(108 + i, 190, 114 + i, 185); //liplift
        setfillstyle(1, 15);
        bar(151 + i, 200, 155 + i, 235);
        setfillstyle(1, 4);
        fillellipse(153 + i, 180, 20, 20);
        delay(100);
      } else {
        circle(150, 290 + gp, 25);
        bar(130, 370 + gp, 140, 380 + gp);
        bar(160, 370 + gp, 170, 380 + gp);
        setcolor(3);
        arc(140, 320, 90, 210, 30);
        arc(140, 320, 90, 210, 29);
        arc(140, 320, 90, 210, 31);
        arc(140, 320, 90, 210, 28);
        arc(160, 320, 330, 90, 30);
        arc(160, 320, 330, 90, 29);
        arc(160, 320, 330, 90, 28);
        arc(160, 320, 330, 90, 31);
        setcolor(15);
        setfillstyle(1, 13);
        bar(125, 310 + gp, 175, 370 + gp);
        line(0, 380, 1000, 380); //ground
        line(100 + i, 290, 80 + i, 380); //leftleg
        line(100 + i, 290, 120 + i, 380); //rightleg
        setcolor(15);
        setfillstyle(5, 15);
        fillellipse(88 + i, 168, 6, 2); //eyeleft
        fillellipse(120 + i, 168, 6, 2); //eyeright
        circle(100 + i, 170, 30); //face
        line(100 + i, 200, 100 + i, 290); //body
        line(100 + i, 215, 50 + i, 275); //armleft
        line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
        line(70 + i, 160, 130 + i, 160); //topband
        line(69 + i, 177, 130 + i, 175); //botband
        line(100 + i, 185, 120 + i, 185); //lips
        line(100 + i, 185, 95 + i, 182); //lipquirk
        line(108 + i, 190, 114 + i, 185); //liplift
        setfillstyle(1, 15);
        bar(151 + i, 200, 155 + i, 235);
        setfillstyle(1, 4);
        fillellipse(153 + i, 180, 20, 20);
        delay(160);
      }
      i = i + 6;
      m++;
      setfillstyle(1, 14);
      settextstyle(1, 0, 3);
      outtextxy(18, 40, "*Yes, I stole a child's candy.");
      setfillstyle(1, 15);
      settextstyle(0, 0, 1);

      setfillstyle(1, 14);
      settextstyle(1, 0, 3);
      outtextxy(250, 400, "Twas the Final Straw.");
      setfillstyle(1, 15);
      settextstyle(0, 0, 1);
      sound(3000);
      delay(25);
      sound(2500);
      delay(25);
      sound(2000);
      delay(25);
      sound(500);
      delay(25);
      nosound();
      cleardevice();
    }
    return 0;
  }
  //////////////////WALK IN TO HOSPITAL

int stk(int i, int j, int steps) {
  int m, n, op = 100, l = 0;
  setfillstyle(1, 14);
  settextstyle(1, 0, 3);
  outtextxy(20, 50, "Too much had been lost.");
  sound(80);
  sleep(1);
  sound(60);
  sleep(1);
  sound(80);
  sleep(1);
  nosound();
  settextstyle(1, 0, 5);
  outtextxy(30, 200, "So I made a CHOICE..");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  sound(200);
  sound(700);
  sound(1900);
  sleep(3);
  nosound();
  for (n = 0; n < steps; n++) {
    for (m = 0; m < 80; m++) {

      if ((op + l) > 330) break;

      kidney();
      line(op + l, 290, j + l + m, 380); //leftleg
      line(op + l, 290, j + 80 + l - m, 380); //rightleg
      setcolor(15);
      setfillstyle(4, 15);
      fillellipse(88 + i, 168, 6, 2); //eyeleft
      fillellipse(120 + i, 168, 6, 2); //eyeright
      circle(100 + i, 170, 30); //face
      line(100 + i, 200, 100 + i, 290); //body
      line(100 + i, 215, 50 + i + m, 275); //armleft
      line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
      line(70 + i, 160, 130 + i, 160); //topband
      line(69 + i, 177, 130 + i, 175); //botband
      line(100 + i, 185, 120 + i, 185); //lips
      line(100 + i, 185, 95 + i, 182); //lipquirk
      line(108 + i, 190, 114 + i, 185); //liplift
      line(0, 380, 1000, 380); //ground
      i++;
      l++;
      sound(600);
      delay(10);
      sound(1800);
      delay(10);
      sound(3000);
      delay(10);
      sound(1200);
      delay(10);
      sound(2400);
      delay(10);
      nosound();
      cleardevice();
    }
  }

  kidney();
  line(op + l, 290, j + l + m, 380); //leftleg
  line(op + l, 290, j + 80 + l - m, 380); //rightleg
  setcolor(15);
  setfillstyle(4, 15);
  fillellipse(88 + i, 168, 6, 2); //eyeleft
  fillellipse(120 + i, 168, 6, 2); //eyeright
  circle(100 + i, 170, 30); //face
  line(100 + i, 200, 100 + i, 290); //body
  line(100 + i, 215, 50 + i + m, 275); //armleft
  line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
  line(70 + i, 160, 130 + i, 160); //topband
  line(69 + i, 177, 130 + i, 175); //botband
  line(100 + i, 185, 120 + i, 185); //lips
  line(100 + i, 185, 95 + i, 182); //lipquirk
  line(108 + i, 190, 114 + i, 185); //liplift
  line(0, 380, 1000, 380); //ground

  return 0;
}

///////////////WALK INTO iSTORE
int istk(int i, int j, int steps) {
  int m, n, op = 100, l = 0;
  setfillstyle(1, 14);
  settextstyle(1, 0, 3);
  outtextxy(20, 50, "With the resources acquired.");
  sound(80);
  sleep(1);
  sound(60);
  sleep(1);
  sound(80);
  sleep(1);
  nosound();
  settextstyle(1, 0, 3);
  outtextxy(10, 200, "I strutted into the Goddess' antechamber..");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  sound(600);
  sound(300);
  sound(2400);
  sleep(3);
  nosound();
  for (n = 0; n < steps; n++) {
    for (m = 0; m < 80; m++) {

      if ((op + l) > 330) break;

      shop();
      line(op + l, 290, j + l + m, 380); //leftleg
      line(op + l, 290, j + 80 + l - m, 380); //rightleg
      setcolor(15);
      setfillstyle(4, 15);
      fillellipse(88 + i, 168, 6, 2); //eyeleft
      fillellipse(120 + i, 168, 6, 2); //eyeright
      circle(100 + i, 170, 30); //face
      line(100 + i, 200, 100 + i, 290); //body
      line(100 + i, 215, 50 + i + m, 275); //armleft
      line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
      line(70 + i, 160, 130 + i, 160); //topband
      line(69 + i, 177, 130 + i, 175); //botband
      line(100 + i, 185, 120 + i, 185); //lips
      line(100 + i, 185, 95 + i, 182); //lipquirk
      line(108 + i, 190, 114 + i, 185); //liplift
      line(0, 380, 1000, 380); //ground
      i++;
      l++;
      sound(400);
      delay(10);
      sound(1200);
      delay(10);
      sound(2000);
      delay(10);
      sound(800);
      delay(10);
      sound(1600);
      delay(10);
      nosound();
      cleardevice();
    }
  }

  shop();
  setfillstyle(1, 14);
  settextstyle(6, 0, 6);
  setcolor(2);
  outtextxy(18, 40, "MORAL(1):MONEY TALKS.");
  setcolor(15);
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  sleep(3);
  line(op + l, 290, j + l + m, 380); //leftleg
  line(op + l, 290, j + 80 + l - m, 380); //rightleg
  setcolor(15);
  setfillstyle(4, 15);
  fillellipse(88 + i, 168, 6, 2); //eyeleft
  fillellipse(120 + i, 168, 6, 2); //eyeright
  circle(100 + i, 170, 30); //face
  line(100 + i, 200, 100 + i, 290); //body
  line(100 + i, 215, 50 + i + m, 275); //armleft
  line(100 + i, 215, 150 + i, 215); //armrightBAZOOKA
  line(70 + i, 160, 130 + i, 160); //topband
  line(69 + i, 177, 130 + i, 175); //botband
  line(100 + i, 185, 120 + i, 185); //lips
  line(100 + i, 185, 95 + i, 182); //lipquirk
  line(108 + i, 190, 114 + i, 185); //liplift
  line(0, 380, 1000, 380); //ground

  return 0;
}

///////////CASH RIPOFF
int rip() {
  int q = 0;
  setfillstyle(1, 14);
  settextstyle(1, 0, 3);
  setcolor(2);
  outtextxy(18, 40, "MORAL(2):Contrary to popular belief");
  sound(2400);
  sleep(2);
  sound(800);
  sleep(1);
  nosound();
  outtextxy(25, 100, "MONEY CAN BUY HAPPINESS!!");
  setcolor(15);
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  sound(1400);
  sleep(1);
  sound(300);
  sleep(2);
  sound(900);
  sleep(1);
  nosound();
  for (q = 0; q < 101; q++) {
    setfillstyle(1, 7);
    setcolor(15);
    bar(50, 50, 300, 400); //body
    setfillstyle(1, 15);
    outtextxy(75, 100, "PUMA");
    line(300, 50, 400, 200); //upperarm
    line(300, 100, 350, 200);
    line(350, 200, 320 + q, 300); //forearm
    line(400, 200, 330 + q, 307);
    settextstyle(0, 0, 2);
    setcolor(0);
    line(150, 75, 150, 350);
    line(200, 300, 300, 370);
    outtextxy(250 + q, 320, "$$$");
    setfillstyle(1, 15);
    fillellipse(315 + q, 325, 25, 25); //palm
    setfillstyle(1, 2); //HARD CASH
    bar3d(240 + q, 310, 300 + q, 345, 5, 1);
    sound(2450);
    delay(20);
    sound(2236);
    delay(25);
    nosound();
    cleardevice();
  }
  setfillstyle(1, 7);
  setcolor(15);
  bar(50, 50, 300, 400); //body
  setfillstyle(1, 15);
  outtextxy(75, 100, "PUMA");
  line(300, 50, 400, 200); //upperarm
  line(300, 100, 350, 200);
  line(350, 200, 420, 300); //forearm
  line(400, 200, 430, 307);
  settextstyle(0, 0, 2);
  setcolor(0);
  line(150, 75, 150, 350);
  line(200, 300, 300, 370);
  outtextxy(350, 320, "$$$");
  setfillstyle(1, 15);
  fillellipse(415, 325, 25, 25); //palm
  setfillstyle(1, 2); //HARD CASH
  bar3d(240 + q, 310, 400, 345, 5, 1);
  sound(2400);
  delay(40);
  nosound();
  setfillstyle(1, 15);
  settextstyle(1, 0, 2);
  setcolor(15);
  outtextxy(15, 420, "Again for slow ppl, he just wasted his money.");
  setfillstyle(1, 15);
  settextstyle(0, 0, 1);
  setcolor(14);
  settextstyle(0, 0, 10);
  outtextxy(340, 20, "KA");
  sound(200);
  delay(400);
  sound(1200);
  delay(200);
  sound(3000);
  nosound();
  sound(900);
  outtextxy(360, 80, "C");
  outtextxy(400, 140, "H");
  outtextxy(440, 200, "I");
  outtextxy(480, 260, "N");
  outtextxy(520, 320, "G");
  sound(450);
  sleep(2);
  sound(1450);
  sleep(2);
  outtextxy(560, 250, "*");
  nosound();
  return 0;
}

///////////KIDNEY RIPOFF
int kid() {
    int q = 0;
    int r[] = {
      220,
      300,
      225,
      325,
      300,
      300,
      300,
      360,
      220,
      300
    };
    setfillstyle(1, 14);
    settextstyle(1, 0, 3);
    outtextxy(18, 40, "Reaching down");
    sound(100);
    sleep(2);
    nosound();
    outtextxy(40, 200, "I sold my soul to the devil");
    setfillstyle(1, 15);
    settextstyle(0, 0, 1);
    sound(1100);
    sleep(1);
    sound(400);
    sleep(2);
    sound(600);
    sleep(1);
    nosound();
    for (q = 0; q < 101; q++) {
      setfillstyle(1, 7);
      setcolor(15);
      bar(50, 50, 300, 400); //body
      setfillstyle(1, 14);
      bar(50, 170, 300, 400); //naked body
      setfillstyle(1, 0);
      outtextxy(75, 100, "PUMA");
      setfillstyle(1, 0); //NAVEL
      fillellipse(175, 250, 5, 8);
      line(300, 50, 400, 200); //upperarm
      line(300, 100, 350, 200);
      line(350, 200, 320 + q, 300); //forearm
      line(400, 200, 330 + q, 307);
      settextstyle(0, 0, 2);
      setcolor(4);
      line(200, 300, 300, 370);
      setfillstyle(1, 4);
      fillpoly(5, r);
      fillellipse(315 + q, 325, 25, 25); //palm
      setfillstyle(1, 6);
      fillellipse(290 + q, 325, 32, 15);
      sound(50);
      delay(20);
      sound(25);
      delay(25);
      nosound();
      cleardevice();
    }
    setfillstyle(1, 7);
    setcolor(15);
    bar(50, 50, 300, 400); //body
    setfillstyle(1, 14);
    bar(50, 170, 300, 400); //naked body
    setfillstyle(1, 0);
    outtextxy(75, 100, "PUMA");
    setfillstyle(1, 0); //NAVEL
    fillellipse(175, 250, 5, 8);
    line(300, 50, 400, 200); //upperarm
    line(300, 100, 350, 200);
    line(350, 200, 420, 300); //forearm
    line(400, 200, 430, 307);
    settextstyle(0, 0, 2);
    setcolor(4);
    line(200, 300, 300, 370);
    setfillstyle(1, 4);
    fillpoly(5, r);
    fillellipse(415, 325, 25, 25); //palm
    setfillstyle(1, 6);
    fillellipse(390, 325, 32, 15);
    delay(40);
    setcolor(4);
    settextstyle(0, 0, 10);
    outtextxy(320, 20, "Sc");
    outtextxy(400, 110, "H");
    outtextxy(460, 200, "LI");
    outtextxy(470, 300, "CK");
    sound(3000);
    delay(400);
    sound(1200);
    delay(200);
    sound(200);
    sleep(1);
    nosound();
    sound(900);
    outtextxy(400, 380, "!");
    sleep(1);
    sound(400);
    outtextxy(475, 380, "!");
    sleep(1);
    sound(100);
    outtextxy(550, 380, "!");
    sleep(2);
    setfillstyle(1, 15);
    settextstyle(1, 0, 2);
    setcolor(15);
    outtextxy(15, 420, "*For all of you slow ppl, he just sold his kidney.");
    setfillstyle(1, 15);
    settextstyle(0, 0, 1);
    sound(600);
    sleep(1);
    sound(300);
    sleep(1);
    sound(700);
    sleep(1);
    sound(200);
    sleep(1);
    sound(100);
    sleep(1);
    nosound();
    return 0;
  }
  ///////////CREDITS ROLL
int credits() {
  int i = 0, j = 0;
  while (i != 580) {
    setfillstyle(1, 2);
    settextstyle(1, 0, 6);
    setcolor(2);
    outtextxy(160, 200 - (i), "*=|BASILISK|=*");
    settextstyle(6, 0, 3);
    setcolor(14);
    outtextxy(200, 300 - (i), "PROJECT        SEIT-ROLL-(1)");
    setcolor(5);
    outtextxy(200, 400 - (i), "Codemeister    SKJ(cse)");
    setcolor(1);
    outtextxy(200, 500 - (i), "Walking Logic  A.KOTH(cse)");
    setcolor(6);
    outtextxy(200, 600 - (i), "Busy/Tips guy  KalyaniBEE(cse)");
    setcolor(7);
    outtextxy(200, 700 - (i), "RoomPartner    GKS(eln)");
    setcolor(15);
    outtextxy(200, 800 - (i), "Coding AID     TurboC++ HELP");
    settextstyle(7, 0, 3);
    setcolor(12);
    outtextxy(10, 900 - (i), "THIS THING TOOK MORE THAN 100HOURS!! #DONE");
    settextstyle(0, 0, 1);
    setcolor(15);
    setfillstyle(1, 15);
    j++;
    i++;
    sound(i * 2);
    delay(15);
    sound(i * 3);
    delay(15);
    sound(i * 5);
    delay(10);
    nosound();
    cleardevice();
  }
  return 0;
}

//START OF MAIN FUNCTION
int main() {
  int gd = DETECT, gm;
  initgraph( & gd, & gm, "C:\\Turboc3\\bgi");
  eye();
  iris();
  cleardevice();
  sleep(3);
  stick(0, 60, 0, 5); //ROBERTO DOWREY Sr. APPROVES!!
  build();
  sleep(2);
  stick(380, 440, 1, 3);
  parlmnt();
  zoom();
  blast();
  cleardevice();
  kick();
  cleardevice();
  candy(300);
  stk(0, 70, 5); //KidneyWALK
  kid();
  cleardevice();
  istk(0, 70, 5);
  rip();
  cleardevice();
  hug();
  cleardevice();
  smile();
  sleep(2);
  credits();
  getch();
  cleardevice();
  return 0;
}
