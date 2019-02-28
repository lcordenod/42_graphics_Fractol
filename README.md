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
