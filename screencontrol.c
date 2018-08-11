#include <stdio.h>
#include <stdlib.h>
#include "grid.h"


//Determines where on the minigrid the
//cursor should go next (i.e. how to "re draw"
//the grid after movement)

grid getnewgrid(grid oldview, int xc, int yc ){
	//determine the new cursor coordinates
	int newx = oldview.xp + xc;
	int newy = oldview.yp + yc;
	//now determine where to put the new cursor/new grid
	//first, see if new cursor is out of bounds:
	int xm = oldview.xmin;
	int ym = oldview.ymin;
	int xmax = oldview.xmin + 8;
	int ymax = oldview.ymin + 8;
	grid newview;
	newview.xp = newx;
	newview.yp = newy;
	//too low (new < min):
	if (xm > newx)
		xm = newx;
	if (ym > newy)
		ym = newy;
	//too high (new > max):
	if (xmax < newx)
		xmax = newx;
	if (ymax < newy)
		ymax = newy;

}

