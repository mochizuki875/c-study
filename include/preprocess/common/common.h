struct point {
    int x;
    int y;
};

int square(struct point p){
    return p.x * p.x + p.y * p.y;
}
