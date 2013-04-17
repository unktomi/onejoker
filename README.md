**OneJoker** is a general-purpose card game and simulation library created by
Lee Daniel Crocker in 2013.

OneJoker consists of a shared library written in pure C, a Python module that
calls into the shared library, and a set of Java classes that use the library.

The best documentation for OneJoker is currently the [wiki][2] at GitHub:

[2]: https://github.com/lcrocker/OneJoker/wiki

Build and Install
-----------------

The github source does not include pre-compiled libraries. I plan to make some
available from the website for the platforms I use, but if you want to use the
library without having to build it from scratch, you may have to find someone
to build it for you.

To use the library from C, Python, or Java you can install `libonejoker.so` or
`onejoker.dll` on your system where your code can find it. On Linux, that will
likely be /usr/local/lib, or else comnfigure your system to look for it in your
build tree. I do the latter, for example, while developing the library. To do
this on Ubuntu for example, create a file in /etc/ld.so.conf.d with one line
pointing to the build/clib directory, then run `sudo ldconfig`. On Windows,
just copy the `.dll` file into the same directory as the executable.

To build the library, you will need Python 3 and the GCC tool chain. On Linux,
the standard minimal development evironment will do fine. On Windows, you'll
have to install Python and something like MinGW or Cygwin to get GCC (this will
also provide a few needed standard Unix utilities like "rm").

The `build.py` script at the root of the source tree is used to build the
library and do all the other things usually done by "make" or some other build
automation tool. It is pure Python, so it should be more flexible, more
portable, and smarter than any such generic tool. Just type:

    python3 ./build.py library

And it should figure out your platform and build the library appropriately. If
you have Java installed and JAVA_HOME set, it will include the JNI functions
unless you specifically add "--nojava" to the build command.

    python3 ./build.py -h

will give you a more complete list of build flags and targets. There are also
dummy Makefiles in several directories that just call the build script for
those of you like me whose fingers just type "make" automatically.

The script is set up for an out-of-source build. That is, the directories under
src/ will not be modified; objects and executables will all be build under the
build/ directory.


Contents
--------

    build.py                    Build script
    docs/                       Documentation, mostly Markdown
    build/                      Build tree (empty in repository)
    src/
        clib/
            include/            C Header files
            tests/              C-based tests for library
            jni/                Java binding C code
        python/
            setup.py            Standard setup script
            onejoker/           The .py files for the module itself
            scripts/            Scripts for tasks like building lookup tables.
            tests/              Samples of use of the module
        java/                   JNI bindings and Java tests
            com/
                onejoker/
                    onejoker/   Java package sources
                    test/       Java test sources


Credits and Copyrights
----------------------

[CC-0][4]: To the extent possible under law, [Lee Daniel Crocker][1] has waived
all copyright and related or neighboring rights to this work.

[1]: http://www.etceterology.com
[4]: http://creativecommons.org/publicdomain/zero/1.0/
