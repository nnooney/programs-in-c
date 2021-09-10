# programs-in-c

A Collection of Programs Written in C

## Building

This project uses the [Meson](https://mesonbuild.com/) build system. To build
the code, use the following commands:

``` shell
meson setup build/
ninja -C build/ all
```

## Testing

Tests are written with [Googletest](https://github.com/google/googletest) and
executed from Meson. To run the tests, use the following commands:

``` shell
ninja -C build/ test
```
