 void Ve(Point Qua){
        for (int i = 0; i < DoDai; i++){
            gotoxy(A[i].x,A[i].y);
            cout<<"X";
        }
        gotoxy(Qua.x, Qua.y); cout<<"*";
    }
        void DiChuyen(int Huong, Point& Qua){
        for (int i = DoDai-1; i>0;i--)
            A[i] = A[i-1];
        if (Huong==0) A[0].x = A[0].x + 1;
        if (Huong==1) A[0].y = A[0].y + 1;
        if (Huong==2) A[0].x = A[0].x - 1;
        if (Huong==3) A[0].y = A[0].y - 1;

    if ((A[0].x == Qua.x) && (A[0].y == Qua.y)){
        DoDai++;
        Qua.x = rand()%(MAXX - MINX) + MINX;
        Qua.y = rand()%(MAXY - MINY) + MINY;
    }}
};
