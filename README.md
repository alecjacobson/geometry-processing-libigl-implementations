# Geometry Processing – libigl-style implementation final project

This final project is to implement a chosen paper in the style of a
[libigl](https://libigl.github.io/). Your core functionality should be
encapsulated in a small number of `.h`/`.cpp` pairs. To present your
implementation you will prepare an demo and description in the style of the
[libigl tutorial](ihttps://libigl.github.io/tutorial/). This has two parts: a
`main.cpp` interactive visualization or demo of the method and a markdown
text+images entry `entry.md`+jpg files. Finally, create a 1min video demoing and
describing your work. This is open ended and intended for you to show your peers
what you've done. We will watch all videos in class together on the last day.

Here's a checklist for submission.

- `.h/.cpp` file pairs for core implementation
- `main.cpp` for tutorial demo
- `entry.md`+.jpg images for tutorial entry
- YouTube url to public/unlisted 1min video (include your name and paper title on first frame of video)

## `.h` suggestions 

Each folder in this repo contains `.h` header files that are _incomplete
suggestions_ and representative of how to structure your implementations. You
_may_ (and probably should) modify them, but keep within the general
libigl-style guidelines of simple matrix types as inputs and outputs. You are
welcome and encouraged to create additional subroutines in additional .h/.cpp
pairs.

## Whitelist/blacklist

You must implement the core functionality of the paper yourself; you will be
marked based on code you wrote. With this in mind, your welcome to use any
functions in Eigen and libigl that help you achieve this. Document and disclaim
any code you submit that you did not write yourself. As with any assignment,
know and follow the university's academic integrity policies.

## Language and External Libraries

You are encouraged (but not required) to use C++. You are also encouraged to use
Eigen and libigl's built-in solvers, though for some papers it may make sense to
link to external solvers (e.g., mosek, tensorflow, etc.).
