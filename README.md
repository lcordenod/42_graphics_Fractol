# 42_graphics_Fractol
 This project is meant to create graphically beautiful fractals

## Intro

Objective of this project is to represent different set of fractals and allow controls over these, including zoom, colors, moving them and changing their parameters on the go. This project is mainly about graphical representation of fractal sets and optimization of performance.

My Fractol project handles:
* 5 types of fractals (Mandelbrot/Julia/Burning Ship and 3 others coming from Julia set)
* Centered object position
* Zoom in/out controls
* Move camera controls (scaled)
* Reset and quit controls
* Change of colors *(6 sets of colors, including 4 shades of colors and 2 RGB sets)*
* Dark mode (change background color)
* Multithreading for improved performance + further optimizations
* Input and error control

*See more details about controls and bindings in Steps*

### What is a fractal?

A rough or fragmented geometric shape that can be subdivided in parts, each of which is (at least approximately) a reduced/size copy of the whole.

More info here: https://en.wikipedia.org/wiki/Fractal

Here is an example of the Mandelbrot set in shades of grey I represented:

<p>
  <img width="460" src="https://user-images.githubusercontent.com/45239771/53587540-ec730f80-3b8a-11e9-968b-8c42a162f769.png">
</p>

*To try it out, you will need to do a "make" in your terminal at folder root level.*

## Steps

1. Do `make` at folder root level to compile program
2. Execute program using `./fractol` and add a parameter from this list: 
` "julia", "mandelbrot", "burning_ship", "electricity", "cross"`
*(like "./fractol mandelbrot" for example)*
3. You can interact with the object using these bindings:

![screen shot 2019-02-28 at 8 25 46 pm](https://user-images.githubusercontent.com/45239771/53592673-129eac80-3b97-11e9-870e-f1d082a81542.png)

## Enjoy beautiful fractals!

Here are some fractal examples you can visualize on this program:

<p>
  <img width="800" src="https://user-images.githubusercontent.com/45239771/53593075-05ce8880-3b98-11e9-9142-2176f99b259b.png">
</p>
<p align=center><i>Julia set with RBG colors 1</i></p>
<p>
  <img width="800" src="https://user-images.githubusercontent.com/45239771/53592955-ab352c80-3b97-11e9-8c66-572378d095cc.png">
</p>
<p align=center><i>Burning Ship set with RBG colors 2</i></p>
<p>
  <img width="800" src="https://user-images.githubusercontent.com/45239771/53592957-acfef000-3b97-11e9-9b14-427c62e24ba5.png">
</p>
<p align=center><i>Mandelbrot set zoomed in with Red shades</i></p>

*Don't forget to use bindings presented above to play with fractals!*

## Make options

Makefile allows you to do several "make" actions including:
* `make` -> compile and create binary
* `make clean` -> remove .o files
* `make fclean` -> remove .o files and binary
* `make re` -> make fclean + make
