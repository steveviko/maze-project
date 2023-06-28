# 3D Maze Game

This is a simple 3D maze game implemented using raycasting in C++ and SDL2.

## Features

- 3D rendering of walls using raycasting
- Movement and rotation of the camera
- Collision detection with walls
- Loading of map from a file
- Display of map on the window
- Textures on walls, floor, and ceiling
- Handling of multiple events on the same frame
- Rain effect with toggle key
- Basic lighting effect

## Setup

### Prerequisites

- C++ compiler
- SDL2 library

### Building the Project

1. Clone the repository: `git clone https://github.com/yourusername/3dmazegame.git`
2. Navigate to the project directory: `cd 3dmazegame`
3. Build the project: `make`
4. Run the game: `./game map.txt`

Replace `map.txt` with the path to your map file.

## Controls

- `W`, `A`, `S`, `D`: Move the camera
- `Left`, `Right`: Rotate the camera
- `R`: Toggle rain
