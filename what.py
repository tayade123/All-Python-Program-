
from turtle import *


def main():

    topHalf()
    bottomHalf()
    
# Function to create the top half of the elephant.
def topHalf():
    
    # Draws the first shape, top half of the elephant.
    begin_fill()
    fillcolor("#023a70")
    forward(200)
    left(90)
    circle(75,90)
    forward(50)
    circle(75,90)
    
    # Returns turtle to initial position, and stops drawing.
    goto(0,0)
    end_fill()
    penup()
    
    # Draws 3 stars aligned horizontally.
    for i in range(3):
        goto(50 + 50*i,45)
        star()
    
# Function to create one upside down, white star.
def star():
    
    # Begins drawing and sets initial direction to 0 degrees. 
    pendown()
    setheading(0)

    # Begins drawing the star.
    begin_fill()
    fillcolor("white")
    left(36)
    forward(17.5)
    i = 0
    while i < 5:
        right(144)
        forward(17.5)
        if i != 4:
            left(72)
            forward(17.5)
        else:
            break
        i += 1
    end_fill()
    penup()

# Function to create the bottom half of the elephant.
def bottomHalf():

    # Start at given point
    goto(0,-10)
    setheading(0)
    pendown()

    # Fill the image with the color red
    begin_fill()
    fillcolor("#df0516")
    
    # Set first vertex
    begin_poly()

    # Top line
    forward(200)

    # Start of Elephant Trunk
    right(90)
    forward(100)

    # First curve
    circle(5,180)
    forward(5)

    # Top of Trunk
    right(90)
    forward(20)

    # Front of Trunk
    right(90)
    forward(10)

    # Bottom curve of Trunk
    circle(-25,180)
     
    # Back of Elephant Trunk
    left(20)
    forward(50)
    right(20)

    # Curve between Trunk and Front leg
    circle(5,180)

    # Elephant Front Leg
    forward(75)
    right(90)
    forward(44)
    right(90)
    forward(75)

    # Bottom of Elephant 
    left(90)
    forward(65)

    # Elephant Back Leg
    left(90)
    forward(75)
    right(90)
    forward(44)
    right(90)
    goto(0,-10)
    # Set end vertex
    end_poly()

    # End fill
    end_fill()

    # Lifts Pen
    penup()
    
main()
