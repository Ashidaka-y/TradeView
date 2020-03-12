cmake_minimum_required(VERSION 3.10)

project(TradeView)

find_package(glfw3 CONFIG REQUIRED)

add_executable(TradeView
	main.cc
)

target_link_libraries(TradeView
PRIVATE
	glfw
)


