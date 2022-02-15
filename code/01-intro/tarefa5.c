int process_pixel(int level, int parametro) {
    int new_level;

    new_level = level*parametro;
    if (new_level > 255) {
        new_level = 255;
    }

    return new_level;
}
