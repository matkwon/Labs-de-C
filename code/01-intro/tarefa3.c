int process_pixel(int level, int parametro) {
    int new_level;

    if(level < parametro) {
        new_level = 0;
    } else {
        new_level = 255;
    }

    return new_level;
}
