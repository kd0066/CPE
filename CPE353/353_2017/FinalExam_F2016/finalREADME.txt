The player may be moved by pressing the  i key = up, k key = down, j key = left, l key = right  (lowercase L), any other key = stop

MySQL Parameters

Host:                     mike

Port:                      33164

Database Name:   cpe35302

User:                      vader

Password:             asdf9999

MySQL Database Schema

walls( x REAL, y REAL, w REAL, h REAL ) 

pellets( x REAL, y REAL, w REAL, h REAL, dx REAL, dy REAL )

where (x,y) are coordinates of top-left corner, w is width, and h is height, dx and dy are x and y velocities

Warning:  Your Qt application must download the wall and pellet parameters on the fly for full credit.  Prior to grading, I will insert additional walls and pellets into the MySQL tables to check for this.

Hints:

    Use the Qt Designer tool to lay out the form.  I suggest using a QMainWindow base class for this. 
    Configure the graphics view/graphics scene such that the scene has dimensions 640x480 with origin at the center and a black background.
    Draw walls (rectangular boxes) in blue on the scene object using geometry data downloaded from table walls on the MySQL server (you will need a loop to process the data for each rectangle). 
    Draw pellets (ellipses in yellow on the scene object using geometry data downloaded from table pellets on the MySQL server (you will need a loop to process the data for each rectangle).  I suggest using a custom class that inherits from QGraphicsEllipseItem so that you can later add animation.
    Draw the player in red centered on the screen.
    Animate the player in response to key press events.  Recommended timer interval is 20 msec.
    Add code to prevent player from walking through walls.
    Add collision detection to make pellets disappear when they collide with player.
    Add code to make pellets bounce off walls.
    When finished, ZIP/TAR your entire source code folder and submit the ZIP/TAR file for grading.

