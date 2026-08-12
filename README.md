# Space Shooter

A simple space shooter game written in C++ using the Simple DirectMedia Layer 2 (SDL2). The project was originally created by andreanlay and has been forked for use in the Alati za razvoj softvera (AZRS) course at the Faculty of Mathematics, University of Belgrade.

The game includes basic space-shooter features such as randomly spawned enemies, explosion effects, and a scrolling space background. Most of the original sprites were hand-made using Adobe Photoshop CC 2019.

### Prerequisites

The project requires:

C++17 compatible compiler
CMake 3.20 or newer
SDL2
SDL2_image
SDL2_mixer
SDL2_ttf
pkg-config

On Debian/Ubuntu-based systems, the required dependencies can be installed with:

sudo apt install cmake build-essential pkg-config \
    libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev### Running

## Built With

Clone the repository and create a separate build directory:

git clone <repository-url>
cd <repository-directory>

mkdir build
cd build

cmake ..
cmake --build .

The executable will be generated in the build directory.

## Acknowledgments

The original project was created by andreanlay.
