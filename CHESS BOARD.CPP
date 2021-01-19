#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

void main()
{
	int x1=170,i,gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:/turboc3/bgi");
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(170,180,"LOADING,PLEASE WAIT");

	for(i=0;i<300;++i)
	{
		delay(2);
		line(x1,200,x1,220);
		x1++;
	}
getch();
    int gr = DETECT, gm,pc;
    int r, c, x = 30, y = 30, black = 0;

    // Initialize graphics mode by passing
    // three arguments to initgraph function

      initgraph(&gr, &gm, "C:\\Tc\\BGI");

    // Iterate over 8 rows

    for (r = 0; r < 8; r++) {

	// iterate over 8 cols

	for (c = 0; c < 8; c++) {

	    // If current block is to
	    // color as black

	    if (black == 0) {

		// set next color as white

		setcolor(RED);

		// sets the current fill
		// pattern and fill color
		// for black boxes

		setfillstyle(SOLID_FILL, BLACK);

		// creating rectangle
		// with length and breadth
		// with size 30

		rectangle(x, y, x + 30, y + 30);

		// Fill an enclosed area

		floodfill(x + 1, y + 1, RED);

		// Set black to true

		black = 1;
	    }

	    // If current block is to
	    // color as white

	    else {
		setcolor(RED);

		// sets the current fill
		// pattern and fill color
		// for whitw boxes

		setfillstyle(SOLID_FILL, WHITE);

		// creating rectangle
		// with length and breadth
		// with size 30

		rectangle (x, y, x + 30, y + 30);

		// Fill an enclosed area

		floodfill(x + 1, y + 1, RED);

		// Set black to false

		black = 0;
	    }

	    // Increment for next row
	    if(r == 1)
	    {
		outtextxy(x + 6, y + 5, "P");
	    }

	    if(r == 6)
	    {
		setcolor(BLUE);
		outtextxy(x + 6, y + 5, "P");
	    }

	    if(r == 0 && c == 7 || r == 0 && c == 0)
		       {
				settextstyle(0, 0, 2);
				setcolor(RED);
				outtextxy(x + 6, y + 5, "R");

		       }
	    if(r == 7 && c == 0 || r == 7 && c == 7)
			{
				settextstyle(0, 0, 2);
				setcolor(BLUE);
				outtextxy(x + 6, y + 5, "R");

		       }
	     if(r == 7 && c == 1 || r == 7 && c == 6)
			{
				settextstyle(0, 0, 2);
				setcolor(BLUE);
				outtextxy(x + 6, y + 5, "K");

		       }
	     if(r == 0 && c == 1 || r == 0 && c == 6)
			{
				settextstyle(0, 0, 2);
				setcolor(RED);
				outtextxy(x + 6, y + 5, "K");

		       }
	      if(r == 0 && c == 2 || r == 0 && c == 5)
			{
				settextstyle(0, 0, 2);
				setcolor(RED);
				outtextxy(x + 6, y + 5, "B");

		       }
	      if(r == 7 && c == 2 || r == 7 && c == 5)
			{
				settextstyle(0, 0, 2);
				setcolor(BLUE);
				outtextxy(x + 6, y + 5, "B");

		       }
	       if(r == 0 && c == 3)
			{
				settextstyle(0, 0, 2);
				setcolor(RED);
				outtextxy(x + 6, y + 5, "Q");

		       }
		if(r == 7 && c == 3)
			{
				settextstyle(0, 0, 2);
				setcolor(BLUE);
				outtextxy(x + 6, y + 5, "Q");

		       }
		 if(r == 0 && c == 4)
			{
				settextstyle(0, 0, 1);
				setcolor(RED);
				outtextxy(x + 4, y + 7, "ÜÛÜ");

		       }
		  if(r == 7 && c == 4)
			{
				settextstyle(0, 0, 1);
				setcolor(BLUE);
				outtextxy(x + 4, y + 7, "ÜÛÜ");

		       }


	    x = x + 30;

	    // delay function under library
	    // "dos.h" for holding the
	    // function for some time

	    delay(30);

	}



	if (black == 0)
	    black = 1;
	else
	    black = 0;
	delay(30);

	x = 30;
	y = 30 + y;

    }
	printf("Enter the pawn you want to move first:");
	scanf("%d",&pc);
	setcolor(BLACK);
	outtextxy(x+6,y-55,"Û");
	setcolor(BLUE);
	outtextxy(x+6,y-80,"P");
	delay(30);
	printf("Enter the pawn you want to move first:");
	scanf("%d",&pc);
	setcolor(BLACK);
	outtextxy(x+65,y-55,"Û");
	setcolor(BLUE);
	outtextxy(x+65,y-110,"P");





     getch();
     closegraph();

}
