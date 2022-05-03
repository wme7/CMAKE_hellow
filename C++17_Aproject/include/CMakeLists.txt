target_sources(test.run
    PRIVATE
        Hellow.hpp
)

# Add this directory to the header search path
target_include_directories(test.run PUBLIC ${CMAKE_CURRENT_LIST_DIR})