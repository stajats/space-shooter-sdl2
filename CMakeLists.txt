cmake_minimum_required(VERSION 3.20)

project(SpaceShooter VERSION 1.0.0 LANGUAGES CXX)

find_package(PkgConfig REQUIRED)

pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_IMAGE REQUIRED SDL2_image)
pkg_check_modules(SDL2_MIXER REQUIRED SDL2_mixer)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)

set(SOURCES
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
    src/Entity.cpp
    src/Effect.cpp
    src/Enemy.cpp
)

add_executable(space-shooter ${SOURCES})

target_compile_features(space-shooter PRIVATE cxx_std_17)

target_compile_options(space-shooter PRIVATE
    -Wall
    -Wextra
)

target_include_directories(space-shooter PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_IMAGE_INCLUDE_DIRS}
    ${SDL2_MIXER_INCLUDE_DIRS}
    ${SDL2_TTF_INCLUDE_DIRS}
)

target_link_directories(space-shooter PRIVATE
    ${SDL2_LIBRARY_DIRS}
    ${SDL2_IMAGE_LIBRARY_DIRS}
    ${SDL2_MIXER_LIBRARY_DIRS}
    ${SDL2_TTF_LIBRARY_DIRS}
)

target_link_libraries(space-shooter PRIVATE
    ${SDL2_LIBRARIES}
    ${SDL2_IMAGE_LIBRARIES}
    ${SDL2_MIXER_LIBRARIES}
    ${SDL2_TTF_LIBRARIES}
)

add_custom_command(TARGET space-shooter POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/resources
        $<TARGET_FILE_DIR:space-shooter>
)

