cmake_minimum_required (VERSION 2.6)

project (WaveConverter)

add_library(lame SHARED IMPORTED) # or STATIC instead of SHARED
set_target_properties(lame PROPERTIES
  IMPORTED_LOCATION "/usr/local/lib/libmp3lame.so"
  INTERFACE_INCLUDE_DIRECTORIES "/usr/local/include/lame"
)

add_executable(WaveConverter WaveConverter.cpp)

target_link_libraries(WaveConverter lame)
