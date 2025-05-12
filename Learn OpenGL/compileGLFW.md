clang test.c -o test_app -std=c23 \
    -I/opt/homebrew/include \
    -L/opt/homebrew/lib \
    -lglfw \
    -framework OpenGL \
    -framework Cocoa \
    -framework IOKit \
    -framework CoreVideo